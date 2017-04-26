<?php

/**
 * @file
 */

/**
 *
 */
function cybcom_drush_command() {
  $items['cybcom-mintxml'] = array(
    'description' => "Mint XML of node via CyberCommons",
    'arguments' => array(
      'nid' => 'The nid',
    ),
  );
  $items['cybcom-getresult'] = array(
    'description' => "Update status of publication via CyberCommons",
    'arguments' => array(
      'nid' => 'The nid',
    ),
  );
  return $items;
}

/**
 *
 */
function drush_cybcom_mintxml($nid) {
  cybcom_mintxml($nid);
}

function drush_cybcom_getresult($nid) {
  cybcom_getresult($nid);
}
