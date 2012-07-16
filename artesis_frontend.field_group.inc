<?php
/**
 * @file
 * artesis_frontend.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function artesis_frontend_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection_list|ting_object|ting_object|collection_list';
  $field_group->group_name = 'group_collection_list';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'collection_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'collection list',
    'weight' => '1',
    'children' => array(
      0 => 'ting_title',
      1 => 'ting_type',
      2 => 'ting_series',
      3 => 'ting_author',
      4 => 'ting_subjects',
      5 => 'ding_entity_buttons',
      6 => 'ting_details_description',
      7 => 'ting_details_genre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'collection list',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_collection_list|ting_object|ting_object|collection_list'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collection_object|ting_object|ting_object|collection_primary';
  $field_group->group_name = 'group_collection_object';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'collection_primary';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'collection object',
    'weight' => '1',
    'children' => array(
      0 => 'ting_title',
      1 => 'ting_author',
      2 => 'ting_subjects',
      3 => 'ting_details_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'collection object',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_collection_object|ting_object|ting_object|collection_primary'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|ting_object|ting_object|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_top';
  $field_group->data = array(
    'label' => 'content',
    'weight' => '2',
    'children' => array(
      0 => 'ting_title',
      1 => 'ting_type',
      2 => 'ting_author',
      3 => 'ting_subjects',
      4 => 'ting_details_description',
      5 => 'group_material_details',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'content',
      'instance_settings' => array(
        'classes' => 'content-1',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_content|ting_object|ting_object|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|ting_object|ting_object|teaser';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content group',
    'weight' => '1',
    'children' => array(
      0 => 'ting_series',
      1 => 'ting_author',
      2 => 'ting_subjects',
      3 => 'ting_details_description',
      4 => 'ting_details_genre',
      5 => 'ting_details_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Content group',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|ting_object|ting_object|teaser'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top|ting_object|ting_object|default';
  $field_group->group_name = 'group_top';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'top',
    'weight' => '0',
    'children' => array(
      0 => 'ting_cover',
      1 => 'group_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'top',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top|ting_object|ting_object|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_list_content|ting_object|ting_object|user_list';
  $field_group->group_name = 'group_user_list_content';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'user_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User list content',
    'weight' => '1',
    'children' => array(
      0 => 'ting_title',
      1 => 'ting_type',
      2 => 'ting_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'User list content',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_list_content|ting_object|ting_object|user_list'] = $field_group;

  return $export;
}
