<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function cod_front_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_ui-section-front';
  $context->description = 'Front Page';
  $context->tag = 'Front Page';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'preface_first',
          'weight' => 0,
        ),
        'views-attendees_attending-block_1' => array(
          'module' => 'views',
          'delta' => 'attendees_attending-block_1',
          'region' => 'preface_middle',
          'weight' => 0,
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => 10,
          'region' => 'preface_middle',
          'weight' => 1,
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => 9,
          'region' => 'preface_last',
          'weight' => 0,
        ),
        'views-front_page_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow-block_1',
          'region' => 'content_top',
          'weight' => 0,
        ),
        'views-front_page_news-block_1' => array(
          'module' => 'views',
          'delta' => 'front_page_news-block_1',
          'region' => 'postscript_top',
          'weight' => 0,
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => 8,
          'region' => 'postscript_top',
          'weight' => 1,
        ),
        'views-Sponsors-block_8' => array(
          'module' => 'views',
          'delta' => 'Sponsors-block_8',
          'region' => 'postscript_top',
          'weight' => 2,
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'postscript_one',
          'weight' => 0,
        ),
        'views-sessions-block_3' => array(
          'module' => 'views',
          'delta' => 'sessions-block_3',
          'region' => 'postscript_one',
          'weight' => 1,
        ),
        'views-attendees-block_1' => array(
          'module' => 'views',
          'delta' => 'attendees-block_1',
          'region' => 'postscript_two',
          'weight' => 0,
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'postscript_three',
          'weight' => 0,
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'postscript_four',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');
  $export['context_ui-section-front'] = $context;

  return $export;
}
