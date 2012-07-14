<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dcc_sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors';
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
        'sponsors' => 'sponsors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_1',
          'region' => 'content',
          'weight' => 0,
        ),
        'views-Sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_2',
          'region' => 'content',
          'weight' => 1,
        ),
        'views-Sponsors-block_3' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_3',
          'region' => 'content',
          'weight' => 2,
        ),
        'views-Sponsors-block_9' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_9',
          'region' => 'content',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout');
  $export['sponsors'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors_footer_block';
  $context->description = '';
  $context->tag = 'sponsors';
  $context->conditions = array(
    'cep_negate_path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Sponsors-block_5' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_5',
          'region' => 'footer_first',
          'weight' => 0,
        ),
        'views-Sponsors-block_6' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_6',
          'region' => 'footer_first',
          'weight' => 1,
        ),
        'views-Sponsors-block_7' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_7',
          'region' => 'footer_first',
          'weight' => 2,
        ),
        'views-Sponsors-block_4' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_4',
          'region' => 'footer_first',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sponsors');
  $export['sponsors_footer_block'] = $context;

  return $export;
}
