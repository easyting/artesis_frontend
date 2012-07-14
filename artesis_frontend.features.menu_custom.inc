<?php
/**
 * @file
 * artesis_frontend.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function artesis_frontend_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-menu
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary menu',
    'description' => 'Secondary menu located above the login box.',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary menu');
  t('Secondary menu located above the login box.');


  return $menus;
}
