<?php

/**
 * @file
 * Write your theme logic here.
 */

/**
 * Implements hook_preprocess_node().
 */
function xgaby_preprocess_node(&$vars) {
  $view_mode = $vars['view_mode'];
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__' . $view_mode;
}
