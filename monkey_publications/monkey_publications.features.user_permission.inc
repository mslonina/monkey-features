<?php
/**
 * @file
 * monkey_publications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function monkey_publications_user_default_permissions() {
  $permissions = array();

  // Exported permission: create publication content.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own publication content.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own publication content.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: enter publication revision log entry.
  $permissions['enter publication revision log entry'] = array(
    'name' => 'enter publication revision log entry',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override publication published option.
  $permissions['override publication published option'] = array(
    'name' => 'override publication published option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override publication revision option.
  $permissions['override publication revision option'] = array(
    'name' => 'override publication revision option',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
