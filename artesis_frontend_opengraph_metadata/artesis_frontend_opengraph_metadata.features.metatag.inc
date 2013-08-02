<?php
/**
 * @file
 * artesis_frontend_opengraph_metadata.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function artesis_frontend_opengraph_metadata_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ding_event.
  $config['node:ding_event'] = array(
    'instance' => 'node:ding_event',
    'config' => array(
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_library.
  $config['node:ding_library'] = array(
    'instance' => 'node:ding_library',
    'config' => array(
      'description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'abstract' => array(
        'value' => '[node:field_ding_body]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:street-address' => array(
        'value' => '[node:field-address:thoroughfare]',
      ),
      'og:locality' => array(
        'value' => '[node:field-address:locality]',
      ),
      'og:postal-code' => array(
        'value' => '[node:field-address:postal_code]',
      ),
      'og:country-name' => array(
        'value' => '[node:field-address:country]',
      ),
      'og:email' => array(
        'value' => '[node:field_email]',
      ),
      'og:phone_number' => array(
        'value' => '[node:field_phone]',
      ),
      'og:fax_number' => array(
        'value' => '[node:field_fax]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_news.
  $config['node:ding_news'] = array(
    'instance' => 'node:ding_news',
    'config' => array(
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_page.
  $config['node:ding_page'] = array(
    'instance' => 'node:ding_page',
    'config' => array(
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field_page_list_image]',
      ),
      'og:description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[node:field_page_list_image]',
      ),
    ),
  );

  return $config;
}
