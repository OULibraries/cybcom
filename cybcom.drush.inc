<?php

/**
 * @file
 */

/**
 * Implements hook_drush_command()
 */
function cybcom_drush_command() {
  $items['cybcom-mintxml'] = array(
    'description' => "Mint XML of node via CyberCommons",
    'arguments' => array(
      'nid' => 'The nid',
    ),
  );
  $items['cybcom-update-node'] = array(
    'description' => "Update status of publication via CyberCommons",
    'arguments' => array(
      'nid' => 'The nid',
    ),
  );
  $items['cybcom-update-all'] = array(
    'description' => "Update status of all pending task",
  );
  return $items;
}

/**
 * Send an content to cyber commons
 */
function drush_cybcom_mintxml($nid) {
  cybcom_mintxml($nid);
}

/**
 * Get data on task from cybercommons for node
 */
function drush_cybcom_update_node($nid) {
  cybcom_update_data_by_node($nid);
}


/**
 * Get data on task from cybercommons for node
 */
function drush_cybcom_update_all() {
  cybcom_update_all();
}
