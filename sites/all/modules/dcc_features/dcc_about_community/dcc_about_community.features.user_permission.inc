<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dcc_about_community_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access news feeds
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer forums
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer news feeds
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from badge
  $permissions['convert from badge'] = array(
    'name' => 'convert from badge',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from faq
  $permissions['convert from faq'] = array(
    'name' => 'convert from faq',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from forum
  $permissions['convert from forum'] = array(
    'name' => 'convert from forum',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from forum_post
  $permissions['convert from forum_post'] = array(
    'name' => 'convert from forum_post',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from news
  $permissions['convert from news'] = array(
    'name' => 'convert from news',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from page
  $permissions['convert from page'] = array(
    'name' => 'convert from page',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from slideshow_about
  $permissions['convert from slideshow_about'] = array(
    'name' => 'convert from slideshow_about',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert from webform
  $permissions['convert from webform'] = array(
    'name' => 'convert from webform',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to badge
  $permissions['convert to badge'] = array(
    'name' => 'convert to badge',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to faq
  $permissions['convert to faq'] = array(
    'name' => 'convert to faq',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to forum
  $permissions['convert to forum'] = array(
    'name' => 'convert to forum',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to forum_post
  $permissions['convert to forum_post'] = array(
    'name' => 'convert to forum_post',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to news
  $permissions['convert to news'] = array(
    'name' => 'convert to news',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to page
  $permissions['convert to page'] = array(
    'name' => 'convert to page',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to slideshow_about
  $permissions['convert to slideshow_about'] = array(
    'name' => 'convert to slideshow_about',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: convert to webform
  $permissions['convert to webform'] = array(
    'name' => 'convert to webform',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create badge content
  $permissions['create badge content'] = array(
    'name' => 'create badge content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create forum topics
  $permissions['create forum topics'] = array(
    'name' => 'create forum topics',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create forum_post content
  $permissions['create forum_post content'] = array(
    'name' => 'create forum_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create news content
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create slideshow_about content
  $permissions['create slideshow_about content'] = array(
    'name' => 'create slideshow_about content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any badge content
  $permissions['delete any badge content'] = array(
    'name' => 'delete any badge content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any forum topic
  $permissions['delete any forum topic'] = array(
    'name' => 'delete any forum topic',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any forum_post content
  $permissions['delete any forum_post content'] = array(
    'name' => 'delete any forum_post content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any news content
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: delete any slideshow_about content
  $permissions['delete any slideshow_about content'] = array(
    'name' => 'delete any slideshow_about content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: delete own badge content
  $permissions['delete own badge content'] = array(
    'name' => 'delete own badge content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own forum topics
  $permissions['delete own forum topics'] = array(
    'name' => 'delete own forum topics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own forum_post content
  $permissions['delete own forum_post content'] = array(
    'name' => 'delete own forum_post content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own slideshow_about content
  $permissions['delete own slideshow_about content'] = array(
    'name' => 'delete own slideshow_about content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any badge content
  $permissions['edit any badge content'] = array(
    'name' => 'edit any badge content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any forum topic
  $permissions['edit any forum topic'] = array(
    'name' => 'edit any forum topic',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any forum_post content
  $permissions['edit any forum_post content'] = array(
    'name' => 'edit any forum_post content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any slideshow_about content
  $permissions['edit any slideshow_about content'] = array(
    'name' => 'edit any slideshow_about content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own badge content
  $permissions['edit own badge content'] = array(
    'name' => 'edit own badge content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own forum topics
  $permissions['edit own forum topics'] = array(
    'name' => 'edit own forum topics',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own forum_post content
  $permissions['edit own forum_post content'] = array(
    'name' => 'edit own forum_post content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own slideshow_about content
  $permissions['edit own slideshow_about content'] = array(
    'name' => 'edit own slideshow_about content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view imagecache about_page_slideshow
  $permissions['view imagecache about_page_slideshow'] = array(
    'name' => 'view imagecache about_page_slideshow',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'content',
    ),
  );

  // Exported permission: view imagecache attendees_196_196
  $permissions['view imagecache attendees_196_196'] = array(
    'name' => 'view imagecache attendees_196_196',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache attendees_60_60
  $permissions['view imagecache attendees_60_60'] = array(
    'name' => 'view imagecache attendees_60_60',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view imagecache pastimages
  $permissions['view imagecache pastimages'] = array(
    'name' => 'view imagecache pastimages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
    ),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
