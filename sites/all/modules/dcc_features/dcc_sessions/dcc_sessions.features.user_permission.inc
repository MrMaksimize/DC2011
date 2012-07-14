<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_sessions_user_default_permissions() {
  $permissions = array();

  // Exported permission: convert from bof_session
  $permissions['convert from bof_session'] = array(
    'name' => 'convert from bof_session',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from room
  $permissions['convert from room'] = array(
    'name' => 'convert from room',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from schedule_item
  $permissions['convert from schedule_item'] = array(
    'name' => 'convert from schedule_item',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from session
  $permissions['convert from session'] = array(
    'name' => 'convert from session',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from time_slot
  $permissions['convert from time_slot'] = array(
    'name' => 'convert from time_slot',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to bof_session
  $permissions['convert to bof_session'] = array(
    'name' => 'convert to bof_session',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to room
  $permissions['convert to room'] = array(
    'name' => 'convert to room',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to schedule_item
  $permissions['convert to schedule_item'] = array(
    'name' => 'convert to schedule_item',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to session
  $permissions['convert to session'] = array(
    'name' => 'convert to session',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to sponsorship
  $permissions['convert to sponsorship'] = array(
    'name' => 'convert to sponsorship',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to time_slot
  $permissions['convert to time_slot'] = array(
    'name' => 'convert to time_slot',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create bof_session content
  $permissions['create bof_session content'] = array(
    'name' => 'create bof_session content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own bof_session content
  $permissions['delete own bof_session content'] = array(
    'name' => 'delete own bof_session content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_bof_room
  $permissions['edit field_bof_room'] = array(
    'name' => 'edit field_bof_room',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_category
  $permissions['edit field_category'] = array(
    'name' => 'edit field_category',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_dates
  $permissions['edit field_dates'] = array(
    'name' => 'edit field_dates',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_questions_answered
  $permissions['edit field_questions_answered'] = array(
    'name' => 'edit field_questions_answered',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_room_capacity
  $permissions['edit field_room_capacity'] = array(
    'name' => 'edit field_room_capacity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_room_photo
  $permissions['edit field_room_photo'] = array(
    'name' => 'edit field_room_photo',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_room_session_capacity
  $permissions['edit field_room_session_capacity'] = array(
    'name' => 'edit field_room_session_capacity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_slide_title
  $permissions['edit field_slide_title'] = array(
    'name' => 'edit field_slide_title',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_slideshow_image
  $permissions['edit field_slideshow_image'] = array(
    'name' => 'edit field_slideshow_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: edit field_slideshow_link
  $permissions['edit field_slideshow_link'] = array(
    'name' => 'edit field_slideshow_link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own bof_session content
  $permissions['edit own bof_session content'] = array(
    'name' => 'edit own bof_session content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_bof_room
  $permissions['view field_bof_room'] = array(
    'name' => 'view field_bof_room',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_category
  $permissions['view field_category'] = array(
    'name' => 'view field_category',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_dates
  $permissions['view field_dates'] = array(
    'name' => 'view field_dates',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_questions_answered
  $permissions['view field_questions_answered'] = array(
    'name' => 'view field_questions_answered',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_room_capacity
  $permissions['view field_room_capacity'] = array(
    'name' => 'view field_room_capacity',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_room_photo
  $permissions['view field_room_photo'] = array(
    'name' => 'view field_room_photo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_room_session_capacity
  $permissions['view field_room_session_capacity'] = array(
    'name' => 'view field_room_session_capacity',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_slide_title
  $permissions['view field_slide_title'] = array(
    'name' => 'view field_slide_title',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_slideshow_image
  $permissions['view field_slideshow_image'] = array(
    'name' => 'view field_slideshow_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content',
    ),
  );

  // Exported permission: view field_slideshow_link
  $permissions['view field_slideshow_link'] = array(
    'name' => 'view field_slideshow_link',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content',
    ),
  );

  // Exported permission: view imagecache presenter_session-thumb
  $permissions['view imagecache presenter_session-thumb'] = array(
    'name' => 'view imagecache presenter_session-thumb',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
