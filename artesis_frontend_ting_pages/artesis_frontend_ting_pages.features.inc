<?php
/**
 * @file
 * artesis_frontend_ting_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artesis_frontend_ting_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_fields_alter().
 */
function artesis_frontend_ting_pages_field_default_fields_alter(&$data) {
  if (isset($data['ting_object-ting_object-ding_availability_holdings'])) {
    $data['ting_object-ting_object-ding_availability_holdings']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '48',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ding_periodical_issues'])) {
    $data['ting_object-ting_object-ding_periodical_issues']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_periodical',
      'settings' => array(),
      'type' => 'ding_periodical_issues_default',
      'weight' => '33',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_cover'])) {
    $data['ting_object-ting_object-ting_cover']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '47',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_age'])) {
    $data['ting_object-ting_object-ting_details_age']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '29',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_audience'])) {
    $data['ting_object-ting_object-ting_details_audience']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '27',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_audience_advice'])) {
    $data['ting_object-ting_object-ting_details_audience_advice']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '28',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'hidden',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '1',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_contributor'])) {
    $data['ting_object-ting_object-ting_details_contributor']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '15',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_description'])) {
    $data['ting_object-ting_object-ting_details_description']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '34',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_extent'])) {
    $data['ting_object-ting_object-ting_details_extent']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '24',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_format'])) {
    $data['ting_object-ting_object-ting_details_format']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '8',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_genre'])) {
    $data['ting_object-ting_object-ting_details_genre']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '13',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_isbn'])) {
    $data['ting_object-ting_object-ting_details_isbn']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '22',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_ispartof'])) {
    $data['ting_object-ting_object-ting_details_ispartof']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '9',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_language'])) {
    $data['ting_object-ting_object-ting_details_language']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '10',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_musician'])) {
    $data['ting_object-ting_object-ting_details_musician']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '16',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_pegi'])) {
    $data['ting_object-ting_object-ting_details_pegi']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '30',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_publisher'])) {
    $data['ting_object-ting_object-ting_details_publisher']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '25',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_referenced'])) {
    $data['ting_object-ting_object-ting_details_referenced']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '18',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_replaced_by'])) {
    $data['ting_object-ting_object-ting_details_replaced_by']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '21',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_replaces'])) {
    $data['ting_object-ting_object-ting_details_replaces']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '20',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_rights'])) {
    $data['ting_object-ting_object-ting_details_rights']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '26',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_series_description'])) {
    $data['ting_object-ting_object-ting_details_series_description']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_series_description_default',
      'weight' => '32',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_source'])) {
    $data['ting_object-ting_object-ting_details_source']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '19',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_spatial'])) {
    $data['ting_object-ting_object-ting_details_spatial']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '14',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_spoken'])) {
    $data['ting_object-ting_object-ting_details_spoken']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '11',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_subtitles'])) {
    $data['ting_object-ting_object-ting_details_subtitles']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '12',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_tracks'])) {
    $data['ting_object-ting_object-ting_details_tracks']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '17',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_type'])) {
    $data['ting_object-ting_object-ting_details_type']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '7',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_details_version'])) {
    $data['ting_object-ting_object-ting_details_version']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ding_ting_frontend',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => '23',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_series'])) {
    $data['ting_object-ting_object-ting_series']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'inline',
      'module' => 'ting',
      'settings' => array(),
      'type' => 'ting_series_default',
      'weight' => '31',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_title'])) {
    $data['ting_object-ting_object-ting_title']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'hidden',
      'module' => 'ting',
      'type' => 'ting_title_default',
      'weight' => '2',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_type'])) {
    $data['ting_object-ting_object-ting_type']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'hidden',
      'module' => 'ding_availability',
      'settings' => array(),
      'type' => 'ding_availability_type',
      'weight' => '0',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-voxb_review'])) {
    $data['ting_object-ting_object-voxb_review']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '45',
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-voxb_tags'])) {
    $data['ting_object-ting_object-voxb_tags']['field_instance']['display']['ting_object_fields'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => '46',
    ); /* WAS: '' */
  }
}
