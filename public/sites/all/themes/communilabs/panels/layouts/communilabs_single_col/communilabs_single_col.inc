<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_single_col_panels_layouts() {
  $items['communilabs_single_col'] = array(
    'title' => t('Communilabs single col.'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs_single_col.png',
    'theme' => 'communilabs_single_col',
	'admin css' => 'communilabs_single_col.css',
    'regions' => array(
      'header' => t('Header'),
      '1' => t('1 (2 column text)'),
      '2' => t('2 (2 column text)'),
      '2a' => t('2a'),
      '3' => t('3'),
      '4' => t('4'),
      '5' => t('5'),
	  '6' => t('6'),
    ),
  );

  return $items;
}
