//Drupal.behaviors.drupalCampChicago = function (context) {
$(document).ready(function() {
	
/**
 * Move Mollom to Account Info Fieldset.
 */
	if (jQuery('#user-register').length > 0) {
    var mollom = jQuery('#edit-mollom-captcha-wrapper').clone();
    jQuery('#edit-mollom-captcha-wrapper').remove();
    jQuery('#edit-mail-wrapper').parent('fieldset').append(mollom);
  };

/**
 * Add steps to forms with fieldsets
 */
	jQuery("#user-register").formToWizard({ submitButton: 'edit-submit' });
	 
});
//}(jQuery);