<?php
	ini_set('display_errors', 'on');

	$app->get('/',function () {
		echo 'Api is go';
	});
	
	$app->get('/search/',function (){
		echo 'Search Api is go';
	});

	$app->get('/search/:name',function ($name) {
		$result = music_search($name,'1','0');
		echo $result;
	});


?>