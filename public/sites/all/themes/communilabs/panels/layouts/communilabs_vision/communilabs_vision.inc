<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_vision_panels_layouts() {
  $items['communilabs_vision'] = array(
    'title' => t('Communilabs vision'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs_vision.png',
    'theme' => 'communilabs_vision',
	'admin css' => 'communilabs_vision.css',
    'regions' => array(
      'header' => t('Header'),
      '1' => t('1 (2 column text)'),
      '2a' => t('2a'),
      '2b' => t('2b'),
      '3' => t('3'),
      '4a' => t('4a'),
      '4b' => t('4b'),
      '4c' => t('4c'),
      '4d' => t('4d'),
    ),
  );

  return $items;
}
