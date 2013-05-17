<?php
/**
 * @file
 * artesis_frontend_node_fieldgroups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function artesis_frontend_node_fieldgroups_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|ding_page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '11',
    'children' => array(
      0 => 'field_ding_body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_page_content|node|ding_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_images|node|ding_page|form';
  $field_group->group_name = 'group_page_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '13',
    'children' => array(
      0 => 'field_list_image',
      1 => 'field_main_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_page_images|node|ding_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_relations|node|ding_page|form';
  $field_group->group_name = 'group_page_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '12',
    'children' => array(
      0 => 'field_ding_material',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Relations',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_page_relations|node|ding_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_taxonomies|node|ding_page|form';
  $field_group->group_name = 'group_page_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '14',
    'children' => array(
      0 => 'ding_content_tags',
      1 => 'field_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Taxonomies',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_page_taxonomies|node|ding_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page|node|ding_page|form';
  $field_group->group_name = 'group_page';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page',
    'weight' => '0',
    'children' => array(
      0 => 'group_page_content',
      1 => 'group_page_images',
      2 => 'group_page_relations',
      3 => 'group_page_taxonomies',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_page|node|ding_page|form'] = $field_group;

  return $export;
}
