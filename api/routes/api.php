<?php
	ini_set('display_errors', 'on');

	//API Page
	$app->get('/',function () {
		echo json_encode('Api is go');
	});
	
	//Search API Routes
	$app->group('/search',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo json_encode('Search API is go');
		});
		//Get method
		$app->get('/:name',function ($name) {
			$result = music_search($name);
			echo $result;
		});
		//Post method
		$app->post('/',function (){
			$name = $_POST['name'];
			$result = music_search($name);
			echo $result;
		});
	});

	//Url API Routes
	$app->group('/url',function () use ($app){
		//Root method
		$app->get('/',function (){
			echo json_encode('Url API is go!');
		});
		//Get method
		$app->get('/:id',function ($id) {
			$result = music_url($id);
			echo $result;
		});
	});
	
	//Music Information API Routes
	$app->group('/music',function () use ($app) {
		//Root method
		$app->get('/',function (){
			echo json_encode('Information API is go');
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
			echo json_encode('Artiset-Album API is go');
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
			echo json_encode('Artiset-Album API is go');
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
			$sql = "SELECT id,music_name,url FROM playlist WHERE enable = '1'";
			if($rs = $conn->query($sql)){
				while ($row = $rs->fetch_assoc()){
					$return['id'] = $row['id'];
					$return['music_name'] = $row['music_name'];
					$return['url'] = $row['url'];
					echo $return['url'];
					echo "\n";
				}
				$rs->close();
			}
			$conn->close();
		});
		$app->post('/',function (){
			global $conn;
			$sql = "SELECT id,music_name,url FROM playlist WHERE enable = '1'";
			if($rs = $conn->query($sql)){
				while ($row = $rs->fetch_assoc()){
					$return['id'] = $row['id'];
					$return['music_name'] = $row['music_name'];
					$return['url'] = $row['url'];
					echo json_encode($return);
				}
				$rs->close();
			}
			$conn->close();
		});
	});

	//New Order API Routes
	$app->group('/new',function () use ($app) {
		//Warning! For safety, only post will be accepted
		$app->post('/',function (){
			$user = $_POST['user'];
			$comment = $_POST['comment'];
			$music_name = $_POST['music_name'];
			$artist = $_POST['artist'];
			$album = $_POST['album'];
			$url = $_POST['url'];
			//Download Function
			$route = download($url,$music_name);
			//Database Connection
			global $conn;
			$sql = "INSERT INTO music_db(music_name,artist,album,url) VALUES ('$music_name','$artist','$album','$url')";
			$play_sql = "INSERT INTO playlist(music_name,user,comment,url) VALUES ('$music_name','$user','$comment','$route')";
			if($rs = $conn->query($sql) && $play_rs = $conn->query($play_sql)){
				echo json_encode('success');
				$rs->close();
				$play_rs->close();
			}
			$conn->close();
		});
	});
?>