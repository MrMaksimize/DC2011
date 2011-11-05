Drupal.behaviors.dc2011Behavior = function (context) {
    //get state
  //Drupal.settings.dc2011.prevState = 'full';
  //resizeRespond();
  window.addEventListener('resize', resizeRespond, false);
  Drupal.settings.dc2011.location = window.location.protocol + "//" + window.location.host;
  /*flag helper*/
  $(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
    if(Drupal.settings.dc2011.state == 'mobile' && $('body').hasClass('session-schedule-mobile')){
      $('span.schedule-add .flag-wrapper a').text('');
    }
  });
  $('.session-schedule-mobile .view-cod-schedule h5 a').bind('click', function(event){
    console.log($(this).attr('href'));
    //find parent
    var parent = $(this).parents('.views-accordion-item');
    var nid = $('.load-space .load-container', parent).attr('id');
    nid = nid.replace('nid-', '');
    $.ajax({
      url: Drupal.settings.dc2011.location + '/node_response/'+nid,
      success: function(body){
        console.log(body);
        body = body.nodes[0].node;
        console.log(body);
        
        $('.load-container', parent).html(
        '<div class="ajax-speaker">'+body.field_speakers_uid+'</div>'+
        '<div class="ajax-body">'+body.body+'</div>'+
        '<div class="ajax-read-more">'+body.title+'</div>'
        );
      },
      error: function(textStatus){
        alert('fail');
      },
      dataType: 'json',
    });
    event.stopPropagation();
    return false;
  });
  console.log('behavior active');
  resizeRespond();
}


function resizeRespond(force){
  console.log('respond');
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
  //adjust for responsive. if context active, no need for this to run.
  //if ($('body').hasClass('front')){
    Drupal.settings.dc2011.posState = getState();
    if (Drupal.settings.dc2011.posState != Drupal.settings.dc2011.prevPosState){
      console.log('runrep');
      if (Drupal.settings.dc2011.posState == 'mobile'){
        //context mocker
        if (!$('body').hasClass('context_mobile')){
          contextMocker('mobile');
        }
        //context helper
        else{
          contextHelper('mobile');
        }
        
        Drupal.settings.dc2011.prevPosState = 'mobile';
      }
      else if (Drupal.settings.dc2011.posState == 'full'){
        //context mocker
        if (!$('body').hasClass('context_mobile')){
        contextMocker('full');
        }
        //context helper
        else{
          contextHelper('full');
        }
        Drupal.settings.dc2011.prevPosState = 'full';
      }
    }
  //}
  /*else if($('body').hasClass('node-type-page')||
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
  }*/
}

function contextMocker(context){
  console.log('contextMocker ' + context);
}

function contextHelper(context){
  menuToDropdown('#site-menu', '.main-menu', context);
  //schedule
  $('span.schedule-add .flag-wrapper a').text('');
  //$('h5.title a').fitText();
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
    $("<select />").appendTo(topContainer).addClass('mobile mobile-dropdown ' + topContainer.replace('#','') + '-mobile');
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

