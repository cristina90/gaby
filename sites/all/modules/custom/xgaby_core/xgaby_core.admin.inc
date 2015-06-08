<?php

/**
 * @file
 * Admin page.
 */

/**
 * Implements hook_form().
 */
function xgaby_core_admin_form() {

  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General data'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['general']['xgaby_mini_contact'] = array(
    '#type' => 'textfield',
    '#title' => t('Mini contact text'),
    '#default_value' => variable_get('xgaby_mini_contact'),
  );
  $form['general']['xgaby_find_me_link_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 1'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_1'),
  );

  $form['general']['xgaby_find_me_link_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 2'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_2'),
  );
  $form['general']['xgaby_find_me_link_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 3'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_3'),
  );
  $form['general']['xgaby_find_me_link_4'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 4'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_4'),
  );

  $form['social'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social links'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['social']['twitter_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Site URL'),
    '#default_value' => variable_get('twitter_site_url'),
  );

  $form['social']['vine_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Vine Site URL'),
    '#default_value' => variable_get('vine_site_url'),
  );

  $form['social']['vimeo_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo Site URL'),
    '#default_value' => variable_get('vimeo_site_url'),
  );
  
  return system_settings_form($form);
}
