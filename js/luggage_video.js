/*
 * Javascript that makes transcripts collapsible
 */
(function($) {
    Drupal.behaviors.luggage_video = {
        attach: function (context, settings) {
            $('body', context).once('transcript_hide', function () {
                $('.field-name-field-video-transcript .field-items').css('display', 'none');
                $('.field-name-field-video-transcript .field-label').append('<em>(Click to expand)</em>');
                $('.field-name-field-video-transcript .field-label').wrapInner('<a href="" onclick="return false;"></a>');
                $('.field-name-field-video-transcript .field-label').click(function () {
                    $(this).parent().children('.field-items').slideToggle('slow');
                });
            });
        }
    }
})(jQuery);
