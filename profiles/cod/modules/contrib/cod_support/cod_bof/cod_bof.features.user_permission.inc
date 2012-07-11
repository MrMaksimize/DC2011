<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_bof_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete any bof_session content
  $permissions['delete any bof_session content'] = array(
    'name' => 'delete any bof_session content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'session organizer',
      '2' => 'site administrator',
    ),
  );

  // Exported permission: edit any bof_session content
  $permissions['edit any bof_session content'] = array(
    'name' => 'edit any bof_session content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'session organizer',
      '2' => 'site administrator',
    ),
  );

  return $permissions;
}
