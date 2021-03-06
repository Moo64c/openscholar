<?php
/**
 * @file
 * vsite.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vsite_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: create department content.
  $permissions['create department content'] = array(
    'name' => 'create department content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );


  // Exported permission: create vsite content on behalf.
  // This covers all group nodes.
  $permissions['create vsite content on behalf'] = array(
    'name' => 'create vsite content on behalf',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vsite',
  );

  // Exported permission: delete any department content.
  $permissions['delete any department content'] = array(
    'name' => 'delete any department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own department content.
  $permissions['delete own department content'] = array(
    'name' => 'delete own department content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any department content.
  $permissions['edit any department content'] = array(
    'name' => 'edit any department content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own department content.
  $permissions['edit own department content'] = array(
    'name' => 'edit own department content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );
  // Exported permission: create personal content.
  $permissions['create personal content'] = array(
    'name' => 'create personal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any personal content.
  $permissions['delete any personal content'] = array(
    'name' => 'delete any personal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own personal content.
  $permissions['delete own personal content'] = array(
    'name' => 'delete own personal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any personal content.
  $permissions['edit any personal content'] = array(
    'name' => 'edit any personal content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own personal content.
  $permissions['edit own personal content'] = array(
    'name' => 'edit own personal content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );
  // Exported permission: create project content.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );


  // Exported permission: delete any project content.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own project content.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any project content.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own project content.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: manage group space.
  $permissions['manage group space'] = array(
    'name' => 'manage group space',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
      2 => 'vsite admin',
    ),
    'module' => 'spaces_og',
  );

  // Exported permission: view users outside groups.
  $permissions['view users outside groups'] = array(
    'name' => 'view users outside groups',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'spaces_og',
  );

  return $permissions;
}
