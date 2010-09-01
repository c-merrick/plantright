<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function invasives_list_imagecache_default_presets() {
  $items = array(
    'thumb_150' => array(
      'presetname' => 'thumb_150',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '120',
          ),
        ),
      ),
    ),
    'thumb_60' => array(
      'presetname' => 'thumb_60',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function invasives_list_node_info() {
  $items = array(
    'species' => array(
      'name' => t('Species'),
      'module' => 'features',
      'description' => t('This is a plant species, and must be tagged as either "Invasive" or "non-invasive"'),
      'has_title' => '1',
      'title_label' => t('Latin Name'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function invasives_list_views_api() {
  return array(
    'api' => '2',
  );
}