<?php
/**
 * @file
 * monkey_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function monkey_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: enter article revision log entry.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article authored by option.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article authored on option.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article promote to front page option.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article published option.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article revision option.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article sticky option.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
