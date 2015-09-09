$(document).ready(function() {
    $.ajax({
        url: 'api/index.php/playlist/json',
        type: 'GET',
        dataType: 'json',
        success: function(data) {
            for (var i = 0; i < data.length; i++) {
                $('#playlist').append('<div class="col-xs-6"><div class="media"><div class="media-left"><img class="media-object" src="' + data[i].user + '" alt></div><div class="media-body"><h4 class="media-heading">' + data[i].music_name + '</h4>' + data[i].artist + ' —— ' + data[i].album + '</div></div></div>');
                if ((i + 1) % 2 == 0) {
                    $('#playlist').append('<div class="clearfix"></div>');
                }
            }
        }
    });
});
