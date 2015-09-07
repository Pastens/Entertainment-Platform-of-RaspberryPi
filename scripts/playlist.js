$(document).ready(function() {
	$.ajax({
		url: '/api/index.php/playlist',
		type: 'POST',
		dataType: 'json',
		data: {},
		success: function (data){
			
		}
	});
	
});