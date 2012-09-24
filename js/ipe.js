(function ($) {
  $('.ipe-trigger').live('click', function(e) {
    var links = '#ipe-add-' + $(this).attr('target_region');
    var options = {
      'my': 'left top',
      'at': 'left bottom',
      'of': $(this),
      'offset': '0 3'
    };
    $(links).fadeToggle('fast').position(options);
    return false;
  });

  $('.ipe-popup').live('mouseleave', function() {
    $(this).fadeToggle('fast');
  });
})(jQuery);
