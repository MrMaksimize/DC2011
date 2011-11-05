<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dc_2011_mobile_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_page_mobile';
  $context->description = 'About Us - Block Layout - Mobile';
  $context->tag = 'layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'mobile' => 'mobile',
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
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'context_mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('About Us - Block Layout - Mobile');
  t('layout');
  $export['about_page_mobile'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'session_schedule_mobile';
  $context->description = 'Session Schedule Page - Block Layout Mobile';
  $context->tag = 'session schedule layout mobile';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'mobile' => 'mobile',
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
        'views-cod_schedule_mobile-block_4' => array(
          'module' => 'views',
          'delta' => 'cod_schedule_mobile-block_4',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'session-schedule-mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Session Schedule Page - Block Layout Mobile');
  t('session schedule layout mobile');
  $export['session_schedule_mobile'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_mobile';
  $context->description = 'Header, Main Content & Footer regions for every page display';
  $context->tag = 'layout';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'mobile' => 'mobile',
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
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'context_mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header, Main Content & Footer regions for every page display');
  t('layout');
  $export['sitewide_mobile'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sponsors_footer_block_mobile';
  $context->description = '';
  $context->tag = 'sponsors mobile';
  $context->conditions = array(
    'cep_negate_path' => array(
      'values' => array(
        'sponsors' => 'sponsors',
      ),
    ),
    'mobile' => array(
      'values' => array(
        'mobile' => 'mobile',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors_mobile-block_10' => array(
          'module' => 'views',
          'delta' => 'sponsors_mobile-block_10',
          'region' => 'footer_first',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sponsors mobile');
  $export['sponsors_footer_block_mobile'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ui_section_front';
  $context->description = 'Front Page - Mobile';
  $context->tag = 'Front Page';
  $context->conditions = array(
    'mobile' => array(
      'values' => array(
        'mobile' => 'mobile',
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
        'views-uc_products-block_1' => array(
          'module' => 'views',
          'delta' => 'uc_products-block_1',
          'region' => 'preface_middle',
          'weight' => 0,
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => 9,
          'region' => 'preface_last',
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
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'postscript_four',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'context_mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page');
  t('Front Page - Mobile');
  $export['ui_section_front'] = $context;

  return $export;
}
