<?php
/**
 * @file
 * artesis_frontend_opengraph_metadata.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function artesis_frontend_opengraph_metadata_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facebookshare_size';
  $strongarm->value = 'button_count';
  $export['facebookshare_size'] = $strongarm;

  return $export;
}
