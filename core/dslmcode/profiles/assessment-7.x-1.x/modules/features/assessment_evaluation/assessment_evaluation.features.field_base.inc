<?php
/**
 * @file
 * assessment_evaluation.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function assessment_evaluation_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_score'
  $field_bases['field_score'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_score',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'cis_connector_access' => FALSE,
      'cis_connector_disable' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
