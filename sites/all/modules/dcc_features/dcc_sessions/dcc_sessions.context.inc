<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dcc_sessions_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'session_node_page';
  $context->description = 'controls block layout on sessions nodes';
  $context->tag = 'Session Node Layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'session' => 'session',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'sessions/*' => 'sessions/*',
        '~sessions' => '~sessions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions-block_5' => array(
          'module' => 'views',
          'delta' => 'sessions-block_5',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-sessions-block_4' => array(
          'module' => 'views',
          'delta' => 'sessions-block_4',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Session Node Layout');
  t('controls block layout on sessions nodes');
  $export['session_node_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'session_schedule';
  $context->description = 'Session Schedule Page - Block Layout';
  $context->tag = 'session schedule layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
    'path' => array(
      'values' => array(
        'program/session-schedule' => 'program/session-schedule',
      ),
    ),
    'views' => array(
      'values' => array(
        'cod_schedule' => 'cod_schedule',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-qt_schedule' => array(
          'module' => 'quicktabs',
          'delta' => 'qt_schedule',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Session Schedule Page - Block Layout');
  t('session schedule layout');
  $export['session_schedule'] = $context;

  return $export;
}
