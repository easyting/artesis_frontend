<?php
/**
 * @file
 * artesis_frontend_ting_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function artesis_frontend_ting_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ting_collection_panel_context_4';
  $handler->task = 'ting_collection';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top_right_small' => NULL,
      'top_right_medium' => NULL,
      'middle_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_collection_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_object_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['left'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_relation_anchors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['left'][2] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][3] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_collection:ting_primary_object';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ting_primary_object_default',
      'formatter_settings' => array(
        'view_mode' => 'collection_primary',
      ),
      'context' => 'argument_ting_collection_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['right'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ding_toggle_format-toggle';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['right'][1] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ding_availability-legend';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['right'][2] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'ting_collection';
    $pane->subtype = 'ting_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_ting_collection_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['right'][3] = 'new-8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ting_collection_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ting_object_panel_context_2';
  $handler->task = 'ting_object';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis object',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_landing_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top_right_small' => NULL,
      'top_right_medium' => NULL,
      'middle_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%ting_object:title_full';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_collection_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['left'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_object_types';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['left'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ting-ting_relation_anchors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['left'][2] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'left';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['left'][3] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'middle_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_relations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_relations_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['middle_right'][0] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_reference_reverse';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_reference_reverse_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['middle_right'][1] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'middle_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_infomedia';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_infomedia_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['middle_right'][2] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ding_availability_type',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['top_right_medium'][0] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_classification';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['top_right_medium'][1] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_title_default',
      'formatter_settings' => array(
        'link_type' => 'none',
      ),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['top_right_medium'][2] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:voxb_rating';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'voxb_rating_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-19'] = $pane;
    $display->panels['top_right_medium'][3] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_author_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-20'] = $pane;
    $display->panels['top_right_medium'][4] = 'new-20';
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_abstract';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ting_abstract_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-21'] = $pane;
    $display->panels['top_right_medium'][5] = 'new-21';
    $pane = new stdClass();
    $pane->pid = 'new-22';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_subjects';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'ting_subjects_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-22'] = $pane;
    $display->panels['top_right_medium'][6] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-23'] = $pane;
    $display->panels['top_right_medium'][7] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_format';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $display->content['new-24'] = $pane;
    $display->panels['top_right_medium'][8] = 'new-24';
    $pane = new stdClass();
    $pane->pid = 'new-25';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_ispartof';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $display->content['new-25'] = $pane;
    $display->panels['top_right_medium'][9] = 'new-25';
    $pane = new stdClass();
    $pane->pid = 'new-26';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $display->content['new-26'] = $pane;
    $display->panels['top_right_medium'][10] = 'new-26';
    $pane = new stdClass();
    $pane->pid = 'new-27';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_spoken';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $display->content['new-27'] = $pane;
    $display->panels['top_right_medium'][11] = 'new-27';
    $pane = new stdClass();
    $pane->pid = 'new-28';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_subtitles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $display->content['new-28'] = $pane;
    $display->panels['top_right_medium'][12] = 'new-28';
    $pane = new stdClass();
    $pane->pid = 'new-29';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_genre';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $display->content['new-29'] = $pane;
    $display->panels['top_right_medium'][13] = 'new-29';
    $pane = new stdClass();
    $pane->pid = 'new-30';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_spatial';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $display->content['new-30'] = $pane;
    $display->panels['top_right_medium'][14] = 'new-30';
    $pane = new stdClass();
    $pane->pid = 'new-31';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_contributor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $display->content['new-31'] = $pane;
    $display->panels['top_right_medium'][15] = 'new-31';
    $pane = new stdClass();
    $pane->pid = 'new-32';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_musician';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $display->content['new-32'] = $pane;
    $display->panels['top_right_medium'][16] = 'new-32';
    $pane = new stdClass();
    $pane->pid = 'new-33';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_tracks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $display->content['new-33'] = $pane;
    $display->panels['top_right_medium'][17] = 'new-33';
    $pane = new stdClass();
    $pane->pid = 'new-34';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_referenced';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $display->content['new-34'] = $pane;
    $display->panels['top_right_medium'][18] = 'new-34';
    $pane = new stdClass();
    $pane->pid = 'new-35';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_source';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 19;
    $pane->locks = array();
    $display->content['new-35'] = $pane;
    $display->panels['top_right_medium'][19] = 'new-35';
    $pane = new stdClass();
    $pane->pid = 'new-36';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_replaces';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 20;
    $pane->locks = array();
    $display->content['new-36'] = $pane;
    $display->panels['top_right_medium'][20] = 'new-36';
    $pane = new stdClass();
    $pane->pid = 'new-37';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_replaced_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 21;
    $pane->locks = array();
    $display->content['new-37'] = $pane;
    $display->panels['top_right_medium'][21] = 'new-37';
    $pane = new stdClass();
    $pane->pid = 'new-38';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_isbn';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 22;
    $pane->locks = array();
    $display->content['new-38'] = $pane;
    $display->panels['top_right_medium'][22] = 'new-38';
    $pane = new stdClass();
    $pane->pid = 'new-39';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_version';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 23;
    $pane->locks = array();
    $display->content['new-39'] = $pane;
    $display->panels['top_right_medium'][23] = 'new-39';
    $pane = new stdClass();
    $pane->pid = 'new-40';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_extent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 24;
    $pane->locks = array();
    $display->content['new-40'] = $pane;
    $display->panels['top_right_medium'][24] = 'new-40';
    $pane = new stdClass();
    $pane->pid = 'new-41';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_publisher';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 25;
    $pane->locks = array();
    $display->content['new-41'] = $pane;
    $display->panels['top_right_medium'][25] = 'new-41';
    $pane = new stdClass();
    $pane->pid = 'new-42';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_rights';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 26;
    $pane->locks = array();
    $display->content['new-42'] = $pane;
    $display->panels['top_right_medium'][26] = 'new-42';
    $pane = new stdClass();
    $pane->pid = 'new-43';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 27;
    $pane->locks = array();
    $display->content['new-43'] = $pane;
    $display->panels['top_right_medium'][27] = 'new-43';
    $pane = new stdClass();
    $pane->pid = 'new-44';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_audience_advice';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 28;
    $pane->locks = array();
    $display->content['new-44'] = $pane;
    $display->panels['top_right_medium'][28] = 'new-44';
    $pane = new stdClass();
    $pane->pid = 'new-45';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_age';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 29;
    $pane->locks = array();
    $display->content['new-45'] = $pane;
    $display->panels['top_right_medium'][29] = 'new-45';
    $pane = new stdClass();
    $pane->pid = 'new-46';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_pegi';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 30;
    $pane->locks = array();
    $display->content['new-46'] = $pane;
    $display->panels['top_right_medium'][30] = 'new-46';
    $pane = new stdClass();
    $pane->pid = 'new-47';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_series';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_series_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 31;
    $pane->locks = array();
    $display->content['new-47'] = $pane;
    $display->panels['top_right_medium'][31] = 'new-47';
    $pane = new stdClass();
    $pane->pid = 'new-48';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_series_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_series_description_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 32;
    $pane->locks = array();
    $display->content['new-48'] = $pane;
    $display->panels['top_right_medium'][32] = 'new-48';
    $pane = new stdClass();
    $pane->pid = 'new-49';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ding_periodical_issues';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ding_periodical_issues_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'materials',
    );
    $pane->extras = array();
    $pane->position = 33;
    $pane->locks = array();
    $display->content['new-49'] = $pane;
    $display->panels['top_right_medium'][33] = 'new-49';
    $pane = new stdClass();
    $pane->pid = 'new-50';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ding_entity_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ding_entity_buttons_ajax',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 34;
    $pane->locks = array();
    $display->content['new-50'] = $pane;
    $display->panels['top_right_medium'][34] = 'new-50';
    $pane = new stdClass();
    $pane->pid = 'new-51';
    $pane->panel = 'top_right_small';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_cover';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ting_cover_default',
      'formatter_settings' => array(
        'image_style' => 'large',
      ),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-51'] = $pane;
    $display->panels['top_right_small'][0] = 'new-51';
    $pane = new stdClass();
    $pane->pid = 'new-52';
    $pane->panel = 'top_right_small';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ding_availability_holdings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ding_availability_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-52'] = $pane;
    $display->panels['top_right_small'][1] = 'new-52';
    $pane = new stdClass();
    $pane->pid = 'new-53';
    $pane->panel = 'top_right_small';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ding_entity_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'ding_entity_buttons_default',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-53'] = $pane;
    $display->panels['top_right_small'][2] = 'new-53';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ting_object_panel_context_2'] = $handler;

  return $export;
}
