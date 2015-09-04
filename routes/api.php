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
		$app->get('/:music',function ($music){
			$result = music_info($music);
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$music = $_POST['music'];
			$result = music_info($music);
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
			global $conn;
			$information = "SELECT id,music_name,url FROM playlist WHERE enable = '1'";
			if($rs  = $conn->query($information)){
				while ($row = $rs->fetch_row()){
					echo json_encode($row);
				}
				$rs->close();
			}
		});
		$app->post('/',function (){
			global $conn;
			$information = "SELECT id,music_name,url FROM playlist WHERE enable = '1'";
			if($rs  = $conn->query($information)){
				while ($row = $rs->fetch_row()){
					echo json_encode($row);
				}
				$rs->close();
			}
		});
	});

	//New Order API Routes
	$app->group('/new',function () use ($app) {
		//Warning! For safety, only post will be accepted
		$app->post('/',function (){

		});
	});
?>