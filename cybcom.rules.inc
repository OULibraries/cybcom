<?php


/**
 *  hook_rules_action_info().
 */
function cybcom_rules_action_info() {
  return array(
    'cybcom_rules_action_mintxml' => array(
      'label' => t('Mint xml metadata via CyberCommons'),
      'group' => t('CyberCommons'),
      'parameter' => array(
        'id' => array('type' => 'unknown', 'label' => t('Identifier')),
      ),
    ),
  );
}


function cybcom_rules_action_mintxml ($id) {
  watchdog('cybcom', "Rule called for ". $id->nid );
  cybcom_mintxml($id->nid );
}