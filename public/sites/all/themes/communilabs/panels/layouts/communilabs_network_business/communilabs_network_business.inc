<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_network_business_panels_layouts() {
  $items['communilabs_network_business'] = array(
    'title' => t('Communilabs network business'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs_network_business.png',
    'theme' => 'communilabs_network_business',
	'admin css' => 'communilabs_network_business.css',
    'regions' => array(
      'header' => t('Header'),
      '1' => t('1 (2 column text)'),
      '2a' => t('2a'),
      '2b' => t('2b'),
      '3' => t('3'),
      '4a' => t('4a'),
      '4b' => t('4b'),
      '4c' => t('4c'),
      '5' => t('5'),
    ),
  );

  return $items;
}
