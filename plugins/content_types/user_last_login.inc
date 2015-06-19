<?php
/**
 * @file
 * Ctools plugin file.
 */

$plugin = array(
  'title' => t('Render a "last login" pane.'),
  'single' => TRUE,
  'category' => array(t('User'), -9),
  // Despite having no "settings" we need this function to pass back a form,
  // or we'll loose the context and title settings.
  'edit form' => 'user_last_login_content_type_edit_form',
  'render callback' => 'user_last_login_content_type_render',
);

/**
 * Helper function to render ctool plugin content.
 */
function user_last_login_content_type_render($subtype, $conf, $args, $context = NULL) {
  $pane = (object)module_invoke('user_last_login', 'block_view', 'user_last_login');
  
  return $pane;
}

/**
 * Edit form callback for the content type.
 */
function user_last_login_content_type_edit_form($form, &$form_state) {
  // No settings beyond context, which has already been handled.
  return $form;
}
