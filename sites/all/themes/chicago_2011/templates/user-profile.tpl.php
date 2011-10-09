<?php

/**
 * @file user-profile.tpl.php
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * By default, all user profile data is printed out with the $user_profile
 * variable. If there is a need to break it up you can use $profile instead.
 * It is keyed to the name of each category or other data attached to the
 * account. If it is a category it will contain all the profile items. By
 * default $profile['summary'] is provided which contains data on the user's
 * history. Other data can be included by modules. $profile['user_picture'] is
 * available by default showing the account picture.
 *
 * Also keep in mind that profile items and their categories can be defined by
 * site administrators. They are also available within $profile. For example,
 * if a site is configured with a category of "contact" with
 * fields for of addresses, phone numbers and other related info, then doing a
 * straight print of $profile['contact'] will output everything in the
 * category. This is useful for altering source order and adding custom
 * markup for the group.
 *
 * To check for all available data within $profile, use the code below.
 * @code
 *   print '<pre>'. check_plain(print_r($profile, 1)) .'</pre>';
 * @endcode
 *
 * Available variables:
 *   - $user_profile: All user profile data. Ready for print.
 *   - $profile: Keyed array of profile categories and their items or other data
 *     provided by modules.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 */
?>
    <?php /*dpm($profile); profile_load_profile($account); dpm($account, 'account'); */ ?>
<div class="profile">  
  <div id="user-main">
    <div id="full-name">
      <h2>
      <?php print "$account->profile_first $account->profile_last"; ?>
      </h2>
    </div>
    <div id="username">
      <h3>
      <?php print "[aka $account->name]"; ?>
      </h3>
    </div>
    <div id="user-info">
      <div id="user-location">
        <?php print "Location: $account->profile_location"; ?>
      </div>
      <div id="user-org">
        <?php print "Company/Org: $account->profile_org"; ?>
      </div>
      <div id="user-title">
        <?php print "Job Title: $account->profile_job_title"; ?>
      </div>
      <div id="user-bio">
        <?php print  "<p>$account->profile_bio</p>"; ?>
      </div>
    </div>
  </div>
  <div id="user-right">
    <?php if($profile['user_picture']): ?>
      <?php print $profile['user_picture']; ?>
    <?php endif; ?>
  </div>
</div>
