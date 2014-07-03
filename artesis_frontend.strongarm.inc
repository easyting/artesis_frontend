<?php
/**
 * @file
 * artesis_frontend.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function artesis_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day_month_year';
  $strongarm->value = 'd/m/Y';
  $export['date_format_day_month_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '100';
  $export['image_jpeg_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_types';
  $strongarm->value = array(
    0 => 'ding_event',
    1 => 'ding_news',
    2 => 'ding_page',
    3 => 'webform',
  );
  $export['webform_node_types'] = $strongarm;

  return $export;
}
