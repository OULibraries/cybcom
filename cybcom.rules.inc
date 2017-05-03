<?php

/**
 * @file
 */

/**
 * Hook_rules_action_info().
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
    'cybcom_rules_action_getresult' => array(
      'label' => t('Udpdate status of xml metadata via CyberCommons'),
      'group' => t('CyberCommons'),
      'parameter' => array(
        'id' => array('type' => 'unknown', 'label' => t('Identifier')),
      ),
    )
  );
}


/**
 *
 */
function cybcom_rules_action_mintxml($id) {
  cybcom_mintxml($id->nid);
}

function cybcom_rules_action_getresult($id) {
  cybcom_update_data_by_node($id->nid);
}
