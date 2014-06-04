<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_network_panels_layouts() {
  $items['communilabs_network'] = array(
    'title' => t('Communilabs Network'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs_network.png',
    'theme' => 'communilabs_network',
	'admin css' => 'communilabs_network.css',
    'regions' => array(
      'header' => t('Header'),
      '1' => t('1 (2 column text)'),
      '2' => t('2 (2 column text)'),
      '3a' => t('3a'),
      '3b' => t('3b'),
      '4' => t('4'),
      '5' => t('5'),
      '5' => t('5'),
      '6' => t('6'),
      '7' => t('7'),
      '8' => t('8'),
      '9' => t('9'),
      '10' => t('10'),
      '11a' => t('11a'),
      '11b' => t('11b'),
      '11c' => t('11c'),
      '11d' => t('11d'),
    ),
  );

  return $items;
}
