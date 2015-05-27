<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php
  if (isset($content['field_media_images'][1])) {
    unset($content['field_media_images'][1]);
  }
  if (isset($content['field_media_images'][2])) {
    unset($content['field_media_images'][2]);
  }
  ?>

  <div class="blog-teaser-left">
    <?php print render($content['field_media_images']); ?>
  </div>
  <div class="blog-teaser-right">
    <h2><?php print $title; ?></h2>
    <span property="dc:date dc:created" content="<?php print format_date($created, 'long'); ?>" datatype="xsd:dateTime"><?php print format_date($created, 'x_gabymoor'); ?></span>
    <?php print render($content['body']); ?>
    <div class="read-more-btn" data-nid="<?php print $nid; ?>">
      <span><?php print t('Continue Reading'); ?></span>
    </div>
  </div>
</article>
