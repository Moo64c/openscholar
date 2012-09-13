<?php
/**
 * @file
 * os_blog.box.inc
 */

/**
 * Implements hook_default_box().
 */
function os_blog_default_box() {
  $export = array();

  $nid = 0;
  if (function_exists('_os_biocv_get_bio_node')) {
    $node = _os_biocv_get_bio_node();
    if ($node !== FALSE) {
      $nid = $node->nid;
    }
  }
  
  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'bio';
  $box->plugin_key = 'os_boxes_bio';
  $box->title = '';
  $box->description = 'Bio Teaser';
  $box->options = array(
    'nid' => $nid,
    'teaser' => 'teaser',
  );
  $export['os_biocv-bio'] = $box;

  return $export;
}
