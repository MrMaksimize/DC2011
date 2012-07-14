<?php

/**
 * Implementation of hook_user_default_roles().
 */
function dcc_user_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: attendee
  $roles['attendee'] = array(
    'name' => 'attendee',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: badge
  $roles['badge'] = array(
    'name' => 'badge',
  );

  // Exported role: content
  $roles['content'] = array(
    'name' => 'content',
  );

  // Exported role: speaker
  $roles['speaker'] = array(
    'name' => 'speaker',
  );

  // Exported role: sponsor
  $roles['sponsor'] = array(
    'name' => 'sponsor',
  );

  return $roles;
}
