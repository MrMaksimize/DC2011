<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_sponsors_user_default_permissions() {
  $permissions = array();

  // Exported permission: convert from sponsor
  $permissions['convert from sponsor'] = array(
    'name' => 'convert from sponsor',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from sponsorship
  $permissions['convert from sponsorship'] = array(
    'name' => 'convert from sponsorship',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to sponsor
  $permissions['convert to sponsor'] = array(
    'name' => 'convert to sponsor',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache sponsor_feature-block-220_220
  $permissions['view imagecache sponsor_feature-block-220_220'] = array(
    'name' => 'view imagecache sponsor_feature-block-220_220',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_full_node
  $permissions['view imagecache sponsor_full_node'] = array(
    'name' => 'view imagecache sponsor_full_node',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo-block-276w
  $permissions['view imagecache sponsor_logo-block-276w'] = array(
    'name' => 'view imagecache sponsor_logo-block-276w',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_110
  $permissions['view imagecache sponsor_logo_110'] = array(
    'name' => 'view imagecache sponsor_logo_110',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_220
  $permissions['view imagecache sponsor_logo_220'] = array(
    'name' => 'view imagecache sponsor_logo_220',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_270w
  $permissions['view imagecache sponsor_logo_270w'] = array(
    'name' => 'view imagecache sponsor_logo_270w',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_bronze
  $permissions['view imagecache sponsor_logo_bronze'] = array(
    'name' => 'view imagecache sponsor_logo_bronze',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_callout
  $permissions['view imagecache sponsor_logo_callout'] = array(
    'name' => 'view imagecache sponsor_logo_callout',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_gold
  $permissions['view imagecache sponsor_logo_gold'] = array(
    'name' => 'view imagecache sponsor_logo_gold',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_platinum
  $permissions['view imagecache sponsor_logo_platinum'] = array(
    'name' => 'view imagecache sponsor_logo_platinum',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache sponsor_logo_silver
  $permissions['view imagecache sponsor_logo_silver'] = array(
    'name' => 'view imagecache sponsor_logo_silver',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  return $permissions;
}
