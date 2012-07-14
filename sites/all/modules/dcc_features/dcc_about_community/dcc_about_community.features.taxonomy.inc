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
    'slideshow_type' => array(
      'name' => 'Slideshow Type',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_slideshow_type',
      'weight' => '0',
      'nodes' => array(
        'front_page_slideshow_image' => 'front_page_slideshow_image',
      ),
    ),
  );
}
