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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary menu',
    'description' => 'Secondary menu located above the login box.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Secondary menu');
  t('Secondary menu located above the login box.');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
