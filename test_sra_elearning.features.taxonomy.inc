<?php
/**
 * @file
 * test_sra_elearning.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function test_sra_elearning_taxonomy_default_vocabularies() {
  return array(
    'release_batch' => array(
      'name' => 'Release Batch',
      'machine_name' => 'release_batch',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'nodeorder',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
