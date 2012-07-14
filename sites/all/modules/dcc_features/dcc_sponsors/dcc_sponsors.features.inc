<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dcc_sponsors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function dcc_sponsors_imagecache_default_presets() {
  $items = array(
    'sponsor_feature-block-220_220' => array(
      'presetname' => 'sponsor_feature-block-220_220',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '100',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'sponsor_full_node' => array(
      'presetname' => 'sponsor_full_node',
      'actions' => array(),
    ),
    'sponsor_logo-block-276w' => array(
      'presetname' => 'sponsor_logo-block-276w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '276',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'FFFFFF',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '',
              'height' => '',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
    'sponsor_logo_110' => array(
      'presetname' => 'sponsor_logo_110',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '110',
            'height' => '40',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'sponsor_logo_270w' => array(
      'presetname' => 'sponsor_logo_270w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '270',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
