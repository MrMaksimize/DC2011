function updateOrientation(){
  var viewWidth = "vert";
  //alert('update');
    switch(window.orientation){
      case 0:
        viewWidth = "vert";
        // alert(viewWidth);
      break;
      case -90:
        viewWidth = "wide";
        // alert(viewWidth);
      break;
      case 90:
        viewWidth = "wide";
        // alert(viewWidth);
      break;
      case 180:
        viewWidth = "vert";
        //alert(viewWidth);
      break;
      var setWidth = window.innerWidth +"px";
    }
  $("body").attr("class", "");
  $("body").attr("class", viewWidth); 
  $("#viewport").css("width", setWidth);  
  window.scrollTo(0, 1);  
}
function resizeOrientation(){
  //alert('resize');
  var viewWidth = "vert";
    switch(window.orientation){
      case 0:
        viewWidth = "vert";
      break;
      case -90:
        viewWidth = "wide";
      break;
      case 90:
        viewWidth = "wide";
      break;
    //var setWidth = window.innerWidth +"px";
  }
  $("body").attr("class", "");
  $("body").attr("class", viewWidth + ' iPhone');   
  window.scrollTo(0, 1);  
}

if((navigator.userAgent.match(/iPhone/i)) 
|| (navigator.userAgent.match(/iPod/i))) { 
  window.addEventListener("orientationchange", updateOrientation, false);
}
else if (navigator.userAgent.match(/Android/i)) {
  window.addEventListener("resize", resizeOrientation, false);
}

$(document).ready(function(){
  console.log('read');
  if((navigator.userAgent.match(/iPhone/i)) || (navigator.userAgent.match(/iPod/i))) { 
  updateOrientation();  
  window.scrollTo(0, 1);  
  }
  else if (navigator.userAgent.match(/Android/i)) {
      window.scrollTo(0, 1);  
  }
});