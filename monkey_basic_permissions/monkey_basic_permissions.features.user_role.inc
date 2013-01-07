<?php
/**
 * @file
 * monkey_basic_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function monkey_basic_permissions_user_default_roles() {
  $roles = array();

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => '3',
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => '4',
  );

  return $roles;
}
