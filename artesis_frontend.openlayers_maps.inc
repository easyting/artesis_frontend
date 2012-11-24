<?php
/**
 * @file
 * artesis_frontend.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function artesis_frontend_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'geofield_formatter_map_artesis';
  $openlayers_maps->title = 'Geofield Formatter Map for Artesis';
  $openlayers_maps->description = 'A Map Used for Geofield Output';
  $openlayers_maps->data = array(
    'width' => '600px',
    'height' => '400px',
    'image_path' => 'profiles/artesis/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/artesis/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '11.392840591253, 55.785826598379',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'ding_library_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
    ),
    'layer_styles' => array(
      'openlayers_geojson_picture_this' => '0',
      'ding_library_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles_select' => array(
      'openlayers_geojson_picture_this' => '0',
      'ding_library_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_geojson_picture_this' => 0,
      'ding_library_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ding_library_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['geofield_formatter_map_artesis'] = $openlayers_maps;

  return $export;
}
