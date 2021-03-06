<?php

/**
 * Implementation of hook_strongarm().
 */
function cod_sponsors_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sponsor';
  $strongarm->value = 0;
  $export['comment_anonymous_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_sponsor';
  $strongarm->value = '3';
  $export['comment_controls_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sponsor';
  $strongarm->value = '4';
  $export['comment_default_mode_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_sponsor';
  $strongarm->value = '1';
  $export['comment_default_order_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sponsor';
  $strongarm->value = '50';
  $export['comment_default_per_page_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sponsor';
  $strongarm->value = '0';
  $export['comment_form_location_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sponsor';
  $strongarm->value = '1';
  $export['comment_preview_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sponsor';
  $strongarm->value = '0';
  $export['comment_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sponsor';
  $strongarm->value = '1';
  $export['comment_subject_field_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_sponsor';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '4',
    'author' => '3',
    'options' => '5',
    'comment_settings' => '9',
    'menu' => '-4',
    'path' => '8',
    'attachments' => '7',
    'path_redirect' => '6',
    'detailed_question' => '2',
  );
  $export['content_extra_weights_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sponsor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sponsor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_sponsor';
  $strongarm->value = '1';
  $export['upload_sponsor'] = $strongarm;

  return $export;
}
