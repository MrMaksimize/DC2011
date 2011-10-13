//Drupal.behaviors.drupalCampChicago = function (context) {

Drupal.behaviors.themeEqualheights = function (context) {
  if (jQuery().equalHeights) {
    $("#user-bar-first div.equal-heights div.content-inner").equalHeights();
    $("#user-bar-last div.equal-heights div.content-inner").equalHeights();
    $("#header-first div.equal-heights div.content-inner").equalHeights();
    $("#header-last div.equal-heights div.content-inner").equalHeights();
    $("#sidebar-first div.equal-heights div.content-inner").equalHeights();
    $("#sidebar-last div.equal-heights div.content-inner").equalHeights();
    $("#preface-first div.equal-heights div.content-inner").equalHeights();
    $("#preface-middle div.equal-heights div.content-inner").equalHeights();
    $("#preface-last div.equal-heights div.content-inner").equalHeights();
    $("#content-top div.equal-heights div.content-inner").equalHeights();
    $("#content-bottom div.equal-heights div.content-inner").equalHeights();
    $("#postscript-one div.equal-heights div.content-inner").equalHeights();
    $("#postscript-two div.equal-heights div.content-inner").equalHeights();
    $("#postscript-three div.equal-heights div.content-inner").equalHeights();
    $("#postscript-four div.equal-heights div.content-inner").equalHeights();
    $("#footer-first div.equal-heights div.content-inner").equalHeights();
    $("#footer-last div.equal-heights div.content-inner").equalHeights();
  }
};

$(document).ready(function() {

/**
 * Hide Front Page items then fadeIn();
 */
	jQuery('body.front .container-12').hide();
	// show the logo and nav before fading everything in
	jQuery('#page-outer-wrapper, #page, #page-inner-wrapper, #site-header.container-12, #preface-wrapper.container-12').show();
	// fadeIn the rest of the stuff
	jQuery('body.front .container-12').delay(2000).fadeIn('slow');
	
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
	jQuery("#user-register, #uc-cart-checkout-form").formToWizard({
		submitButton: 'edit-submit',
		prevLabel: '< Previous',
		nextLabel: 'Proceed >'
	});
	//jQuery("#uc-cart-checkout-form").formToWizard({ prevLabel: '< Previous', nextLabel: 'Proceed >' });
	 
});
//}(jQuery);