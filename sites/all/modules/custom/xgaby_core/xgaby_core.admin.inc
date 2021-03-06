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

  // Start Link 1
  $form['general']['link_1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Link 1'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['general']['link_1']['xgaby_find_me_title_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Title 1'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_title_1'),
  );

  $form['general']['link_1']['xgaby_find_me_link_1'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 1'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_1'),
  );
  // End Link 1
  // Start Link 2
  $form['general']['link_2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Link 2'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['general']['link_2']['xgaby_find_me_title_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Title 2'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_title_2'),
  );

  $form['general']['link_2']['xgaby_find_me_link_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 2'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_2'),
  );
  // End Link 2
  // Start Link 3
  $form['general']['link_3'] = array(
    '#type' => 'fieldset',
    '#title' => t('Link 3'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['general']['link_3']['xgaby_find_me_title_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Title 3'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_title_3'),
  );

  $form['general']['link_3']['xgaby_find_me_link_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link 3'),
    '#description' => t('Leave it empty if you don\'t want this link.'),
    '#default_value' => variable_get('xgaby_find_me_link_3'),
  );
  // End Link 3

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
