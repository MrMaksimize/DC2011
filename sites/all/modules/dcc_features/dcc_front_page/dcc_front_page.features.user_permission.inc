<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_front_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: convert from front_page_slideshow_image
  $permissions['convert from front_page_slideshow_image'] = array(
    'name' => 'convert from front_page_slideshow_image',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to front_page_slideshow_image
  $permissions['convert to front_page_slideshow_image'] = array(
    'name' => 'convert to front_page_slideshow_image',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create front_page_slideshow_image content
  $permissions['create front_page_slideshow_image content'] = array(
    'name' => 'create front_page_slideshow_image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: delete any front_page_slideshow_image content
  $permissions['delete any front_page_slideshow_image content'] = array(
    'name' => 'delete any front_page_slideshow_image content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own front_page_slideshow_image content
  $permissions['delete own front_page_slideshow_image content'] = array(
    'name' => 'delete own front_page_slideshow_image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: edit any front_page_slideshow_image content
  $permissions['edit any front_page_slideshow_image content'] = array(
    'name' => 'edit any front_page_slideshow_image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: edit own front_page_slideshow_image content
  $permissions['edit own front_page_slideshow_image content'] = array(
    'name' => 'edit own front_page_slideshow_image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: view imagecache front_page_slideshow_preset
  $permissions['view imagecache front_page_slideshow_preset'] = array(
    'name' => 'view imagecache front_page_slideshow_preset',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'content',
    ),
  );

  return $permissions;
}
