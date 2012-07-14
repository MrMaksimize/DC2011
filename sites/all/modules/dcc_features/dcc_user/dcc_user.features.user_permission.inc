<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
