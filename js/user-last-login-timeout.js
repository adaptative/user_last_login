/**
 * @file
 * Code to timeout the user last login block.
 */

(function ($) {
    Drupal.behaviors.timeout = {
        attach: function (context, settings) {
            $('.last_login').once('loginblock', function(){
                setTimeout(lastloginblocktimeout, 10000);
            });
        }
    };

    var lastloginblocktimeout = function(){
        $(".last_login").hide("slow");
    };

})(jQuery);
