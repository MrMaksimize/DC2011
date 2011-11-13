<?php
// $Id$

/**
 * @file
 * Provides rules integrations for the Context module
 */
/**
 * Implementation of hook_rules_condition_info().
 */
function context_rules_rules_condition_info() {
  return array(
    'rules_condition_context_rules_context_isset' => array(
      'label' => t('Is a context set'),
      'arguments' => array(),
      'help' => t('Evaluates to TRUE, if a given Context is set.'),
      'module' => 'Context Rules',
    ),
  );
}

/**
 * determines if a given Context is currently set
 */
function rules_condition_context_rules_context_isset($settings) {
  if (!empty($settings['context'])) {
    //all other hooks should get got but theme level ones will be missed otherwise
    module_invoke_all('context_page_condition');
    //module_invoke_all('context_page_reaction');
    return context_isset('context', $settings['context']);
  }
  return FALSE;
} 

/**
 * Implementation of hook_rules_action_info().
 * @ingroup rules
 */
function context_rules_rules_action_info() {
  return array(
    'rules_action_context_rules_set_context' => array(
      'label' => t('Set a context module context'),
      'arguments' => array(),
      'module' => 'Context Rules',
    ),
  );
}

/**
 * Set a context via rules action 
 *
 * @param $context
 *   An object containing the context data
 * @param $value
 *   An object containing the context data 
 * @return
 *   An array of the newly set context
 *
 * TODO: Offer option to force or respect context conditions
 */
function rules_action_context_rules_set_context($settings) {
  if ($context = context_load($settings['context'])) {
    if (context_set('context', $context->name, $context)) {
      return TRUE;
    }
  }
}
