<?php
/**
 * @file
 * artesis_frontend_overrides.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function artesis_frontend_overrides_views_default_views_alter(&$data) {
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['feed']->display_options['row_options'] = array(
      'item_length' => 'teaser',
    ); /* WAS: '' */
  }
}
