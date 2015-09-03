<?php
	ini_set('display_errors', 'on');

	//API Page
	$app->get('/',function () {
		echo 'Api is go';
	});
	
	//Search API Routes
	$app->group('/search',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo 'Search API is go';
		});
		//Get method
		$app->get('/:name',function ($name) {
			$result = music_search($name,'1','0');
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$name = $_POST['name'];
			$result = music_search($name,'1','0');
			echo $result;
		});
	});
	
	//Music Information API Routes
	$app->group('/music',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo 'Information API is go';
		});
		//Get method
		$app->get('/:MusicId',function ($MusicId){
			$result = music_info($MusicId);
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$MusicId = $_POST['MusicId'];
			$result = music_info($MusicId);
			echo $result;
		});
	});

	//Articst-Album API Routes
	$app->group('/artist',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo 'Artiset-Album API is go';
		});
		//Get method
		$app->get('/:artist', function ($artist){
			$result = artist_album($artist,'0');
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$artist = $_POST['artist'];
			$result = music_info($artist);
			echo $result;
		});
	});

	//Album Information API Routes
	$app->group('/album',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo 'Album Information API is go';
		});
		//Get method
		$app->get('/:album', function ($album){
			$result = album_info($album,'0');
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$album = $_POST['album'];
			$result = music_info($album);
			echo $result;
		});
	});



	//Playlist API Routes
	$app->group('/playlist',function () use ($app) {
		//Get method
		$app->get('/',function (){
			
		});
		$app->post('/',function (){
			
		})
	});

?>