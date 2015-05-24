<div class="footer-container">
  <?php if ($social_count) : ?>
    <div class="social-buttons">
      <ul class="footer-social">
        <?php if ($twitter_site_url) : ?>
        <li rel="twitter"><a title="Twitter" href="<?php print $twitter_site_url; ?>"></a></li>      
        <?php endif; ?>
        <?php if ($youtube_site_url) : ?>
          <li rel="yt"><a title="YouTube" href="<?php print $youtube_site_url; ?>"></a></li>
        <?php endif; ?>
        <?php if ($instagram_site_url) : ?>
          <li rel="instagram"><a title="Instagram" href="<?php print $instagram_site_url; ?>"></a></li>
        <?php endif; ?>
        <?php if ($skype_site_url) : ?>
          <li rel="skype"><a title="Skype" href="<?php print $skype_site_url; ?>"></a></li>
        <?php endif; ?>
        <?php if ($gplus_site_url) : ?>
          <li rel="gplus"><a title="Google+" href="<?php print $gplus_site_url; ?>"></a></li>
        <?php endif; ?>
      </ul>
    </div>
  <?php endif; ?>
</div>