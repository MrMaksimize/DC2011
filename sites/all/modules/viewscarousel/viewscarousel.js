(function($) {
  var viewscarouselHTML = new Array();
  var viewscarouselObjects = new Array();
  var uuid = 0;
  Drupal.behaviors.viewscarousel = function(context) {
    $.each(Drupal.settings.viewscarousel, function(id) {
      if (this.scroll) this.scroll = parseInt(this.scroll);
      if (this.start) this.start = parseInt(this.start);
      if (this.visible) this.visible = parseInt(this.visible);
      if (this.auto) this.auto = parseInt(this.auto);

      // If a number is passed in for the animation we need to turn it from a
      // string into a number.
      if (this.animation) {
        var animation = parseInt(this.animation);
        if (!isNaN(animation)) {
          this.animation = animation;
        }
      }
      $this = $('#' + id);
      if (this.auto_pause == 1 && this.auto > 0) {
        this.initCallback = viewscarouselInitCallback;
      }
      if (this.wrap == 'circular') {
        this.itemVisibleInCallback = {onBeforeAnimation: viewscarouselItemVisibleInCallback};
        this.itemVisibleOutCallback = {onAfterAnimation: viewscarouselItemVisibleOutCallback};
        this.viewscarouseluuid = uuid;
        viewscarouselHTML[uuid] = new Array();
        $.each($this.children(), function () {
          viewscarouselHTML[uuid].push($(this).html());
        });
        uuid++;
      }
      $this.jcarousel(this);
    });
  }

  function viewscarouselItemVisibleInCallback(carousel, item, i, state, evt) {
    var idx = carousel.index(i, viewscarouselHTML[carousel.options.viewscarouseluuid].length);
    carousel.add(i, viewscarouselHTML[carousel.options.viewscarouseluuid][idx - 1]);
  };

  function viewscarouselItemVisibleOutCallback(carousel, item, i, state, evt) {
    carousel.remove(i);

    // The rotator stops rotating at the end. For circular rotations we want it to
    // continue so we start it again.
    if (carousel.options.auto > 0) {
      carousel.startAuto();
    }
  };

  function viewscarouselInitCallback(carousel) {
    // Disable autoscrolling if the user clicks the prev or next button.
    carousel.buttonNext.bind('click', function() {
        carousel.startAuto(0);
    });

    carousel.buttonPrev.bind('click', function() {
        carousel.startAuto(0);
    });

    // Pause autoscrolling if the user moves with the cursor over the clip.
    carousel.clip.hover(function() {
        carousel.stopAuto();
    }, function() {
        carousel.startAuto();
    });
  };
})(jQuery)