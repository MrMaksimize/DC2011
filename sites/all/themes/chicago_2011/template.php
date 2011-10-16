<?php
// $Id: template.php,v 1.1.2.9 2010/07/09 14:53:42 himerus Exp $

/*
 * Add any conditional stylesheets you will need for this sub-theme.
 *
 * To add stylesheets that ALWAYS need to be included, you should add them to
 * your .info file instead. Only use this section if you are including
 * stylesheets based on certain conditions.
 */
/* -- Delete this line if you want to use and modify this code
// Example: optionally add a fixed width CSS file.
if (theme_get_setting('chicago_2011_fixed')) {
  drupal_add_css(path_to_theme() . '/layout-fixed.css', 'theme', 'all');
}
// */


/**
 * Implementation of HOOK_theme().
 */
function chicago_2011_theme(&$existing, $type, $theme, $path) {
  if (!db_is_active()) {
    return array();
  }
  include_once './' . drupal_get_path('theme', 'chicago_2011') . '/theme-functions.inc';
  // Since we are rebuilding the theme registry and the theme settings' default
  // values may have changed, make sure they are saved in the database properly.
  chicago_2011_theme_get_default_settings($theme);
  return array(
    'id_safe' => array(
      'arguments' => array('string'),
    ),
    'render_attributes' => array(
      'arguments' => array('attributes'),
    ),
  );
	
	// Custom hook for user account links block creation
	$hooks['user_account_links'] = omega_theme($existing, $type, $theme, $path);
	
  $hooks = omega_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/*function chicago_2011_user_account_links(&$vars, $user) {
	if (user_is_annonymous) {
	};
	
	if (user_is_logged_in) {
	};
}*/

/**
 * The region_builder function will create the variables needed to create
 * a dynamic group of regions. This function is simply a quick pass-thru
 * that will create either inline or stacked regions. This function will
 * not do any advanced functionality, but simply assing the appropriate 
 * classes based on the settings for the theme.
 * 
 * For a more advanced set of regions, dynamic_region_builder() will be used.
 */
function chicago_2011_static_region_builder($region_data, $container_width, $vars) {
  // let's cycle the region data, and determine what we have
  foreach ($region_data AS $region => $info) {
    // if we do have content for this region, let's create it.
    if ($info['data']) {
      $vars[$region .'_classes'] = ns('grid-'. $info['width']);
    }
    if (!empty($info['spacing']) && is_array($info['spacing'])) {
      foreach ($info['spacing'] AS $attribute => $value) {
        if ($value) {
          $vars[$region .'_classes'] .= ' '. $attribute .'-'. $value;
        } 
      }
    }
  }
  return $vars;
}


function _chicago_2011_dynamic_zones($width, $conditions, $vars) {
  foreach($conditions AS $variable => $reaction) {
    if(($reaction['type'] && $vars[$variable]) || (!$reaction['type'] && !$vars[$variable])) {
      $width = $width - $reaction['value'];
    }
  }
  return $width;
}
function _chicago_2011_dynamic_widths($width, $conditions, $vars) {
  foreach($conditions AS $variable => $zone) {
    if(($vars[$variable])) {
      $width = $width - $zone['width'];
    }
  }
  return $width;
}
/**
 * The dynamic_region_builder function will be used to pass important zones
 * like the content regions where the regions sent to the function MUST appear
 * inline, and advanced calculations need to be done in order to display the as such
 * 
 * Stacked regions are not possible using this function, and should be passed through
 * static_region_builder() instead.
 */
function chicago_2011_dynamic_region_builder($region_data, $container_width, $vars) {
  // let's cycle the region data, and determine what we have
  foreach ($region_data AS $region => $info) {
    // if we do have content for this region, let's create it.
    if ($info['data']) {
      
      $width = !empty($info['primary']) ? $container_width : $info['width'];
      $vars[$region .'_classes'] = !empty($info['primary']) ?  ns('grid-'. _chicago_2011_dynamic_widths($width, $info['related'], $vars)) : ns('grid-'. $info['width']);
      // we know we have stuff to put here, so we can check for push & pull options
      if($info['pull']) {
      	// looks like we do wanna pull, or this value would have been false, so let's boogie
      	$vars[$region .'_classes'] .= ' '. ns('pull-'. _chicago_2011_dynamic_zones($info['pull']['width'], $info['pull']['conditions'], $vars));
      	//krumo('Pulling '. $region .' '. $vars[$region .'_classes']);
      }
      if($info['push']) {
      	// looks like a push
      	$vars[$region .'_classes'] .= ' '. ns('push-'. _chicago_2011_dynamic_zones($info['push']['width'], $info['push']['conditions'], $vars));
      	//krumo('Pushing '. $region .' '. $vars[$region .'_classes']);
      	//krumo('Should be pushing '. $info['push']['width'] .' grids.');
      	//krumo($info['push']['conditions']);
      }
    }
    // currently ignored becuase we have not given prefix/suffix class options
    // to the primary content zones... this will become active again later
    if (!empty($info['spacing']) && is_array($info['spacing'])) {
      foreach ($info['spacing'] AS $attribute => $value) {
        if ($value) {
          $vars[$region .'_classes'] .= ' '. $attribute .'-'. $value;
        } 
      }
    }
    // \unused prefix/suffix stuffs
  }
  return $vars;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */
/* -- Delete this line if you want to use this function
function chicago_2011_preprocess(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
	

function chicago_2011_preprocess_page(&$vars, $hook) {
	//dpm($vars);
	//$vars['main_menu_links']      = theme('links', $vars['primary_links'], array('class' => 'links main-menu'));
	//$vars['secondary_menu_links'] = theme('links', $vars['secondary_links'], array('class' => 'links secondary-menu'));
}


/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */

function chicago_2011_preprocess_node(&$vars, $hook) {
  //dpm($vars);
}

function chicago_2011_preprocess_user_profile(&$vars) {
	//dpm($vars);
}


/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function chicago_2011_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function chicago_2011_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */


/**
 * Create a string of attributes form a provided array.
 * 
 * @param $attributes
 * @return string
 */
function chicago_2011_render_attributes($attributes) {
  if ($attributes) {
    $items = array();
    foreach($attributes as $attribute => $data) {
      if(is_array($data)) {
        $data = implode(' ', $data);
      }
      $items[] = $attribute . '="' . $data . '"';
    }
    $output = ' ' . implode(' ', $items);
  }
  return $output;
	//return omega_render_attributes($attributes);  
}

/* function chicago_2011_links(&$links, $node) {
  foreach ($links as $module => $link) {
    if (strstr($module, 'flag')) {
			dpm(get_defined_vars());
    }
  }
}*/