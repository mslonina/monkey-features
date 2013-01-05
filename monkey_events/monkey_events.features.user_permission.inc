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
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: enter event revision log entry.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override event promote to front page option.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override event published option.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override event revision option.
  $permissions['override event revision option'] = array(
    'name' => 'override event revision option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override event sticky option.
  $permissions['override event sticky option'] = array(
    'name' => 'override event sticky option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
