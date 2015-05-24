<div class="main-home-block">

  <!--Or do this as HTML-->
  <!--<img id="homepage-logo" src="<?php print drupal_get_path('theme', 'xgaby'); ?>/images/test/logo.jpg" />-->
  <a href="/" class="main-logo">
    <h1>XGABYMOOR</h1>
    <p>feel your passion with me</p>
  </a>

  <?php if (!empty($main_menu)) : ?>
    <?php print $main_menu; ?>
  <?php endif; ?>

  <!--To do: write JS which will handle the background change-->
  <div id="homepage-pager" class="pager">
    <a href="#" class="selected"><span></span></a>
    <a href="#"><span></span></a>
    <a href="#"><span></span></a>
  </div>
</div>