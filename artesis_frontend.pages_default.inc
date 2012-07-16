<?php
/**
 * @file
 * artesis_frontend.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function artesis_frontend_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_news' => 'ding_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_8_4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'ding_node_page',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-2'] = $pane;
    $display->panels['left'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $display->content['new-5'] = $pane;
    $display->panels['left'][4] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $display->content['new-6'] = $pane;
    $display->panels['left'][5] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.single',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['right'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Artesis library (organic group)',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_library' => 'ding_library',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ding_library-ding_sidebar_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'See more',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['left'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Main menu',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['left'][1] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $display->content['new-8'] = $pane;
    $display->panels['right'][0] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'ding_library_header',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-9'] = $pane;
    $display->panels['right'][1] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_library-panel_pane_2';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'library-contact-info-teaser',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['right'][2] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'right';
    $pane->type = 'openlayers_map';
    $pane->subtype = 'ding_library_map';
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
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['right'][3] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'ding_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ctools_context_library_teaser',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
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
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['right'][4] = 'new-12';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Artesis event',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => NULL,
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG group from event',
        'keyword' => 'group',
        'name' => 'og_group_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Library',
        'keyword' => 'library',
        'name' => 'og_node_from_group',
        'context' => 'relationship_og_group_from_node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Multiple terms from node',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'context' => 'argument_entity_id:node_1',
        'vid' => array(
          3 => '3',
          4 => '4',
          1 => '1',
          2 => '2',
        ),
        'concatenator' => ',',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Category term',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_category-node-taxonomy_term',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ding_event' => 'ding_event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events
  %node:title',
    'panels_breadcrumbs_paths' => 'events
  <none>',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_8_4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'formatter_settings' => array(
        'image_style' => 'ding_node_page',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'formatter_settings' => array(
        'format_type' => 'day_only',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Calendar',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'content-event-day',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][3] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'formatter_settings' => array(
        'format_type' => 'month_only',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'content-event-month',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][4] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['left'][5] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
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
    $display->content['new-7'] = $pane;
    $display->panels['left'][6] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'left';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['left'][7] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['right'][0] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Event 1 [nid:10]',
          'nid' => '10',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Event 2 test title [nid:11]',
          'nid' => '11',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'columns' => 'full',
      'widget_type' => 'horizontal_accordeon',
      'item_template' => 'ding_nodelist.ding_event.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['right'][1] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'right';
    $pane->type = 'ding_item_list';
    $pane->subtype = 'ding_item_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item_query' => 'Dorthe',
      'item_count' => '5',
      'override_title' => 1,
      'override_title_text' => 'Title',
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
    $display->panels['right'][2] = 'new-11';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display; 
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_ting_search_panel_context_2';
  $handler->task = 'search';
  $handler->subtask = 'ting_search';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis search results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-15';
    $pane->panel = 'left';
    $pane->type = 'ding_facetbrowser';
    $pane->subtype = 'ding_facetbrowser';
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['left'][0] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
    $pane->panel = 'right';
    $pane->type = 'ting_search';
    $pane->subtype = 'ting_search';
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['right'][0] = 'new-16';
    $pane = new stdClass;
    $pane->pid = 'new-17';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'ting_search-sort-form';
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
    $display->content['new-17'] = $pane;
    $display->panels['right'][1] = 'new-17';
    $pane = new stdClass;
    $pane->pid = 'new-18';
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['right'][2] = 'new-18';
    $pane = new stdClass;
    $pane->pid = 'new-19';
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
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-19'] = $pane;
    $display->panels['right'][3] = 'new-19';
    $pane = new stdClass;
    $pane->pid = 'new-20';
    $pane->panel = 'right';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'ting_search',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
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
    $display->panels['right'][4] = 'new-20';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['search_ting_search_panel_context_2'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Artesis taxonomy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy vocabulary from Taxonomy term (on taxonomy_term_data.vocabulary)',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-21';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'parent_vocabulary_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => 'relationship_entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary_1.vid',
      ),
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
    $display->content['new-21'] = $pane;
    $display->panels['left'][0] = 'new-21';
    $pane = new stdClass;
    $pane->pid = 'new-22';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
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
    $display->content['new-22'] = $pane;
    $display->panels['right'][0] = 'new-22';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis taxonomy EB',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonomy vocabulary from Taxonomy term (on taxonomy_term_data.vocabulary)',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              4 => '4',
            ),
          ),
          'context' => 'relationship_entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_twocol_4_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:parent';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-23';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'parent_vocabulary_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'relationship_entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary_1.vid',
        1 => '',
      ),
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
    $display->content['new-23'] = $pane;
    $display->panels['left'][0] = 'new-23';
    $pane = new stdClass;
    $pane->pid = 'new-24';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '1',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'argument_term_1.tid',
        1 => '',
      ),
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
    $display->content['new-24'] = $pane;
    $display->panels['right'][0] = 'new-24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  $handler = new stdClass;
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
  $display = new panels_display;
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
    $pane = new stdClass;
    $pane->pid = 'new-25';
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
    $display->content['new-25'] = $pane;
    $display->panels['left'][0] = 'new-25';
    $pane = new stdClass;
    $pane->pid = 'new-26';
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
    $display->content['new-26'] = $pane;
    $display->panels['left'][1] = 'new-26';
    $pane = new stdClass;
    $pane->pid = 'new-27';
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
    $display->content['new-27'] = $pane;
    $display->panels['left'][2] = 'new-27';
    $pane = new stdClass;
    $pane->pid = 'new-28';
    $pane->panel = 'left';
    $pane->type = 'ding_item_list';
    $pane->subtype = 'ding_item_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item_query' => 'eva',
      'item_count' => '5',
      'override_title' => 1,
      'override_title_text' => 'Popular materials',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-28'] = $pane;
    $display->panels['left'][3] = 'new-28';
    $pane = new stdClass;
    $pane->pid = 'new-29';
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
    $display->content['new-29'] = $pane;
    $display->panels['right'][0] = 'new-29';
    $pane = new stdClass;
    $pane->pid = 'new-30';
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
    $display->content['new-30'] = $pane;
    $display->panels['right'][1] = 'new-30';
    $pane = new stdClass;
    $pane->pid = 'new-31';
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
    $display->content['new-31'] = $pane;
    $display->panels['right'][2] = 'new-31';
    $pane = new stdClass;
    $pane->pid = 'new-32';
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
    $display->content['new-32'] = $pane;
    $display->panels['right'][3] = 'new-32';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ting_collection_panel_context_4'] = $handler;

  $handler = new stdClass;
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
  $display = new panels_display;
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-33';
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
    $display->content['new-33'] = $pane;
    $display->panels['left'][0] = 'new-33';
    $pane = new stdClass;
    $pane->pid = 'new-34';
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
    $display->content['new-34'] = $pane;
    $display->panels['left'][1] = 'new-34';
    $pane = new stdClass;
    $pane->pid = 'new-35';
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
    $display->content['new-35'] = $pane;
    $display->panels['left'][2] = 'new-35';
    $pane = new stdClass;
    $pane->pid = 'new-36';
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
    $display->content['new-36'] = $pane;
    $display->panels['middle_right'][0] = 'new-36';
    $pane = new stdClass;
    $pane->pid = 'new-37';
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
    $display->content['new-37'] = $pane;
    $display->panels['middle_right'][1] = 'new-37';
    $pane = new stdClass;
    $pane->pid = 'new-38';
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
    $display->content['new-38'] = $pane;
    $display->panels['top_right_medium'][0] = 'new-38';
    $pane = new stdClass;
    $pane->pid = 'new-39';
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-39'] = $pane;
    $display->panels['top_right_medium'][1] = 'new-39';
    $pane = new stdClass;
    $pane->pid = 'new-40';
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-40'] = $pane;
    $display->panels['top_right_medium'][2] = 'new-40';
    $pane = new stdClass;
    $pane->pid = 'new-41';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'ting_details_single',
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
    $display->content['new-41'] = $pane;
    $display->panels['top_right_medium'][3] = 'new-41';
    $pane = new stdClass;
    $pane->pid = 'new-42';
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
    $display->content['new-42'] = $pane;
    $display->panels['top_right_medium'][4] = 'new-42';
    $pane = new stdClass;
    $pane->pid = 'new-43';
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
      'override_title' => 1,
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
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-43'] = $pane;
    $display->panels['top_right_medium'][5] = 'new-43';
    $pane = new stdClass;
    $pane->pid = 'new-44';
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
      'override_title' => 1,
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
    $pane->position = 6;
    $pane->locks = array();
    $display->content['new-44'] = $pane;
    $display->panels['top_right_medium'][6] = 'new-44';
    $pane = new stdClass;
    $pane->pid = 'new-45';
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
      'override_title' => 1,
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
    $display->content['new-45'] = $pane;
    $display->panels['top_right_medium'][7] = 'new-45';
    $pane = new stdClass;
    $pane->pid = 'new-46';
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
      'override_title' => 1,
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
    $display->content['new-46'] = $pane;
    $display->panels['top_right_medium'][8] = 'new-46';
    $pane = new stdClass;
    $pane->pid = 'new-47';
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
      'override_title' => 1,
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
    $display->content['new-47'] = $pane;
    $display->panels['top_right_medium'][9] = 'new-47';
    $pane = new stdClass;
    $pane->pid = 'new-48';
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
      'override_title' => 1,
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
    $display->content['new-48'] = $pane;
    $display->panels['top_right_medium'][10] = 'new-48';
    $pane = new stdClass;
    $pane->pid = 'new-49';
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
      'override_title' => 1,
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
    $display->content['new-49'] = $pane;
    $display->panels['top_right_medium'][11] = 'new-49';
    $pane = new stdClass;
    $pane->pid = 'new-50';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_classification';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
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
    $display->content['new-50'] = $pane;
    $display->panels['top_right_medium'][12] = 'new-50';
    $pane = new stdClass;
    $pane->pid = 'new-51';
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
      'override_title' => 1,
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
    $display->content['new-51'] = $pane;
    $display->panels['top_right_medium'][13] = 'new-51';
    $pane = new stdClass;
    $pane->pid = 'new-52';
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
      'override_title' => 1,
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
    $display->content['new-52'] = $pane;
    $display->panels['top_right_medium'][14] = 'new-52';
    $pane = new stdClass;
    $pane->pid = 'new-53';
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
      'override_title' => 1,
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
    $display->content['new-53'] = $pane;
    $display->panels['top_right_medium'][15] = 'new-53';
    $pane = new stdClass;
    $pane->pid = 'new-54';
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
      'override_title' => 1,
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
    $display->content['new-54'] = $pane;
    $display->panels['top_right_medium'][16] = 'new-54';
    $pane = new stdClass;
    $pane->pid = 'new-55';
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
      'override_title' => 1,
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
    $display->content['new-55'] = $pane;
    $display->panels['top_right_medium'][17] = 'new-55';
    $pane = new stdClass;
    $pane->pid = 'new-56';
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
      'override_title' => 1,
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
    $display->content['new-56'] = $pane;
    $display->panels['top_right_medium'][18] = 'new-56';
    $pane = new stdClass;
    $pane->pid = 'new-57';
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
      'override_title' => 1,
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
    $display->content['new-57'] = $pane;
    $display->panels['top_right_medium'][19] = 'new-57';
    $pane = new stdClass;
    $pane->pid = 'new-58';
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
      'override_title' => 1,
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
    $display->content['new-58'] = $pane;
    $display->panels['top_right_medium'][20] = 'new-58';
    $pane = new stdClass;
    $pane->pid = 'new-59';
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
      'override_title' => 1,
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
    $display->content['new-59'] = $pane;
    $display->panels['top_right_medium'][21] = 'new-59';
    $pane = new stdClass;
    $pane->pid = 'new-60';
    $pane->panel = 'top_right_medium';
    $pane->type = 'entity_field';
    $pane->subtype = 'ting_object:ting_details_uri';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'ting_details_single',
      'formatter_settings' => array(),
      'context' => 'argument_ting_object_id_17',
      'override_title' => 1,
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
    $display->content['new-60'] = $pane;
    $display->panels['top_right_medium'][22] = 'new-60';
    $pane = new stdClass;
    $pane->pid = 'new-61';
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
      'override_title' => 1,
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
    $display->content['new-61'] = $pane;
    $display->panels['top_right_medium'][23] = 'new-61';
    $pane = new stdClass;
    $pane->pid = 'new-62';
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
      'override_title' => 1,
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
    $display->content['new-62'] = $pane;
    $display->panels['top_right_medium'][24] = 'new-62';
    $pane = new stdClass;
    $pane->pid = 'new-63';
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
      'override_title' => 1,
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
    $display->content['new-63'] = $pane;
    $display->panels['top_right_medium'][25] = 'new-63';
    $pane = new stdClass;
    $pane->pid = 'new-64';
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
      'override_title' => 1,
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
    $display->content['new-64'] = $pane;
    $display->panels['top_right_medium'][26] = 'new-64';
    $pane = new stdClass;
    $pane->pid = 'new-65';
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
      'override_title' => 1,
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
    $display->content['new-65'] = $pane;
    $display->panels['top_right_medium'][27] = 'new-65';
    $pane = new stdClass;
    $pane->pid = 'new-66';
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
      'override_title' => 1,
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
    $display->content['new-66'] = $pane;
    $display->panels['top_right_medium'][28] = 'new-66';
    $pane = new stdClass;
    $pane->pid = 'new-67';
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
      'override_title' => 1,
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
    $display->content['new-67'] = $pane;
    $display->panels['top_right_medium'][29] = 'new-67';
    $pane = new stdClass;
    $pane->pid = 'new-68';
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
      'override_title' => 1,
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
    $display->content['new-68'] = $pane;
    $display->panels['top_right_medium'][30] = 'new-68';
    $pane = new stdClass;
    $pane->pid = 'new-69';
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
      'override_title' => 1,
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
    $display->content['new-69'] = $pane;
    $display->panels['top_right_medium'][31] = 'new-69';
    $pane = new stdClass;
    $pane->pid = 'new-70';
    $pane->panel = 'top_right_medium';
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
    $pane->position = 32;
    $pane->locks = array();
    $display->content['new-70'] = $pane;
    $display->panels['top_right_medium'][32] = 'new-70';
    $pane = new stdClass;
    $pane->pid = 'new-71';
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
    $display->content['new-71'] = $pane;
    $display->panels['top_right_small'][0] = 'new-71';
    $pane = new stdClass;
    $pane->pid = 'new-72';
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
    $display->content['new-72'] = $pane;
    $display->panels['top_right_small'][1] = 'new-72';
    $pane = new stdClass;
    $pane->pid = 'new-73';
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
    $display->content['new-73'] = $pane;
    $display->panels['top_right_small'][2] = 'new-73';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ting_object_panel_context_2'] = $handler;

  return $export;
}
