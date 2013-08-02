<?php
/**
 * @file
 * artesis_frontend_opengraph_metadata.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artesis_frontend_opengraph_metadata_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
