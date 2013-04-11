<?php
/**
 * @file
 * artesis_frontend_halbib_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function artesis_frontend_halbib_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: ding_halbib_taxonomy.
  $styles['ding_halbib_taxonomy'] = array(
    'name' => 'ding_halbib_taxonomy',
    'effects' => array(
      3 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '180',
          'height' => '180',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
