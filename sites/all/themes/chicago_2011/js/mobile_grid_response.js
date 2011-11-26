Drupal.behaviors.dc2011Behavior = function (context) {
    //get state
  //Drupal.settings.dc2011.prevState = 'full';
  //resizeRespond();
  if (context && Drupal.settings.dc2011.counter < 1){
    Drupal.settings.dc2011.counter ++;
    window.addEventListener('resize', resizeRespond, false);
    Drupal.settings.dc2011.location = window.location.protocol + "//" + window.location.host;
    //implement fit text operations
    for (el in Drupal.settings.dc2011.fitTextEls){
      var t = el;
      console.log(Drupal.settings.dc2011.fitTextEls[el].el);
     $(Drupal.settings.dc2011.fitTextEls[el].el).fitText(1, {
        minFontSize: Drupal.settings.dc2011.fitTextEls[el].min,
        maxFontSize: Drupal.settings.dc2011.fitTextEls[el].max
      });
    }
    
    /*sessions*/
    console.log('behavior active');
    resizeRespond();
  }
}
function clickBinder(){
       if ($('body').hasClass('page-program-session-schedule')){
      console.log('init sess sched');
      /*$(document).bind('flagGlobalAfterLinkUpdate', function(event, data) {
        if(Drupal.settings.dc2011.state == 'mobile' && $('body').hasClass('session-schedule-mobile')){
          $('span.schedule-add .flag-wrapper a').text('');
        }
      });*/
      $('.session-schedule-mobile .view-cod-schedule-mobile h5.title a').bind('click', function(event){
        console.log(event);
        event.preventDefault();
        event.stopPropagation();
        var link_clicked = $(this);
        //find parent
        var parent = $(this).parents('.views-accordion-item');
        var parentH5 = $(this).parents('h5');
        sessionLoad(parent, parentH5, link_clicked);
        return false;
      });
    }
    if ($('body').hasClass('page-program-sessions-accepted')||
        $('body').hasClass('page-program-sessions')){
      console.log('init sess sched');
      $('.view-sessions h5.title a').bind('click', function(event){
        console.log(event);
        event.preventDefault();
        event.stopPropagation();
        
        var link_clicked = $(this);
        //find parent
        var parent = $(this).parents('.presentation');
        var parentH5 = $(this).parents('h5');
        sessionLoad(parent, parentH5, link_clicked);
        return false;
      });
    }
    if ($('body').hasClass('page-program-session-schedule-your-schedule')){
      console.log('init sess sched');
      $('.your-schedule-mobile h5.title a').bind('click', function(event){
        console.log(event);
        event.preventDefault();
        event.stopPropagation();
        
        var link_clicked = $(this);
        //find parent
        var parent = $(this).parents('.presentation');
        var parentH5 = $(this).parents('h5');
        sessionLoad(parent, parentH5, link_clicked);
        return false;
      });
    }
    }
function sessionLoad(parent, parentH5, link_clicked){
//this ends up acting as a router based on the classes attached to the href.
//iterate over all the subtabs and close them up.
//store link in a variable for future use.
  if($(link_clicked).hasClass('loaded')){
//now we know it's been loaded.  but is it open?
    if ($(link_clicked).hasClass('active')){
      //here we know it's been loaded and open. so if clicked again, this is a close
      $('.load-container', parent).slideUp('fast');
      $(link_clicked).removeClass('active');
      $(parent).removeClass('active');
    }
    else{
      //now we know it's loaded, but not active. so a click means open up
      $('.load-container', parent).slideDown('fast');
      $(link_clicked).addClass('active');
      $(parent).addClass('active');
    }
  }
  else{
  //here we know that it has not yet been loaded, so let's load it in.
    var nid = $('.load-space .load-container', parent).attr('id');
    nid = nid.replace('nid-', '');
    $('.load-space .load-container', parent).html('<img class="load-spinner" src="/sites/all/themes/chicago_2011/images/spinner.gif"/>');
    $.ajax({
      url: Drupal.settings.dc2011.location + '/node_response/'+nid,
      success: function(body){
      body = body.nodes[0].node; 
        $('.load-container', parent).html(
          '<div class="ajax-speaker">'+body.field_speakers_uid+'</div>'+
          '<div class="ajax-body">'+body.body+'</div>'+
          '<div class="ajax-read-more">'+body.title+'</div>'
        );
        //if everything loaded, give it a loaded class
        $(link_clicked).addClass('loaded active');
        $(parent).addClass('loaded active');
      },
      error: function(textStatus){
        alert('fail');
      },
      dataType: 'json'
    });
  }
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
    clickBinder();
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
        if (!$('body').hasClass('context_mobile')){ //determine if server side mobile is active
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
  menuToDropdown('#site-menu', '.main-menu', context);
}

function contextHelper(context){
  menuToDropdown('#site-menu', '.main-menu', context);
  //schedule
  //$('span.schedule-add .flag-wrapper a').text('');
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
        //construct optionString
        var optionString = '<option value = "' + $('a', this).attr('href') + '" ';
        if($(this).hasClass('active')){
          optionString = optionString + 'selected="selected" '
        }
        optionString = optionString + '>' + $('a', this).text() + '</a>';
      $('select', topContainer).append(optionString);
        /*append('<option value = "' +
               $('a', this).attr('href') + '">' +
               $('a', this).text() + '</a>');*/
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

