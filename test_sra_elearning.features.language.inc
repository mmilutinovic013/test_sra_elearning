<?php
/**
 * @file
 * test_sra_elearning.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function test_sra_elearning_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  return $languages;
}
