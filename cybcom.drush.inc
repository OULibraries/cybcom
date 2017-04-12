<?php

function cybcom_drush_command() {
  $items['cybcom-mintxml'] = array(
    'description' => "Mint XML of node via CyberCommons",
    'arguments' => array(
      'nid' => 'The nid',
    ),
  );
  return $items;
}


function drush_cybcom_mintxml ($nid) {
  drush_print_r( cybcom_mintxml($nid ));
}
