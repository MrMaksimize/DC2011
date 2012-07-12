<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dcc_front_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function dcc_front_page_imagecache_default_presets() {
  $items = array(
    'front_page_slideshow_preset' => array(
      'presetname' => 'front_page_slideshow_preset',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '960',
            'height' => '400',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_file2canvas',
          'data' => array(
            'xpos' => 'center',
            'ypos' => 'center',
            'alpha' => '100',
            'path' => 'sites/all/themes/chicago_2011/images/content/slide_overlay.png',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function dcc_front_page_node_info() {
  $items = array(
    'front_page_slideshow_image' => array(
      'name' => t('Front Page Slideshow Image'),
      'module' => 'features',
      'description' => t('Image that will show up in front page slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
