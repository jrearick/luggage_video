<?php
/**
 * @file
 * luggage_video.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function luggage_video_taxonomy_default_vocabularies() {
  return array(
    'video_category' => array(
      'name' => 'Video Category',
      'machine_name' => 'video_category',
      'description' => 'Categories for videos',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
