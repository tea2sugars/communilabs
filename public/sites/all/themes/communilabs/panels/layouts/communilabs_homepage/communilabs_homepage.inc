<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_homepage_panels_layouts() {
  $items['communilabs_homepage'] = array(
    'title' => t('Communilabs Homepage'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs_homepage.png',
    'theme' => 'communilabs_homepage',
	'admin css' => 'communilabs_homepage.css',
    'regions' => array(
      'header' => t('Header'),
      '1' => t('1'),
      '2' => t('2'),
      '3' => t('3'),
      '4' => t('4'),
      '5' => t('5'),
      '5' => t('5'),
      '6' => t('6'),
      '7' => t('7'),
      '8' => t('8'),
      '9' => t('9'),
      '10' => t('10'),
      '11' => t('11'),
      '12' => t('12'),
      '13' => t('13'),    
    ),
  );

  return $items;
}
