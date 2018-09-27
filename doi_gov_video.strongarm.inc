<?php
/**
 * @file
 * doi_gov_video.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function doi_gov_video_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = '0';
  $export['comment_anonymous_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = 1;
  $export['comment_default_mode_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';
  $export['comment_default_per_page_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = 1;
  $export['comment_form_location_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '1';
  $export['comment_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = 1;
  $export['comment_subject_field_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '1';
  $export['comment_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'list_item' => array(
        'custom_settings' => TRUE,
      ),
      'embedded_media' => array(
        'custom_settings' => TRUE,
      ),
      'full_featured_news' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'employee_news' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'sharethis' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'list_item' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'embedded_media' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'full_featured_news' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'employee_news' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'node_type' => array(
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'list_item' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'embedded_media' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full_featured_news' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'employee_news' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'node_title' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'list_item' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'embedded_media' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full_featured_news' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'employee_news' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'published_at' => array(
          'default' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'list_item' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'embedded_media' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full_featured_news' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'employee_news' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'doi_gov_social' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'list_item' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'embedded_media' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full_featured_news' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'employee_news' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'node_terms_type' => array(
          'list_item' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'embedded_media' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'full_featured_news' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'employee_news' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_video';
  $strongarm->value = array();
  $export['menu_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_video';
  $strongarm->value = '1';
  $export['node_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_video';
  $strongarm->value = 0;
  $export['node_submitted_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = '[node:section-path-alias]/[node:title]';
  $export['pathauto_node_video_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_video';
  $strongarm->value = 1;
  $export['workbench_access_node_type_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_video';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_video'] = $strongarm;

  return $export;
}
