<?php
/**
 * @file
 * doi_gov_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function doi_gov_video_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured|node|video|form';
  $field_group->group_name = 'group_featured';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_featured',
      1 => 'field_feature_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_featured|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|video|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '13',
    'children' => array(
      0 => 'field_bureaus',
      1 => 'field_locations',
      2 => 'field_offices',
      3 => 'field_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-taxonomy field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_taxonomy|node|video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Settings');
  t('Taxonomy');

  return $field_groups;
}
