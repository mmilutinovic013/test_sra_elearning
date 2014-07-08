<?php
/**
 * @file
 * test_sra_elearning.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function test_sra_elearning_user_default_roles() {
  $roles = array();

  // Exported role: Team DCMTA.
  $roles['Team DCMTA'] = array(
    'name' => 'Team DCMTA',
    'weight' => 3,
  );

  // Exported role: Team FBI.
  $roles['Team FBI'] = array(
    'name' => 'Team FBI',
    'weight' => 4,
  );

  // Exported role: Team MPDC.
  $roles['Team MPDC'] = array(
    'name' => 'Team MPDC',
    'weight' => 5,
  );

  // Exported role: Team NTSB.
  $roles['Team NTSB'] = array(
    'name' => 'Team NTSB',
    'weight' => 6,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: instructor.
  $roles['instructor'] = array(
    'name' => 'instructor',
    'weight' => 7,
  );

  return $roles;
}
