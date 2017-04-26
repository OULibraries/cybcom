<?php
/**
 * @file
 * cybcom_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cybcom_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
