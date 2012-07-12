<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dcc_front_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: secondary-links:node/3
  $menu_links['secondary-links:node/3'] = array(
    'menu_name' => 'secondary-links',
    'router_path' => 'node/%',
    'link_title' => 'Chat',
    'options' => array(
      'attributes' => array(
        'title' => 'Chat - Freenode @ #CDMUG',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'uuid' => FALSE,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Chat');


  return $menu_links;
}
