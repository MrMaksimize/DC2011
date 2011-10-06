
(function($) {
    $.fn.formToWizard = function(options) {
        options = $.extend({  
            submitButton: "" 
        }, options); 
        
        var element = this;

        var steps = $(element).find("fieldset");
        var count = steps.size();
        var submmitButtonName = "#" + options.submitButton;
        $(submmitButtonName).hide();

        $(element).before("<ul id='steps'></ul>");

        steps.each(function(i) {
            $(this).wrap("<div id='step" + i + "' class='step'></div>");
            $(this).append("<p id='step" + i + "buttons' class='buttons'></p>");

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

        function createPrevButton(i) {
            var stepName = "step" + i;
            $("#" + stepName + "buttons").append("<a href='#stepDesc" + (i - 1) + "' id='" + stepName + "Prev' class='prev'>< Back</a>");

            $("#" + stepName + "Prev").bind("click", function(e) {
                $("#" + stepName).hide();
                $("#step" + (i - 1)).show();
                $(submmitButtonName).hide();
                selectStep(i - 1);
            });
        }

        function createNextButton(i) {
            var stepName = "step" + i;
            $("#" + stepName + "buttons").append("<a href='#stepDesc" + (i + 1) + "' id='" + stepName + "Next' class='next'>Next ></a>");

            $("#" + stepName + "Next").bind("click", function(e) {
                $("#" + stepName).hide();
                $("#step" + (i + 1)).show();
                if (i + 2 == count)
                    $(submmitButtonName).show();
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