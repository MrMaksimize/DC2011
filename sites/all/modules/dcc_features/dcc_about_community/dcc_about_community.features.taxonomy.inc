<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function dcc_about_community_taxonomy_default_vocabularies() {
  return array(
    'faq' => array(
      'name' => 'FAQ',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_faq',
      'weight' => '0',
      'nodes' => array(
        'faq' => 'faq',
      ),
    ),
  );
}
