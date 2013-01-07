<?php
/**
 * @file
 * monkey_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function monkey_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function monkey_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function monkey_events_node_info() {
  $items = array(
    'artist' => array(
      'name' => t('Artist'),
      'base' => 'node_content',
      'description' => t('Use this content type to add artists'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Before creating new event make sure your artist and place have proper profiles. If not, <a href="node/add/artist">add new artist</a>, <a href="node/add/place">add new place</a>.'),
    ),
    'venue' => array(
      'name' => t('Venue'),
      'base' => 'node_content',
      'description' => t('Use this content type to add place of an event'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
