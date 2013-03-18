<?php
/**
 * @file
 * artesis_frontend_page_titles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function artesis_frontend_page_titles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_comment_child_reply';
  $strongarm->value = '[node:title]';
  $export['page_title_comment_child_reply'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_comment_reply';
  $strongarm->value = '[node:title]';
  $export['page_title_comment_reply'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_default';
  $strongarm->value = '[current-page:page-title] | [site:name]';
  $export['page_title_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_front';
  $strongarm->value = '[site:name]';
  $export['page_title_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_pager_pattern';
  $strongarm->value = '';
  $export['page_title_pager_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_campaign';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_ding_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_campaign_showfield';
  $strongarm->value = 0;
  $export['page_title_type_ding_campaign_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_event';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_ding_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_event_showfield';
  $strongarm->value = 0;
  $export['page_title_type_ding_event_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_library';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_ding_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_library_showfield';
  $strongarm->value = 0;
  $export['page_title_type_ding_library_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_news';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_ding_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_news_showfield';
  $strongarm->value = 0;
  $export['page_title_type_ding_news_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_page';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_ding_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ding_page_showfield';
  $strongarm->value = 0;
  $export['page_title_type_ding_page_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_mkdru';
  $strongarm->value = '[node:title] | [site:name]';
  $export['page_title_type_mkdru'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_mkdru_showfield';
  $strongarm->value = 0;
  $export['page_title_type_mkdru_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_user';
  $strongarm->value = '[user:name] | [site:name]';
  $export['page_title_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_user_showfield';
  $strongarm->value = 0;
  $export['page_title_user_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_category';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_category_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_category_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_dams_category';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_dams_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_dams_category_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_dams_category_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_ding_content_tags';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_ding_content_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_ding_content_tags_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_ding_content_tags_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_audience';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_eddb_audience'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_audience_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_eddb_audience_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_editorial_base';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_eddb_editorial_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_editorial_base_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_eddb_editorial_base_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_genre';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_eddb_genre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_genre_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_eddb_genre_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_material_type';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_eddb_material_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_material_type_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_eddb_material_type_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_type';
  $strongarm->value = '[term:name] | [site:name]';
  $export['page_title_vocab_eddb_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_vocab_eddb_type_showfield';
  $strongarm->value = 0;
  $export['page_title_vocab_eddb_type_showfield'] = $strongarm;

  return $export;
}
