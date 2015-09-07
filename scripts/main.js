(function($) {
  $(function() {      

    // Table scroll
    $('.scrollable').slimScroll({
      height: '120px'
    });
	
	  // POPOVER & TOOLTIP
    $("[rel='popover']").popover();
    $("[rel='tooltip']").tooltip();
	
	 // PROGRESS-BAR
    $(window).ready(function(e){
        $.each($('div.progress-bar'),function(){
          $(this).css('width', $(this).attr('aria-valuetransitiongoal')+'%');
        });
    });

  });
  
})(jQuery);
