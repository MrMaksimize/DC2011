//Drupal.behaviors.drupalCampChicago = function (context) {
$(document).ready(function() {
	
/**
 * Move Mollom to Account Info Fieldset.
 */
	if (jQuery('#user-register').length > 0) {
    var mollom = jQuery('#edit-mollom-captcha-wrapper').clone();
		//var formSubmit = jQuery('#user-register #edit-submit').clone();
    jQuery('#edit-mollom-captcha-wrapper').remove();
    jQuery('#edit-mail-wrapper').parent('fieldset').append(mollom);
		//jQuery('').child('').append(formSubmit);
  };

/**
 * Add steps to forms with fieldsets
 *
 * Options available to be passed to "formToWizard({ options.FOO })" and their default values: 
            submitButton: "" //add the ID of the form-submit button, WITHOUT the "#", it is automatically added. DEFAULT == NULL
						prevLabel: "" // DEFAULT == < Back
						nextLabel: "" //DEFAULT == Next >
 */
	jQuery("#user-register").formToWizard({ submitButton: 'edit-submit', prevLabel: '< Previous', nextLabel: 'Proceed >' });
	 
});
//}(jQuery);