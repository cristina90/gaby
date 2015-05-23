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
    '#title' => t('Find me Link'),
    '#default_value' => variable_get('xgaby_find_me_link_1'),
  );

  $form['general']['xgaby_find_me_link_2'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link'),
    '#default_value' => variable_get('xgaby_find_me_link_2'),
  );
  $form['general']['xgaby_find_me_link_3'] = array(
    '#type' => 'textfield',
    '#title' => t('Find me Link'),
    '#default_value' => variable_get('xgaby_find_me_link_3'),
  );

  $form['footer'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social links'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['footer']['twitter_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Site URL'),
    '#default_value' => variable_get('twitter_site_url'),
  );
  $form['footer']['youtube_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('YouTube Site URL'),
    '#default_value' => variable_get('youtube_site_url'),
  );

  $form['footer']['pininterest_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('PinInterest Site URL'),
    '#default_value' => variable_get('pininterest_site_url'),
  );

  $form['footer']['skype_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Skype Site URL'),
    '#default_value' => variable_get('skype_site_url'),
  );

  $form['footer']['gplus_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Google Plus Site URL'),
    '#default_value' => variable_get('gplus_site_url'),
  );

  return system_settings_form($form);
}
