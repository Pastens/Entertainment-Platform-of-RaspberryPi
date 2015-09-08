<?php
	//Curl Get Function
	function curl_get($url)
	{
	    $ch = curl_init();
	    curl_setopt($ch, CURLOPT_URL, $url);
	    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
	    curl_setopt($ch, CURLOPT_BINARYTRANSFER, true);
	    $output = curl_exec($ch);
	    curl_close($ch);
	    return $output;
	}

	//Search Function
	function music_search($word){
		$url = "http://tingapi.ting.baidu.com/v1/restserver/ting?from=webapp_music&method=baidu.ting.search.catalogSug&format=json&callback=&query=".$word;
	    return curl_get($url);
	}

	//Download URL Function
	function music_url($id){
		$url = "http://ting.baidu.com/data/music/links?songIDs=".$id;
		return curl_get($url);
	}

	// Music Detail Function
	// function music_info($music_id){
	//     $url = "http://music.163.com/api/song/detail/?id=" . $music_id . "&ids=%5B" . $music_id . "%5D";
	//     return curl_get($url);
	// }
	
	// Artist-Album Function
	// function artist_album($artist_id, $limit){
	//     $url = "http://music.163.com/api/artist/albums/" . $artist_id . "?limit=" . $limit;
	//     return curl_get($url);
	// }
	
	// Album Detail Function
	// function album_info($album_id){
	//     $url = "http://music.163.com/api/album/" . $album_id;
	//     return curl_get($url);
	// }

	//Music Download Function
	function download($music_url,$music_name){
		$content = http_get_data($music_url);
		//Please Replace the route below when you deploy it on your raspberry pi
    	//And use chmod to make it writeable
    	$dir = '/Library/WebServer/Documents/download/';
    	
    	$filename = $music_name.'.mp3';
    	$route = $dir.$filename;
    	//Bond stream to a file
    	$fp = @fopen($route,"a");
    	//Write a file
    	fwrite($fp, $content);
    	return $route;
	}

	//HTTP GET Data function
	function http_get_data($url){
		$ch = curl_init();
		curl_setopt($ch, CURLOPT_CUSTOMREQUEST, 'GET');
		curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
		curl_setopt($ch, CURLOPT_URL, $url);
		ob_start();
		curl_exec($ch);
		$return_content = ob_get_contents();
		ob_end_clean();
		$return_code = curl_getinfo($ch,CURLINFO_HTTP_CODE);
		return $return_content;
	}

?>