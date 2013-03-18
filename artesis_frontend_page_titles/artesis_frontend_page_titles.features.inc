<?php
/**
 * @file
 * artesis_frontend_page_titles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artesis_frontend_page_titles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
