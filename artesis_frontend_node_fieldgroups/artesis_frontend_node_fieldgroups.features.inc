<?php
/**
 * @file
 * artesis_frontend_node_fieldgroups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artesis_frontend_node_fieldgroups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
