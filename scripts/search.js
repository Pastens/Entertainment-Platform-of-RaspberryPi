$(document).ready(function() {
    var keyword = GetQueryString('key');
    $('#banner').append(keyword);
    $.ajax({
        url: 'api/index.php/search/' + keyword,
        type: 'GET',
        dataType: 'json',
        data: {},
        success: function(data) {
            var result = data.song;
            if (result != null) {
                for (var i = 0; i < 10; i++) {
                    $('#result').append('<div class="col-md-3 col-xs-6"><div class="thumbnail"><div class="caption"><h3>' + result[i].songname + '</h3><p style="text-align:right">歌手 —— ' + result[i].artistname + '</p><p style="text-align:right"><a class="btn btn-primary" value="'+result[i].songid+'" onclick="showmore(this)">点歌</a></p></div></div></div>');
                }
            } else {
                $('#result').append('<h2>对不起，找不到结果</h2>');
            }
        }
    });

    function showmore(obj){
    	var tr = obj.value;
    	alert(tr);
    };

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
