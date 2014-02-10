<?php

/**
 * @file
 * Ding Campaign CTools plugin file.
 */

$plugin = array(
  'title' => t('Ting object fields'),
  'description' => t('Display ting object metadata'),
  'single' => TRUE,
  'content_types' => array('ting_object_fields'),
  'render callback' => 'ting_object_fields_content_type_render',
  'required context' => new ctools_context_required(t('Ting object'), 'ting_object'),
  'category' => t('Ting'),
);

/**
 * Implements hook_content_type_render().
 */
function ting_object_fields_content_type_render($subtype, $conf, $panel_args, $context) {
  $ting_object = $context->data;

  $block = new stdClass();
  $block->content = ting_object_view($ting_object, 'ting_object_fields');

  return $block;
}
