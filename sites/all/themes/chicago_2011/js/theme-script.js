//Drupal.behaviors.drupalCampChicago = function (context) {

/*$(window).load(function() {
  //Drupal.attachBehaviors();
	alert('hi');
});*/

$(document).ready(function() {

/**
 * Hide Front Page items then fadeIn();
 */
	//run equal heights before anything else happens
	dcEqualHeights();
  //Hide the stuff we don't want right away
  jQuery('body.front .container-12, #footer-message-wrapper').hide();
  // position the footer message in the middle of the browser window before showing everything else
  jQuery('#footer-message-wrapper').addClass('hoverMid').delay(250).slideDown('slow').delay(500);
  // show the logo and nav before fading everything in
  jQuery('body.front #site-header.container-12, body.front #preface-wrapper.container-12').delay(1500).slideDown('slow');
  // fadeIn the rest of the stuff
  jQuery('body.front .container-12').delay(4500).slideDown(1000);
  // don't forget to remove the positioning on the footer message
  jQuery('#footer-message-wrapper').removeClass('hoverMid');


  /*jQuery('body.front .container-12').hide();
  // show the logo and nav before fading everything in
  jQuery('body.front #page-outer-wrapper, body.front #page, body.front #page-inner-wrapper, body.front #site-header.container-12, body.front #preface-wrapper.container-12').show();
  // fadeIn the rest of the stuff
  jQuery('body.front .container-12').delay(3500).slideDown(1000);*/

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

  //wrap mini pager "of" in a span to use different font
  //jQuery('li.pager-current').html($('li.pager-current').html().replace(/(of)/g,'<span class="curly">$1</span>'));


});
//}(jQuery);

//Drupal.behaviors.themeEqualheights = function (context) {
function dcEqualHeights(){
  if (jQuery().equalHeights) {
    //jQuery.fn.delay(5000, function(){
      console.log(Drupal.settings.dc2011);
      if (!$('body').hasClass('context_mobile') && Drupal.settings.dc2011.state == 'full'){
        console.log('equalheights');
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
        $("#postscript-top div.equal-heights div.content-inner").equalHeights();
        $("#postscript-one div.equal-heights div.content-inner").equalHeights();
        $("#postscript-two div.equal-heights div.content-inner").equalHeights();
        $("#postscript-three div.equal-heights div.content-inner").equalHeights();
        $("#postscript-four div.equal-heights div.content-inner").equalHeights();
        $("#footer-first div.equal-heights div.content-inner").equalHeights();
        $("#footer-last div.equal-heights div.content-inner").equalHeights();
      }
    //});
  }
};