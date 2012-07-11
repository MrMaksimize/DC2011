<?php

/**
 * Implementation of hook_content_default_fields().
 */
function cod_bof_content_default_fields() {
  $fields = array();

  // Exported field: field_bof_room
  $fields['bof_session-field_bof_room'] = array(
    'field_name' => 'field_bof_room',
    'type_name' => 'bof_session',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'activitystream' => 0,
      'bof_session' => 0,
      'event' => 0,
      'faq' => 0,
      'forum_post' => 0,
      'news' => 0,
      'page' => 0,
      'product' => 0,
      'room' => 0,
      'schedule_item' => 0,
      'session' => 0,
      'sponsor' => 0,
      'sponsorship' => 0,
      'time_slot' => 0,
      'webform' => 0,
    ),
    'advanced_view' => 'session_rooms',
    'advanced_view_args' => 'bof room',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Room',
      'weight' => '-2',
      'description' => 'Please select the room in which this BoF takes place.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_session_slot
  $fields['bof_session-field_session_slot'] = array(
    'field_name' => 'field_session_slot',
    'type_name' => 'bof_session',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_schedule',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'time_slot' => 'time_slot',
      'bof_session' => 0,
      'event' => 0,
      'news' => 0,
      'page' => 0,
      'product' => 0,
      'room' => 0,
      'schedule_item' => 0,
      'session' => 0,
      'sponsor' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Time slot',
      'weight' => '-1',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Room');
  t('Time slot');

  return $fields;
}
