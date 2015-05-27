(function($) {

  'use strict';

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

  Drupal.behaviors.blogIndexBehavior = {
    attach: function(context) {

      $(document).on("click", ".page-blog .read-more-btn span", function() {
        var parentWrapper = $(this).parents('article'),
          nid = $(this).parent().attr('data-nid'),
          url = '/node/get/ajax/' + nid + '/full';

        $.get(url, function(data) {
          parentWrapper.html(data);
        });

        return false;
      });

      $(document).on("click", ".page-blog .read-less-btn span", function() {
        var parentWrapper = $(this).parents('article'),
          nid = $(this).parent().attr('data-nid'),
          url = '/node/get/ajax/' + nid + '/teaser';

        $.get(url, function(data) {
          parentWrapper.html(data);
        });

        return false;
      });
    }
  };

})(jQuery);
