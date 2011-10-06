
(function($) {
	$.fn.formToWizard = function(options) {
		options = $.extend({  
			submitButton: "",
			nextLabel: "Next >",
			prevLabel: "< Back" 
		}, options); 
		
		var element = this;

		var steps = $(element).find("fieldset");
		var count = steps.size();
		var submitButtonName = "#" + options.submitButton;
		
		if ($(this).length > 0) {
			$(submitButtonName).hide();
		};

		$(element).before("<div id='steps-wrapper'><ul id='steps'></ul></div>");

		steps.each(function(i) {
			$(this).wrap("<div id='step" + i + "' class='step'></div>");
			$(this).append("<div id='step" + i + "buttons' class='buttons'></div>");

			var name = $(this).find("legend").html();
			$("#steps").append("<li id='stepDesc" + i + "' class='' style='z-index: " + (count - i) + ";'><span class='stepNum'>" + (i + 1) + "</span><span class='stepName'>" + name + "</span></li>");

			if (i == 0) {
				createNextButton(i);
				selectStep(i);
			}
			else if (i == count - 1) {
				$("#step" + i).hide();
				createPrevButton(i);
			}
			else {
				$("#step" + i).hide();
				createPrevButton(i);
				createNextButton(i);
			}
		});
		
		// Find the last LI generated and add .last to it
		var stepItems = $('#steps li');
		stepItems.eq(stepItems.length - 1).addClass('last');

		function createPrevButton(i) {
			var stepName = "step" + i;
			$("#" + stepName + "buttons").append("<a href='javascript:void(0);' id='" + stepName + "Prev' class='button prev'>" + options.prevLabel + "</a>"); //HREF => #stepDesc" + (i - 1) + " -- removed because it doesn't work on all forms

			$("#" + stepName + "Prev").bind("click", function(e) {
				$("#" + stepName).hide();
				$("#step" + (i - 1)).show();
				$(submitButtonName).hide();
				selectStep(i - 1);
			});
		}

		function createNextButton(i) {
			var stepName = "step" + i;
			$("#" + stepName + "buttons").append("<a href='javascript:void(0);' id='" + stepName + "Next' class='button next'>" + options.nextLabel + "</a>");//HREF => #stepDesc" + (i + 1) + " -- removed because it doesn't work on all forms

			$("#" + stepName + "Next").bind("click", function(e) {
				$("#" + stepName).hide();
				$("#step" + (i + 1)).show();
				if (i + 2 == count)
					$(submitButtonName).show();
				selectStep(i + 1);
			});
		}

		function selectStep(i) {
			$("#steps li").removeClass("current");
			$("#stepDesc" + i).addClass("current");
			$("#stepDesc" + (i - 1)).addClass("completed");
			$("#stepDesc" + i).removeClass("completed");
		}

	}
})(jQuery); 