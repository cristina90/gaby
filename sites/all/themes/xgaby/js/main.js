(function($) {

  'use strict';

  /**
   * A simple Drupal behavior example.
   */
  Drupal.behaviors.homepageSlider = {
    attach: function(context) {

      $('#homepage-pager').on("click", "a", function() {
        // Change the background, I guess.
        // .................
        
        
        $('#homepage-pager a').removeClass('selected');
        $(this).addClass('selected');
        return false;
      });

    }
  };

})(jQuery);
