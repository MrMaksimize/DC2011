<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ubercart_related_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer credit cards
  $permissions['administer credit cards'] = array(
    'name' => 'administer credit cards',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer node checkout
  $permissions['administer node checkout'] = array(
    'name' => 'administer node checkout',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer order workflow
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer own product features
  $permissions['administer own product features'] = array(
    'name' => 'administer own product features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product attributes
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product classes
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product features
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product options
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer products
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from event
  $permissions['convert from event'] = array(
    'name' => 'convert from event',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from product
  $permissions['convert from product'] = array(
    'name' => 'convert from product',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to event
  $permissions['convert to event'] = array(
    'name' => 'convert to event',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to product
  $permissions['convert to product'] = array(
    'name' => 'convert to product',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: coupon wholesale pricing
  $permissions['coupon wholesale pricing'] = array(
    'name' => 'coupon wholesale pricing',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create event products
  $permissions['create event products'] = array(
    'name' => 'create event products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create node associations
  $permissions['create node associations'] = array(
    'name' => 'create node associations',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create orders
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create products
  $permissions['create products'] = array(
    'name' => 'create products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete all event products
  $permissions['delete all event products'] = array(
    'name' => 'delete all event products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete all products
  $permissions['delete all products'] = array(
    'name' => 'delete all products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete orders
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own event products
  $permissions['delete own event products'] = array(
    'name' => 'delete own event products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own products
  $permissions['delete own products'] = array(
    'name' => 'delete own products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete payments
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit all event products
  $permissions['edit all event products'] = array(
    'name' => 'edit all event products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit all products
  $permissions['edit all products'] = array(
    'name' => 'edit all products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit orders
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own event products
  $permissions['edit own event products'] = array(
    'name' => 'edit own event products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own products
  $permissions['edit own products'] = array(
    'name' => 'edit own products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage store coupons
  $permissions['manage store coupons'] = array(
    'name' => 'manage store coupons',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manual payments
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: process credit cards
  $permissions['process credit cards'] = array(
    'name' => 'process credit cards',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: test free order
  $permissions['test free order'] = array(
    'name' => 'test free order',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: unconditionally delete orders
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view all orders
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view cc details
  $permissions['view cc details'] = array(
    'name' => 'view cc details',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view cc numbers
  $permissions['view cc numbers'] = array(
    'name' => 'view cc numbers',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache cart
  $permissions['view imagecache cart'] = array(
    'name' => 'view imagecache cart',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache product
  $permissions['view imagecache product'] = array(
    'name' => 'view imagecache product',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache product_full
  $permissions['view imagecache product_full'] = array(
    'name' => 'view imagecache product_full',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache product_list
  $permissions['view imagecache product_list'] = array(
    'name' => 'view imagecache product_list',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache uc_thumbnail
  $permissions['view imagecache uc_thumbnail'] = array(
    'name' => 'view imagecache uc_thumbnail',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view payments
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view store coupons
  $permissions['view store coupons'] = array(
    'name' => 'view store coupons',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
