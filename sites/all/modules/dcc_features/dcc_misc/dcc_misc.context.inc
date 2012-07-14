<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dcc_misc_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Header, Main Content & Footer regions for every page display';
  $context->tag = 'layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'desktop' => 'desktop',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'user_bar_first',
          'weight' => 0,
        ),
        'menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'secondary-links',
          'region' => 'user_bar_last',
          'weight' => 0,
        ),
        'masquerade-0' => array(
          'module' => 'masquerade',
          'delta' => 0,
          'region' => 'footer_last',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header, Main Content & Footer regions for every page display');
  t('layout');
  $export['sitewide'] = $context;

  return $export;
}
