<?php
/**
 * @file
 * cybcom_fields.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cybcom_fields_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cybcom|field_collection_item|field_cybcom_data|default';
  $field_group->group_name = 'group_cybcom';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_cybcom_data';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_cybcom_task',
      1 => 'field_cybcom_task_uri',
      2 => 'field_cybcom_status',
      3 => 'field_cybcom_result_uri',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cybcom field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cybcom|field_collection_item|field_cybcom_data|default'] = $field_group;

  return $field_groups;
}
