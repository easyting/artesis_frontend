<?php
/**
 * @file
 * artesis_frontend_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function artesis_frontend_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  $overrides["views_view.taxonomy_term.display|feed|display_options|row_options"] = array(
    'item_length' => 'teaser',
  );

 return $overrides;
}
