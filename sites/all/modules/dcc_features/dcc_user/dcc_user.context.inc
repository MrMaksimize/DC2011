<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dcc_user_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = '';
  $context->tag = 'User';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'users/*' => 'users/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block_1',
          'region' => 'sidebar_last',
          'weight' => 0,
        ),
        'views-user_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'user_blocks-block_2',
          'region' => 'sidebar_last',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User');
  $export['user_profile'] = $context;

  return $export;
}
