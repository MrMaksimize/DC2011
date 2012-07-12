<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dcc_about_community_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_page';
  $context->description = 'About Us - Block Layout';
  $context->tag = 'layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-slideshow_about-block_1' => array(
          'module' => 'views',
          'delta' => 'slideshow_about-block_1',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'views-slideshow_about-block_2' => array(
          'module' => 'views',
          'delta' => 'slideshow_about-block_2',
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
        'views-slideshow_about-block_3' => array(
          'module' => 'views',
          'delta' => 'slideshow_about-block_3',
          'region' => 'sidebar_last',
          'weight' => 3,
        ),
        'views-slideshow_about-block_4' => array(
          'module' => 'views',
          'delta' => 'slideshow_about-block_4',
          'region' => 'sidebar_last',
          'weight' => 4,
        ),
        'views-slideshow_about-block_5' => array(
          'module' => 'views',
          'delta' => 'slideshow_about-block_5',
          'region' => 'sidebar_last',
          'weight' => 5,
        ),
        'views-about_page_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'about_page_slideshow-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us - Block Layout');
  t('layout');
  $export['about_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'community';
  $context->description = '';
  $context->tag = 'layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
    'path' => array(
      'values' => array(
        'community' => 'community',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-Sponsors-block_8' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_8',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'sidebar_last',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['community'] = $context;

  return $export;
}
