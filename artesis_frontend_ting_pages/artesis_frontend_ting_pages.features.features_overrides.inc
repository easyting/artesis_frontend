<?php
/**
 * @file
 * artesis_frontend_ting_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function artesis_frontend_ting_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.ting_object-ting_object-ding_availability_holdings.field_instance|display|ting_object_fields"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '19',
  );
  $overrides["field.ting_object-ting_object-ding_entity_buttons.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ding_entity',
    'settings' => array(),
    'type' => 'ding_entity_buttons_ajax',
    'weight' => '8',
  );
  $overrides["field.ting_object-ting_object-ding_periodical_issues.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_periodical',
    'settings' => array(),
    'type' => 'ding_periodical_issues_default',
    'weight' => '33',
  );
  $overrides["field.ting_object-ting_object-more_info.field_instance|display|ting_object_fields"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '10',
  );
  $overrides["field.ting_object-ting_object-ting_abstract.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'settings' => array(),
    'type' => 'ting_abstract_default',
    'weight' => '5',
  );
  $overrides["field.ting_object-ting_object-ting_author.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'settings' => array(),
    'type' => 'ting_author_default',
    'weight' => '4',
  );
  $overrides["field.ting_object-ting_object-ting_cover.field_instance|display|ting_object_fields"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => '18',
  );
  $overrides["field.ting_object-ting_object-ting_details_age.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '29',
  );
  $overrides["field.ting_object-ting_object-ting_details_audience.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '27',
  );
  $overrides["field.ting_object-ting_object-ting_details_audience_advice.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '28',
  );
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '1',
  );
  $overrides["field.ting_object-ting_object-ting_details_contributor.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '15',
  );
  $overrides["field.ting_object-ting_object-ting_details_description.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '34',
  );
  $overrides["field.ting_object-ting_object-ting_details_extent.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '24',
  );
  $overrides["field.ting_object-ting_object-ting_details_format.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '8',
  );
  $overrides["field.ting_object-ting_object-ting_details_genre.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '13',
  );
  $overrides["field.ting_object-ting_object-ting_details_isbn.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '22',
  );
  $overrides["field.ting_object-ting_object-ting_details_ispartof.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '9',
  );
  $overrides["field.ting_object-ting_object-ting_details_language.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '10',
  );
  $overrides["field.ting_object-ting_object-ting_details_musician.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '16',
  );
  $overrides["field.ting_object-ting_object-ting_details_pegi.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '30',
  );
  $overrides["field.ting_object-ting_object-ting_details_publisher.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '25',
  );
  $overrides["field.ting_object-ting_object-ting_details_referenced.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '18',
  );
  $overrides["field.ting_object-ting_object-ting_details_replaced_by.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '21',
  );
  $overrides["field.ting_object-ting_object-ting_details_replaces.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '20',
  );
  $overrides["field.ting_object-ting_object-ting_details_rights.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '26',
  );
  $overrides["field.ting_object-ting_object-ting_details_series_description.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_series_description_default',
    'weight' => '32',
  );
  $overrides["field.ting_object-ting_object-ting_details_source.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '19',
  );
  $overrides["field.ting_object-ting_object-ting_details_spatial.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '14',
  );
  $overrides["field.ting_object-ting_object-ting_details_spoken.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '11',
  );
  $overrides["field.ting_object-ting_object-ting_details_subjects.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_subject_search',
    'weight' => '6',
  );
  $overrides["field.ting_object-ting_object-ting_details_subtitles.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '12',
  );
  $overrides["field.ting_object-ting_object-ting_details_tracks.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '17',
  );
  $overrides["field.ting_object-ting_object-ting_details_type.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '7',
  );
  $overrides["field.ting_object-ting_object-ting_details_version.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ding_ting_frontend',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => '23',
  );
  $overrides["field.ting_object-ting_object-ting_series.field_instance|display|ting_object_fields"] = array(
    'label' => 'inline',
    'module' => 'ting',
    'settings' => array(),
    'type' => 'ting_series_default',
    'weight' => '31',
  );
  $overrides["field.ting_object-ting_object-ting_title.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ting',
    'type' => 'ting_title_default',
    'weight' => '2',
  );
  $overrides["field.ting_object-ting_object-ting_type.field_instance|display|ting_object_fields"] = array(
    'label' => 'hidden',
    'module' => 'ding_availability',
    'settings' => array(),
    'type' => 'ding_availability_type',
    'weight' => '0',
  );

 return $overrides;
}
