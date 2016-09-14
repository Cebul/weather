<?php
/**
 * @file
 * Wunderground admin settings.
 */

/**
 * Admin settings form.
 */
function weather_admin_form() {
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Weather module settings.'),
    '#collapsible' => FALSE,
    );
  return system_settings_form($form);
}


