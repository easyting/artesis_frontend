(function ($) {
  $('.ipe-trigger').live('click', function(e) {
    var links = '#ipe-add-' + $(this).attr('target_region');
    var options = {
      'my': 'left top',
      'at': 'left bottom',
      'of': $(this),
      'offset': '0 3',
      // Use custom positionning function since 'collision' doesn't work as expected.
      'using': function(pos) {
        var right_side = $(this).parent().offset().left + pos.left + ipe_popup_width;
        if (right_side > $(window).width()) {
          var new_left = pos.left - (right_side - $(window).width()) - 20; // Correction applied
          $(this).css({left: new_left, top: pos.top});
        }
        else {
          $(this).css({left: pos.left, top: pos.top});
        }
      }
    };
    $(links).fadeToggle('fast').position(options);
    return false;
  });

  $('.ipe-popup').live('mouseleave', function() {
    $(this).fadeToggle('fast');
  });
})(jQuery);
