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

$postscript_regions = array(
  'postscript_top' => array(
    'data' => $vars['postscript_top'],
    'width' => $settings['chicago_2011_postscript_top_width'],
    'spacing' => array(
      'prefix' => $settings['chicago_2011_postscript_top_prefix'],
      'suffix' => $settings['chicago_2011_postscript_top_suffix']),
    ),
  'postscript_one' => array(
    'data' => $vars['postscript_one'],
    'width' => $settings['chicago_2011_postscript_one_width'],
    'spacing' => array(
      'prefix' => $settings['chicago_2011_postscript_one_prefix'],
      'suffix' => $settings['chicago_2011_postscript_one_suffix']),
    ),
  'postscript_two' => array(
    'data' => $vars['postscript_two'],
    'width' => $settings['chicago_2011_postscript_two_width'],
    'spacing' => array(
      'prefix' => $settings['chicago_2011_postscript_two_prefix'],
      'suffix' => $settings['chicago_2011_postscript_two_suffix']),
    ),
  'postscript_three' => array(
    'data' => $vars['postscript_three'],
    'width' => $settings['chicago_2011_postscript_three_width'],
    'spacing' => array(
      'prefix' => $settings['chicago_2011_postscript_three_prefix'],
      'suffix' => $settings['chicago_2011_postscript_three_suffix'])
  ),
  'postscript_four' => array(
    'data' => $vars['postscript_four'],
    'width' => $settings['chicago_2011_postscript_four_width'],
    'spacing' => array(
      'prefix' => $settings['chicago_2011_postscript_four_prefix'],
      'suffix' => $settings['chicago_2011_postscript_four_suffix'])
  ),
);