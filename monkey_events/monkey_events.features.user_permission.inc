<?php
/**
 * @file
 * monkey_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function monkey_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: override event published option.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
