<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_misc_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_attribution_copy
  $permissions['edit field_attribution_copy'] = array(
    'name' => 'edit field_attribution_copy',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_attribution_link
  $permissions['edit field_attribution_link'] = array(
    'name' => 'edit field_attribution_link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_image_cache
  $permissions['edit field_image_cache'] = array(
    'name' => 'edit field_image_cache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view field_attribution_copy
  $permissions['view field_attribution_copy'] = array(
    'name' => 'view field_attribution_copy',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_attribution_link
  $permissions['view field_attribution_link'] = array(
    'name' => 'view field_attribution_link',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view field_image_cache
  $permissions['view field_image_cache'] = array(
    'name' => 'view field_image_cache',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
