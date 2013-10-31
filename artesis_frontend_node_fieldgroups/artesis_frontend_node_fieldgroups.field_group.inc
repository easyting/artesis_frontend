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
  $field_group->identifier = 'group_event_content|node|ding_event|form';
  $field_group->group_name = 'group_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_ding_body',
      1 => 'field_event_date',
      2 => 'field_event_fee',
      3 => 'title',
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
  $export['group_event_content|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_images|node|ding_event|form';
  $field_group->group_name = 'group_event_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
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
  $export['group_event_images|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_media|node|ding_event|form';
  $field_group->group_name = 'group_event_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Media related content',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media related content',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_event_media|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_publish|node|ding_event|form';
  $field_group->group_name = 'group_event_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Scheduled publishing settings',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Scheduled publishing settings',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_event_publish|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_relations|node|ding_event|form';
  $field_group->group_name = 'group_event_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '2',
    'children' => array(
      0 => 'group_audience',
      1 => 'field_address',
      2 => 'field_materials',
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
  $export['group_event_relations|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_taxonomies|node|ding_event|form';
  $field_group->group_name = 'group_event_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '4',
    'children' => array(
      0 => 'ding_content_tags',
      1 => 'field_category',
      2 => 'field_audience',
      3 => 'field_genre',
      4 => 'field_material_type',
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
  $export['group_event_taxonomies|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|ding_event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '0',
    'children' => array(
      0 => 'group_event_content',
      1 => 'group_event_images',
      2 => 'group_event_taxonomies',
      3 => 'group_event_relations',
      4 => 'group_event_publish',
      5 => 'group_event_media',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_event|node|ding_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_content|node|ding_news|form';
  $field_group->group_name = 'group_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_ding_body',
      1 => 'field_editorial_base_n',
      2 => 'field_type',
      3 => 'title',
      4 => 'path',
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
  $export['group_news_content|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_images|node|ding_news|form';
  $field_group->group_name = 'group_news_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
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
  $export['group_news_images|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_media|node|ding_news|form';
  $field_group->group_name = 'group_news_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Media related content',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media related content',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_news_media|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_publish|node|ding_news|form';
  $field_group->group_name = 'group_news_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Scheduled publishing settings',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Scheduled publishing settings',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_news_publish|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_relations|node|ding_news|form';
  $field_group->group_name = 'group_news_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '3',
    'children' => array(
      0 => 'field_materials',
      1 => 'group_audience',
      2 => 'field_ding_item_list',
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
  $export['group_news_relations|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_taxonomies|node|ding_news|form';
  $field_group->group_name = 'group_news_taxonomies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news';
  $field_group->data = array(
    'label' => 'Taxonomies',
    'weight' => '4',
    'children' => array(
      0 => 'ding_content_tags',
      1 => 'field_category',
      2 => 'field_audience_n',
      3 => 'field_genre_n',
      4 => 'field_material_type_n',
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
  $export['group_news_taxonomies|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news|node|ding_news|form';
  $field_group->group_name = 'group_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '0',
    'children' => array(
      0 => 'group_news_content',
      1 => 'group_news_images',
      2 => 'group_news_media',
      3 => 'group_news_publish',
      4 => 'group_news_relations',
      5 => 'group_news_taxonomies',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_news|node|ding_news|form'] = $field_group;

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
      0 => 'field_page_list_image',
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
