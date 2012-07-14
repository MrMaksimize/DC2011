<?php

/**
 * Implementation of hook_user_default_profile_fields().
 */
function dcc_user_user_default_profile_fields() {
  $profile_fields = array();

  $profile_fields['profile_allergies'] = array(
  'title' => 'Food Allergies',
  'name' => 'profile_allergies',
  'explanation' => 'What will cause you harm if ingested? We want you to be safe!',
  'category' => '04 You Eat, right?',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-10',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_bio'] = array(
  'title' => 'A bit about yourself',
  'name' => 'profile_bio',
  'explanation' => '',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_co_present'] = array(
  'title' => 'I am willing to co-present',
  'name' => 'profile_co_present',
  'explanation' => '',
  'category' => '05 Thinking of Presenting?',
  'page' => '',
  'type' => 'checkbox',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_company_sponsorship'] = array(
  'title' => 'Is your company available to sponsor the event?',
  'name' => 'profile_company_sponsorship',
  'explanation' => '',
  'category' => '02 Business information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-7',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_do_name'] = array(
  'title' => 'Drupal.org Profile Name',
  'name' => 'profile_do_name',
  'explanation' => 'Your user name on drupal.org. If you do not have one please get one at http://www.druapal.org/user/register .',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-4',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_drupal_role'] = array(
  'title' => 'What do you do with Drupal?',
  'name' => 'profile_drupal_role',
  'explanation' => '',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'selection',
  'weight' => '-6',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => 'Site Builder (point-and-click dev)
Developer (you write the code)
Themer (you make it look good)
Project Manager (you tell these other people what to do)',
);
  $profile_fields['profile_experience'] = array(
  'title' => 'Are You Experienced?',
  'name' => 'profile_experience',
  'explanation' => '',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'selection',
  'weight' => '-9',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => 'New to Drupal
Played with Drupal
Built one or more websites
Contributor',
);
  $profile_fields['profile_groups'] = array(
  'title' => 'Are You in Any Drupal Groups?',
  'name' => 'profile_groups',
  'explanation' => 'Mention some favorites (i.e. Drupalchix)',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'textarea',
  'weight' => '-5',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_learn'] = array(
  'title' => 'What do you want to learn?',
  'name' => 'profile_learn',
  'explanation' => '',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'textarea',
  'weight' => '-7',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_location'] = array(
  'title' => 'Location',
  'name' => 'profile_location',
  'explanation' => '',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-8',
  'required' => '1',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_meal_pref'] = array(
  'title' => 'Meal Preference',
  'name' => 'profile_meal_pref',
  'explanation' => 'What would you prefer to eat?',
  'category' => '04 You Eat, right?',
  'page' => '',
  'type' => 'selection',
  'weight' => '-9',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => 'Omnivore
Vegetarian
Vegan',
);
  $profile_fields['profile_org_type'] = array(
  'title' => 'Organization Type',
  'name' => 'profile_org_type',
  'explanation' => '',
  'category' => '02 Business information',
  'page' => '',
  'type' => 'selection',
  'weight' => '-8',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => 'Non-Profit
For Profit
',
);
  $profile_fields['profile_presented_before'] = array(
  'title' => 'I have presented at a DrupalCon / DrupalCamp before',
  'name' => 'profile_presented_before',
  'explanation' => 'If yes, great! If no, that\'s cool too.  We all have to start somewhere.',
  'category' => '05 Thinking of Presenting?',
  'page' => '',
  'type' => 'checkbox',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_prior_pres_experience'] = array(
  'title' => 'Describe your prior presentation experiences',
  'name' => 'profile_prior_pres_experience',
  'explanation' => 'Only if you\'ve presented before.  If not, no worries.',
  'category' => '05 Thinking of Presenting?',
  'page' => '',
  'type' => 'textarea',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_pro'] = array(
  'title' => 'Are you a Pro?',
  'name' => 'profile_pro',
  'explanation' => 'Do you get paid to do Drupal?',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'checkbox',
  'weight' => '-8',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_special_requests'] = array(
  'title' => 'Special Requests',
  'name' => 'profile_special_requests',
  'explanation' => 'Anything not captured elsewhere ... let us know, if we need to know.',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'textarea',
  'weight' => '-3',
  'required' => '0',
  'register' => '1',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_temporary_install'] = array(
  'title' => 'Do You Want a Temporary Drupal Install For This Camp?',
  'name' => 'profile_temporary_install',
  'explanation' => 'Bring a laptop, you\'ll get a remote Drupal site with ftp access to follow along.',
  'category' => '03 Drupal & You',
  'page' => '',
  'type' => 'checkbox',
  'weight' => '-10',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_twitter'] = array(
  'title' => 'Twitter',
  'name' => 'profile_twitter',
  'explanation' => '',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '-5',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
  $profile_fields['profile_website'] = array(
  'title' => 'Website',
  'name' => 'profile_website',
  'explanation' => '',
  'category' => '01 Personal information',
  'page' => '',
  'type' => 'url',
  'weight' => '-6',
  'required' => '0',
  'register' => '1',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
return $profile_fields;
}
