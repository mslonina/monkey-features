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

  // Exported permission: access jcaption settings.
  $permissions['access jcaption settings'] = array(
    'name' => 'access jcaption settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'site editor',
    ),
    'module' => 'jcaption',
  );

  // Exported permission: administer oembed.
  $permissions['administer oembed'] = array(
    'name' => 'administer oembed',
    'roles' => array(
      0 => 'administrator',
      1 => 'site editor',
    ),
    'module' => 'oembedcore',
  );

  // Exported permission: create artist content.
  $permissions['create artist content'] = array(
    'name' => 'create artist content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create venue content.
  $permissions['create venue content'] = array(
    'name' => 'create venue content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own artist content.
  $permissions['delete own artist content'] = array(
    'name' => 'delete own artist content',
    'roles' => array(),
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

  // Exported permission: delete own venue content.
  $permissions['delete own venue content'] = array(
    'name' => 'delete own venue content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own artist content.
  $permissions['edit own artist content'] = array(
    'name' => 'edit own artist content',
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

  // Exported permission: edit own venue content.
  $permissions['edit own venue content'] = array(
    'name' => 'edit own venue content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: enter artist revision log entry.
  $permissions['enter artist revision log entry'] = array(
    'name' => 'enter artist revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: enter event revision log entry.
  $permissions['enter event revision log entry'] = array(
    'name' => 'enter event revision log entry',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter venue revision log entry.
  $permissions['enter venue revision log entry'] = array(
    'name' => 'enter venue revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override artist published option.
  $permissions['override artist published option'] = array(
    'name' => 'override artist published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override artist revision option.
  $permissions['override artist revision option'] = array(
    'name' => 'override artist revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override event promote to front page option.
  $permissions['override event promote to front page option'] = array(
    'name' => 'override event promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override event published option.
  $permissions['override event published option'] = array(
    'name' => 'override event published option',
    'roles' => array(),
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
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override venue published option.
  $permissions['override venue published option'] = array(
    'name' => 'override venue published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override venue revision option.
  $permissions['override venue revision option'] = array(
    'name' => 'override venue revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
