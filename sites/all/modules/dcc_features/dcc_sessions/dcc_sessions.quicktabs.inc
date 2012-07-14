<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function dcc_sessions_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'qt_schedule';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'QT: Schedule';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'cod_schedule',
      'display' => 'block_2',
      'args' => '74',
      'get_displays' => 'vdisp_0',
      'title' => 'Featured Presentations: Michigan(Phamily)',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'cod_schedule',
      'display' => 'block_2',
      'args' => '83',
      'get_displays' => 'vdisp_1',
      'title' => 'New Users: Superior(Duo)',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'cod_schedule',
      'display' => 'block_2',
      'args' => '29',
      'get_displays' => 'vdisp_2',
      'title' => 'Business/Technical: Erie(Promet)',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'nostyle';
  $export['qt_schedule'] = $quicktabs;

  return $export;
}
