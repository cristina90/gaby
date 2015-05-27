<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($content['field_media_images']); ?>
  <h2><?php print $title; ?></h2>
  <span property="dc:date dc:created" content="<?php print format_date($created, 'long'); ?>" datatype="xsd:dateTime"><?php print format_date($created, 'x_gabymoor'); ?></span>
  <?php print render($content['body']); ?>
  <div class="read-less-btn" data-nid="<?php print $nid; ?>">
    <span><?php print t('Hide Post'); ?></span>
  </div>

</article>
