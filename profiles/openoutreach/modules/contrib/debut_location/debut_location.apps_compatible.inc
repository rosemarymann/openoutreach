<?php

/**
 * @file
 * Specify common apps components to be created by apps_compatible.
 */

/**
 * Implements hook_apps_compatible_info().
 */
function debut_location_apps_compatible_info() {
  return array(
    // Ensure a set of roles is created.
    'role' => array(
      'administrator' => array(
        'machine name' => 'administrator',
      ),
      'editor' => array(
        'machine name' => 'editor',
      ),
      'contributor' => array(
        'machine name' => 'contributor',
      ),
    ),
    // Ensure a set of field bases is created.
    'field_base' => array(
      'body' => array(
        'machine name' => 'body',
      ),
      'field_address' => array(
        'machine name' => 'field_address',
      ),
    ),
  );
}

