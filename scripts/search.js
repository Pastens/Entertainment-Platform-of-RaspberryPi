$(document).ready(function() {
	var keyword = GetQueryString('key');
	$.ajax({
		url: 'api/index.php/search/'+keyword,
		type: 'GET',
		dataType: 'json',
		data: {
		},
		success : function (data){
			var result = data.result;
			//if(result.songCount!=0){
			//	for(var i=0;i<=20;i++){
			// 		var list = result.songs[i];
			// 		var album = list.album;
			// 		var artist = list.artists[0];
			// 		$('#result').append('<div class="col-md-3 col-xs-6"><div class="thumbnail"><img src="'+album.picUrl+'" alt /><div class="caption"><h3>'+list.name+'</h3><p>'+artist.name+' —— '+album.name+'</p><p><a class="btn btn-primary" value="'+list.mp3Url+'" onclick="download(this);">点歌</a></p></div></div></div>');
			// 	}
			// }
			// else{
			// 	$('#result').append('<h2>对不起，找不到结果</h2>');
			// }
		}
	});
	function download(obj) {
	    var tr = obj.parentNode.parentNode;
	    var tds = tr.cells;
	    var album = tds[1].innerHTML;
	    var name = tds[2].innerHTML;
	    var artist = tds[3].innerHTML;
	    var url = obj.value;
	    $.ajax({
	        url: 'index.php/new',
	        type: 'POST',
	        dataType: 'json',
	        data: {
	            user: 'hello',
	            comment: 'hello',
	            music_name: name,
	            artist: artist,
	            album: album,
	            url: url
	        },
	        success: function() {
	            alert('success');
	        }
	    });
	};
});
