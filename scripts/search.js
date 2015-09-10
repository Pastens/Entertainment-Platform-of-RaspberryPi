$(document).ready(function() {
    var keyword = GetQueryString('key');
    $.ajax({
        url: 'api/index.php/search/' + keyword,
        type: 'GET',
        dataType: 'json',
        data: {},
        success: function (data) {
            var result = data.song;
            if (result.length != 0) {
                for (var i = 0; i < 10; i++) {
                    $('#result').append('<div class="col-xs-6"><div class="thumbnail"><div class="caption"><h3>' + result[i].songname + '</h3><p style="text-align:right">歌手 —— ' + result[i].artistname + '</p><p style="text-align:right"><a class="btn btn-primary" onclick="showmore('+result[i].songid+');">点歌</a></p></div></div></div>');
                    if ((i + 1) % 2 == 0) {
                        $('#result').append('<div class="clearfix"></div>');
                    }
                }
            } else {
                $('.not_found').append('<div class="home"><div class="container"><header><h2>对不起，找不到结果</h2></header></div></div>');
            }
        }
    });
});

function showmore(obj) {
	$.ajax({
		url: '/api/index.php/url/' + obj,
		type: 'GET',
		dataType: 'json',
		data: {},
		success: function (data){
			var data = data.data;
			var result = data.songList[0];
			$('#img').html('<img class="media-object" id="order_pic" src="'+ result.songPicBig +'" style="width:180px;height:180px;">');
			$('#intro').html('<h4 class="media-heading" id="order_name">'+ result.songName +'</h4><div id="order_artist">'+ result.artistName + '</div><div id="order_album">' + result.albumName);
			$('#download').attr('onclick','download(this)');
			$('#download').attr('string',result.songLink);
		}
	});
    $('#modal').modal('show');
};

function download(obj) {
	var user = $('#order_pic').attr('src');
	var music_name = $('#order_name').html();
	var artist = $('#order_artist').html();
	var album = $('#order_album').html();
	var url = $('#download').attr('string');
    $.ajax({
    	url: '/api/index.php/new/',
    	type: 'POST',
    	dataType: 'json',
    	data: {
    		user: user,
    		comment: 'hello',
    		music_name: music_name,
    		artist: artist,
    		album: album,
    		url: url
    	}
    });
    alert('点歌成功');
    $('#modal').modal('hide');
};


