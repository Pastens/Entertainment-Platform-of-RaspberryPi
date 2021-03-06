<?php
    require 'Slim/Slim.php';
    \Slim\Slim::registerAutoloader();

    require 'Slim/Middleware/jsonP.php';
    require 'Slim/Middleware/bitConvert.php';
    require 'Slim/Extras/Middleware/HttpBasicAuthRoute.php';

    session_cache_limiter(false);

    $app = new \Slim\Slim(array(
        'debug' => true
    ));

    //Configurations
    require_once 'includes/db_config.php';

    //Routes
    require_once 'routes/api.php';
    require_once 'routes/functions.php';

    //Run Slim
    $app->add(new \Slim\Middleware\JSONPMiddleware());
    $app->add(new \Slim\Middleware\BitConvertMiddleware());
    $app->contentType('application/json');
    $app->run();
?>