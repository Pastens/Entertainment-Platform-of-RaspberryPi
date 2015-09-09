function search_name() {
    var key = $('#name').val();
    jump(key);
}

function search_artist() {
    var key = $('#artist').val();
    jump(key);
}

function search_album() {
    var key = $('#album').val();
    jump(key);
}

function search_lyrics() {
    var key = $('#lyrics').val();
    jump(key);
}

function jump(str) {
    str = strReplace(str);
    if (str == "" || str == null) {
        alert('请输入关键词');
    } else {
        window.location = "/result.html?key=" + str;
    }
}

function strReplace(str) {
    str = str.replace(/\s+/g, '-');
    return str;
}
