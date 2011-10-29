Drupal.behaviors.dc2011Behavior = function (context) {
    //get state
  //Drupal.settings.dc2011.prevState = 'full';
  //resizeRespond();
  window.addEventListener('resize', resizeRespond, false);
  resizeRespond();
  
}

function resizeRespond(force){
  Drupal.settings.dc2011.state = getState();
  contextMock();
  if (((($(window).width()) <= 480 && Drupal.settings.dc2011.state == 'mobile') && (Drupal.settings.dc2011.prevState != 'mobile'))){
    console.log('mobile state');
    var gridOps = Drupal.settings.dc2011.gridOps; //shorten
    //process global replacements
    for (i = 0; i < gridOps.globals.length; i++){
      console.log('replace ' + gridOps.globals[i].oldSelector + ' with ' + gridOps.globals[i].newSelector);
      $(document).find('.'+ gridOps.globals[i].oldSelector)
        .removeClass(gridOps.globals[i].oldSelector)
        .addClass(gridOps.globals[i].newSelector +' mobile ' + 'r-' + gridOps.globals[i].oldSelector);
    }
    //process specOps
    for (specOp in gridOps.specOps){
      console.log('specops process mobile');
      var currentOpReps = gridOps.specOps[specOp];
      var currentOpSel = this.specOp;
      //begin op specific replacement
      for (i = 0; i < currentOpReps.length; i++){
        $(currentOpSel).find('.'+ currentOpReps[i].oldSelector)
        .removeClass(currentOpReps[i].oldSelector)
        .addClass(currentOpReps[i].newSelector +' mobile');
      }
    }
    Drupal.settings.dc2011.prevState = 'mobile';
  }
  else if (($(window).width()) > 480 && Drupal.settings.dc2011.state == 'full' && Drupal.settings.dc2011.prevState == 'mobile'){
    var gridOps = Drupal.settings.dc2011.gridOps;
    //process global replacements
    for (i = 0; i < gridOps.globals.length; i++){
      console.log('replace ' + gridOps.globals[i].newSelector + ' with ' + gridOps.globals[i].oldSelector);
      $(document).find('.'+ gridOps.globals[i].newSelector)
        .filter('.mobile').filter('.r-'+ gridOps.globals[i].oldSelector)
        .removeClass(gridOps.globals[i].newSelector +' mobile r-'+gridOps.globals[i].oldSelector)
        .addClass(gridOps.globals[i].oldSelector);
        //$(document).find('.container-12').filter('.mobile').removeClass('container-12 mobile').addClass('grid-6');
    }
    //process specOps
    for (specOp in gridOps.specOps){
      console.log('specops process full');
      var currentOpReps = gridOps.specOps[specOp];
      var currentOpSel = this.specOp;
      //begin op specific replacement
      for (i = 0; i < currentOpReps.length; i++){
        $(currentOpSel).find('.'+ currentOpReps[i].newSelector)
        .filter('.mobile')
        .removeClass(currentOpReps[i].newSelector + ' mobile')
        .addClass(currentOpReps[i].oldSelector);
      }
    }
    console.log('full_state');
    Drupal.settings.dc2011.prevState = 'full';
  }
}

function contextMock(){
  if ($('body').hasClass('front')){
    Drupal.settings.dc2011.posState = getState();
    if (Drupal.settings.dc2011.posState != Drupal.settings.dc2011.prevPosState){
      console.log('runrep');
      if (Drupal.settings.dc2011.posState == 'mobile'){
        //move the 300 and counter above the menu
        $('#header-zone-wrapper #branding').after($('#preface-zone-wrapper #block-views-uc_products-block_1'));
        $('#header-zone-wrapper #block-views-uc_products-block_1').after($('#preface-zone-wrapper #block-block-9'));
        $('#preface-zone-wrapper #block-views-uc_products-block_1').remove();
        $('#preface-zone-wrapper #block-block-9').remove();
        $('#preface-zone-wrapper').css('height', '700px');
        
        //initiate menu change
        menuToDropdown('#site-menu', '.main-menu', 'mobile');
        Drupal.settings.dc2011.prevPosState = 'mobile';
      }
      else if (Drupal.settings.dc2011.posState == 'full'){
        //move the 300 and counter below the menu
        $('#preface-zone-wrapper #preface-middle').append($('#header-zone-wrapper #block-views-uc_products-block_1'));
        $('#preface-zone-wrapper #preface-last').append($('#header-zone-wrapper #block-block-9'));
        $('#header-zone-wrapper #block-views-uc_products-block_1').remove();
        $('#header-zone-wrapper #block-block-9').remove();
        $('#preface-zone-wrapper').css('height', 'auto');
        
        menuToDropdown('#site-menu', '.main-menu', 'full');
        Drupal.settings.dc2011.prevPosState = 'full';
      }
    }
  }
  else if($('body').hasClass('node-type-page')||
          $('body').hasClass('page-community')||
          $('body').hasClass('page-program-sessions')||
          $('body').hasClass('section-users')){ //gotta be a better way, just need to remember
    Drupal.settings.dc2011.posState = getState();
    if (Drupal.settings.dc2011.posState != Drupal.settings.dc2011.prevPosState){
      if (Drupal.settings.dc2011.posState == 'mobile'){
        //move page title above menu
        $('#header-zone-wrapper #branding').after($('#main-wrapper h1.page-title'));
        $('#main-wrapper h1.page-title').remove();
        Drupal.settings.dc2011.prevPosState = 'mobile';
      }
      else if (Drupal.settings.dc2011.posState == 'full'){
        //move page title back where it belongs
        $('#main-wrapper').prepend($('#header-zone-wrapper h1.page-title'));
        $('#header-zone-wrapper h1.page-title').remove();
        Drupal.settings.dc2011.prevPosState = 'full';
      }
    }
  }
}

function getState(){
  if (($(window).width()) <= 480){
    return 'mobile';
  }
  else{
    return 'full';
  }
}
$(window).load(function() {
  Drupal.attachBehaviors();
});

function menuToDropdown(topContainer, ulClass, context){
  if (context == 'mobile'){
    $("<select />").appendTo(topContainer).addClass('mobile mobile-dropdown ' + topContainer + '-mobile');
    $('ul'+ulClass + ' li', topContainer).each( function(){
        var el = this;
      $('select', topContainer).
        append('<option value = "' +
               $('a', this).attr('href') + '">' +
               $('a', this).text() + '</a>');
    });
    //now hide the original lis for future use
    $('ul'+ulClass).hide();
    $('select', topContainer).change(function(){
      window.location = $(this).find("option:selected").val();
    });
  }
  else{
    $('ul'+ulClass).show();
    $('select', topContainer).remove();
  }
}