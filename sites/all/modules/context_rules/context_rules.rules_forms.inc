<?php
// $Id$

/**
 * @file
 * Provides rules integrations for the Context module
 */

/**
 * @group - conditions
 */
function rules_condition_context_rules_context_isset_form($settings, &$form) {
  //use context_context_list rather than context_enabled_contexts 
  //so disabled context can be set
  if ($contexts = context_context_list()) {  
    $form['settings']['context'] = array(
      '#type' => 'select',
      '#title' => t('Is the following Context set?'),
      '#options' => $contexts,
      '#default_value' => isset($settings['context']) ? $settings['context'] : array(),
      '#required' => TRUE,
    );    
  }
  
  return $form;
}

/**
 * @group - actions
 *
 * TODO: Offer option to force or respect context conditions
 */
function rules_action_context_rules_set_context_form($settings, &$form) {
  //use context_context_list rather than context_enabled_contexts 
  //so disabled context can be set
  if ($contexts = context_context_list()) {  
    $form['settings']['context'] = array(
      '#type' => 'select',
      '#title' => t('Select a context to set'),
      '#options' => $contexts,
      '#default_value' => isset($settings['context']) ? $settings['context'] : array(),
      '#required' => TRUE,
    );
    /*
    $form['settings']['force_context'] = array(
      '#type' => 'checkbox',
      '#title' => t('Force context to be set regardless of context conditions'),
      '#default_value' => isset($settings['force_context']) ? $settings['force_context'] : '1',
      '#description' => t('Checking this box will force the setting of the selected context regardless of whether the context conditions have been met.'),
    );*/    
  }
  
  return $form;
}