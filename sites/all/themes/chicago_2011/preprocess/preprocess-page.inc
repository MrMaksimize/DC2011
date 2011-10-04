<?php
// $Id: preprocess-page.inc,v 1.4.2.11 2011/10/03 14:39:39 BLadwin Exp $
global $theme_key;
//include_once './' . drupal_get_path('theme', 'omega') . '/theme-functions.inc';
$settings = theme_get_settings($theme_key);

/**
 * User Bar Region
 */
 
// the width of the wrapper item around the user bar block regions
$vars['user_bar_wrapper_width'] = $settings['chicago_2011_user_bar_wrapper_width'];

$header_regions = array(
  'user_bar_first' => array(
    'data' => $vars['user_bar_first'],
    'width' => $settings['chicago_2011_user_bar_first_width'],
  ),
  'user_bar_last' => array(
    'data' => $vars['user_bar_last'],
    'width' => $settings['chicago_2011_user_bar_last_width'],
  ),
);
$vars = static_region_builder($header_regions, $settings['chicago_2011_user_bar_wrapper_width'], $vars);
