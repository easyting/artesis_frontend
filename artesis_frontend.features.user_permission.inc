<?php
/**
 * @file
 * artesis_frontend.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function artesis_frontend_user_default_permissions() {
  $permissions = array();

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
    ),
    'module' => 'panels',
  );

  return $permissions;
}
