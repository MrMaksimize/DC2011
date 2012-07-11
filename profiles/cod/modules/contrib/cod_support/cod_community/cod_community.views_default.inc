<?php

/**
 * Implementation of hook_views_default_views().
 */
function cod_community_views_default_views() {
  $views = array();

  // Exported view: attendees
  $view = new view;
  $view->name = 'attendees';
  $view->description = 'View of users that have signed up and are attendees';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'uid' => array(
      'label' => 'Signup user',
      'required' => 1,
      'id' => 'uid',
      'table' => 'signup_log',
      'field' => 'uid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'imagecache_preset' => 'attendees_196_196',
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 1,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_4' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 1,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_5' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<span class="first">[value_4]</span><span class="last"> [value_5]</span>',
        'make_link' => 0,
        'path' => 'users/[name]',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 1,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 1,
      'id' => 'value_1',
      'table' => 'profile_values_profile_job_title',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_3' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<div class="username"> [name]</div>
<div class="fullname"> [value_5]</div>
<div class="title">[value_1]</div>
<div class="org">[value_3]</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 0,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'separator',
      'separator' => ' , ',
      'exclude' => 1,
      'id' => 'value',
      'table' => 'profile_values_profile_interests',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_2' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 1,
      'id' => 'value_2',
      'table' => 'profile_values_profile_pro',
      'field' => 'value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'random_seed' => array(
      'order' => 'ASC',
      'user_seed_type' => 'diff_per_user',
      'reset_seed_int' => 'custom',
      'reset_seed_custom' => '300',
      'id' => 'random_seed',
      'table' => 'views',
      'field' => 'random_seed',
      'relationship' => 'none',
      'custom_seed' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'value_4' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_4_op',
        'identifier' => 'value_4',
        'label' => 'First name',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_4',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_5' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_5_op',
        'identifier' => 'value_5',
        'label' => 'Last name',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_5',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value_1' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_1_op',
        'identifier' => 'job_title',
        'label' => 'Job title',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'value_1',
      'table' => 'profile_values_profile_job_title',
      'field' => 'value',
      'relationship' => 'none',
    ),
    'value_3' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_3_op',
        'identifier' => 'organization',
        'label' => 'Organization',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'value_3',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'value_op',
        'identifier' => 'interests',
        'label' => 'Interests',
        'bef_filter_description' => '',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'value',
      'table' => 'profile_values_profile_interests',
      'field' => 'value',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        '0' => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Community');
  $handler->override_option('empty', 'No one has signed up for this event. Attendees will appear as they sign up.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'semanticviews_default');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'group' => array(
      'element_type' => 'h3',
      'class' => 'title',
    ),
    'list' => array(
      'element_type' => '',
      'class' => '',
    ),
    'row' => array(
      'element_type' => 'div',
      'class' => 'attendee pro-[value_2]',
      'last_every_nth' => '0',
      'first_class' => 'first',
      'last_class' => 'last',
      'striping_classes' => 'odd even',
    ),
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'picture' => array(
        'element_type' => 'div',
        'class' => 'picture',
      ),
      'value_3' => array(
        'element_type' => 'div',
        'class' => 'attendee-overlay',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler = $view->new_display('page', 'Community Page (primary)', 'page_1');
  $handler->override_option('empty', 'No results found for your search.');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 24);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('path', 'community');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Community',
    'description' => 'Connect with attendees',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block: Attendees List', 'block_1');
  $handler->override_option('fields', array(
    'picture' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => 'Here',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'imagecache_preset' => 'attendees_60_60',
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'value' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 0,
      'exclude' => 1,
      'id' => 'value',
      'table' => 'profile_values_profile_first',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '[value] [value_1]',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 1,
      'id' => 'value_1',
      'table' => 'profile_values_profile_last',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'value_2' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'exclude' => 1,
      'id' => 'value_2',
      'table' => 'profile_values_profile_org',
      'field' => 'value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'uid' => array(
      'operator' => 'not in',
      'value' => array(
        '0' => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('title', 'Attendees');
  $handler->override_option('empty', 'No one has signed up for this event. Attendees will appear as they <a href="/user/register" class="callout">sign up</a>.');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 12);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 1);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('use_more_text', 'All Attendees');
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'columns' => '4',
    'alignment' => 'horizontal',
    'fill_single_line' => 1,
  ));
  $handler->override_option('row_plugin', 'fields');
  $handler->override_option('row_options', array(
    'inline' => array(
      'picture' => 'picture',
    ),
    'separator' => '',
    'hide_empty' => 0,
  ));
  $handler->override_option('block_description', 'Attendee block');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
