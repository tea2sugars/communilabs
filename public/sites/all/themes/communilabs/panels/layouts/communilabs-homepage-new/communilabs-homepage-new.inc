<?php

/**
 * Implements hook_panels_layouts().
 */
function communilabs_communilabs_homepage_new_panels_layouts() {
  $items['communilabs-homepage-new'] = array(
    'title' => t('Communilabs Homepage New'),
    'category' => t('Communilabs: Brickwork'),
    'icon' => 'communilabs-homepage-new.png',
    'theme' => 'communilabs-homepage-new',
	'admin css' => 'communilabs-homepage-new.css',
    'regions' => array(
      'header' => t('Header'),
      'news-1' => t('News-1'),
      'news-2' => t('News-2'),
      'news-3' => t('News-3'),
      '1' => t('1'),
      '2' => t('2'),
      '3' => t('3'),
      '4' => t('4'),
      '5' => t('5'),
      '5' => t('5'),
      '6' => t('6'),
      '7' => t('7'),
      '8' => t('8'),
      '11' => t('11'),
      '12' => t('12'),
      '13' => t('13'),
      '14' => t('14'),     
    ),
  );

  return $items;
}
