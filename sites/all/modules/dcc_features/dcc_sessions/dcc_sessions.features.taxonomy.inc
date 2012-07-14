<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function dcc_sessions_taxonomy_default_vocabularies() {
  return array(
    'room' => array(
      'name' => 'Room Type',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_room',
      'weight' => '0',
      'nodes' => array(
        'room' => 'room',
      ),
    ),
  );
}
