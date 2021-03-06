<?php
// $Id: viewscarousel.views.inc,v 1.1.4.1 2010/08/16 14:35:19 mfer Exp $
/**
 * @file
 *  Provides the views plugin information.
 */

/**
 * Implementation of hook_views_plugin().
 */
function viewscarousel_views_plugins() {
  return array(
    'module' => 'viewscarousel',
    'style' => array(
      'viewscarousel' => array(
        'title' => t('Views Carousel'),
        'theme' => 'viewscarousel_view',
        'help' => t('Display rows in a Carousel via jCarousel.'),
        'handler' => 'viewscarousel_style_plugin',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}