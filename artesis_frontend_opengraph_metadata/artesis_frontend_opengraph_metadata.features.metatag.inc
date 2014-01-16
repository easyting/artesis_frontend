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

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[variable:site_name]',
      ),
      'description' => array(
        'value' => '[variable:site_slogan]',
      ),
      'abstract' => array(
        'value' => '[variable:site_slogan]',
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
      'og:site_name' => array(
        'value' => '[variable:site_name]',
      ),
      'og:title' => array(
        'value' => '[variable:site_name]',
      ),
      'og:description' => array(
        'value' => '[variable:site_slogan]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[variable:site_name]',
      ),
      'description' => array(
        'value' => '[variable:site_slogan]',
      ),
      'abstract' => array(
        'value' => '[variable:site_slogan]',
      ),
      'og:site_name' => array(
        'value' => '[variable:site_name]',
      ),
      'og:title' => array(
        'value' => '[variable:site_name]',
      ),
      'og:description' => array(
        'value' => '[variable:site_slogan]',
      ),
      'og:url' => array(
        'value' => '	[current-page:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_event.
  $config['node:ding_event'] = array(
    'instance' => 'node:ding_event',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
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
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_library.
  $config['node:ding_library'] = array(
    'instance' => 'node:ding_library',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
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
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
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
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
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
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:image' => array(
        'value' => '[node:field_list_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_page.
  $config['node:ding_page'] = array(
    'instance' => 'node:ding_page',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
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
        'value' => '[node:field_page_list_image]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:image' => array(
        'value' => '[node:field_page_list_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[current-page:page-title]',
      ),
      'og:title' => array(
        'value' => '[current-page:page-title]',
      ),
    ),
  );

  return $config;
}
