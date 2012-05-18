// $Id: preview.js,v 1.5 2010/12/11 21:37:41 webchick Exp $

(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Drupal.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off.
      /*
      if (Drupal.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }
      */

      $('#preview-header, #preview-logo-area', form).css('background-color', $('#palette input[name="palette[base]"]', form).val());
      $('#preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      $('#preview-menu li a.active', form).css('border-color', $('#palette input[name="palette[link]"]', form).val());


      $('#preview-content, #preview-footer', form).css('color', $('#palette input[name="palette[text]"]', form).val());

      $('#preview-button', form).css('background-color', $('#palette input[name="palette[button]"]', form).val());

      $('#preview-footer', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());
      $('#preview-footer a', form).css('color', $('#palette input[name="palette[footer_links]"]', form).val());


    }
  };
})(jQuery);
