(function($) {

  'use strict';

  Drupal.behaviors.homepageSlider = {
    attach: function(context) {
      
      var resizeSlide = function () {
        var w = $('body').innerWidth();   //to ignore scroll size
        var h = window.innerHeight;
        $('.home-slide img').each(function () {
          var imgAspect = $(this)[0].clientWidth / $(this)[0].clientHeight;
          var windowAspect = w / h;
          var wdiff = $('body').innerWidth() - $(this)[0].clientWidth;
          if (imgAspect > windowAspect) {
            $(this).width('auto');
            $(this).height('100%');
            $(this).css('left', wdiff/2);
          } else {
            $(this).width('100%');
            $(this).height('auto');
            $(this).css('left', wdiff/2);
          }
        });

      };
      $(document).ready(resizeSlide);
      $(window).load(resizeSlide);
      window.addEventListener("resize", resizeSlide);

      $('.home-slide-0').show();
      $('.home-slide-1').show().css('left','-100%');
      $('.home-slide-2').show().css('left','-100%');

      var currentSlide = 0;
      var slide = function(id) {
        var classes = 'slide-right slide-from-left slide-left slide-from-right';
        $('#homepage-pager a').each(function() {
          if ($(this).data('slide') === id) {
            $(this).addClass('selected');
          } else {
            $(this).removeClass('selected');
          }
        });
        if (id < currentSlide){
          $('.home-slide-' + currentSlide).removeClass(classes).addClass('slide-right');
          $('.home-slide-' + id).removeClass(classes).addClass('slide-from-left');
        } else if (id > currentSlide) {
          $('.home-slide-' + currentSlide).removeClass(classes).addClass('slide-left');
          $('.home-slide-' + id).removeClass(classes).addClass('slide-from-right');
        }
        currentSlide = id;
      };

      var automateSlide = function() {
        if (currentSlide == 2) {
          slide(0);
        } else {
          slide(currentSlide+1);
        }
        setTimeout(function() {
          automateSlide();
        }, 5000);
      };
      //setTimeout(automateSlide, 3000);

      $('#homepage-pager').on("click", "a", function() {
        slide($(this).data('slide'));


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
        var parentWrapperTop = parentWrapper.offset().top;

        $.get(url, function(data) {
          parentWrapper.html(data);
          $('html, body').animate({scrollTop: parentWrapperTop}, 400);
        });

        return false;
      });

      $(document).on("click", ".page-blog .read-less-btn span", function() {
        var parentWrapper = $(this).parents('article'),
          nid = $(this).parent().attr('data-nid'),
          url = '/node/get/ajax/' + nid + '/teaser';
        var parentWrapperTop = parentWrapper.offset().top;

        $.get(url, function(data) {
          parentWrapper.html(data);
          $('html, body').animate({scrollTop: parentWrapperTop}, 400);
          checkBlogImages();
        });

        return false;
      });

      var checkBlogImages = function() {
        $('.node-blog').each(function(){
          //console.log($('.blog-teaser-left', this).html());
          if ($('.blog-teaser-left', this).html().replace(/\s/g, '') == '') {
            $('.blog-teaser-left', this).hide();
            $('.blog-teaser-right', this).css('width', '100%');
          }
        });
      };
      checkBlogImages();
    }
  };
})(jQuery);
