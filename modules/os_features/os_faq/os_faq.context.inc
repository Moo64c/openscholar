<?php
// $Id$


/**
 * @file
 * os_faq.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os_faq_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  /* Edit this to true to make a default context disabled initially */
  $context->disabled = FALSE;
  $context->api_version = 3;
  $context->name = 'faq_faq';
  $context->description = 'FAQ Site Section';
  $context->tag = 'OS features';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'faq' => 'faq',
      ),
    ),
    'path' => array(
      'values' => array(
        'faq' => 'faq',
        'faq/*' => 'faq/*',
      ),
    ),
    'node' => array(
      'values' => array(
        'faq' => 'faq',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'os_faq' => 'os_faq',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-os_faq_sv_list' => array(
          'module' => 'boxes',
          'delta' => 'os_faq_sv_list',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'faq',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ Site Section');
  t('OS features');
  $export['faq_faq'] = $context;

  return $export;
}

