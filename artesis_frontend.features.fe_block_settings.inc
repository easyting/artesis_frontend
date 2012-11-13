<?php
/**
 * @file
 * artesis_frontend.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function artesis_frontend_default_fe_block_settings() {
  $export = array();

  // alpha
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'alpha',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'alpha',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['alpha'] = $theme;

  // alpha_basetheme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'alpha_basetheme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'alpha_basetheme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'alpha_basetheme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'alpha_basetheme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['alpha_basetheme'] = $theme;

  // allebib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'allebib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'allebib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'allebib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'allebib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['allebib_theme'] = $theme;

  // tarnbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'tarnbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'tarnbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'tarnbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'tarnbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['tarnbib_theme'] = $theme;

  // slagbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'slagbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'slagbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'slagbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'slagbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['slagbib_theme'] = $theme;


  // varbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'varbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'varbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'varbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'varbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['varbib_theme'] = $theme;


  // ringbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'ringbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'ringbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'ringbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'ringbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['ringbib_theme'] = $theme;


  // faxbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'faxbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'faxbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'faxbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'faxbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['faxbib_theme'] = $theme;


  // herbib_theme
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'herbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '5',
    'region' => 'footer_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '-23',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'herbib_theme',
    'status' => 0,
    'weight' => '1',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'postscript_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '2',
    'region' => 'postscript_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '3',
    'region' => 'postscript_third',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '4',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '1',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '-24',
    'region' => 'user_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '-22',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'herbib_theme',
    'status' => '1',
    'weight' => '-25',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'herbib_theme',
    'status' => 0,
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['herbib_theme'] = $theme;




  // bartik
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['bartik'] = $theme;

  // omega
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['omega'] = $theme;

  // omega
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'omega',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['omega'] = $theme;

  // seven
  $theme = array();

  $theme['ding_library-ding_menu'] = array(
    'module' => 'ding_library',
    'delta' => 'ding_menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
  );

  $theme['ding_library-library_address'] = array(
    'module' => 'ding_library',
    'delta' => 'library_address',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
  );

  $theme['ding_user_frontend-ding-user-loan-number'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-user-loan-number',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding loan, reservation, and debt count',
    'cache' => -1,
  );

  $theme['ding_user_frontend-ding-username'] = array(
    'module' => 'ding_user_frontend',
    'delta' => 'ding-username',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Ding user name',
    'cache' => -1,
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-1'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-2'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-3'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-footer-menu-4'] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-menu-4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['menu-menu-secondary-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-secondary-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main-menu'] = array(
    'module' => 'system',
    'delta' => 'main-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-user-menu'] = array(
    'module' => 'system',
    'delta' => 'user-menu',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User menu',
    'cache' => -1,
  );

  $theme['user-login'] = array(
    'module' => 'user',
    'delta' => 'login',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'User login',
    'cache' => -1,
  );

  $theme['workbench-block'] = array(
    'module' => 'workbench',
    'delta' => 'block',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-99',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
