<?php
/**
 * @file
 * artesis_frontend_ting_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function artesis_frontend_ting_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_materials|ting_object|ting_object|ting_object_fields';
  $field_group->group_name = 'group_materials';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'ting_object_fields';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'ting_series',
      1 => 'ding_periodical_issues',
      2 => 'ting_details_type',
      3 => 'ting_details_format',
      4 => 'ting_details_ispartof',
      5 => 'ting_details_language',
      6 => 'ting_details_spoken',
      7 => 'ting_details_subtitles',
      8 => 'ting_details_genre',
      9 => 'ting_details_spatial',
      10 => 'ting_details_contributor',
      11 => 'ting_details_musician',
      12 => 'ting_details_tracks',
      13 => 'ting_details_referenced',
      14 => 'ting_details_description',
      15 => 'ting_details_source',
      16 => 'ting_details_replaces',
      17 => 'ting_details_replaced_by',
      18 => 'ting_details_isbn',
      19 => 'ting_details_version',
      20 => 'ting_details_extent',
      21 => 'ting_details_publisher',
      22 => 'ting_details_rights',
      23 => 'ting_details_audience',
      24 => 'ting_details_age',
      25 => 'ting_details_pegi',
      26 => 'ting_details_audience_advice',
      27 => 'ting_details_series_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'materials',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_materials|ting_object|ting_object|ting_object_fields'] = $field_group;

  return $export;
}
