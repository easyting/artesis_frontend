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
        'value' => '',
      ),
      'generator' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_event.
  $config['node:ding_event'] = array(
    'instance' => 'node:ding_event',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field_ding_body]',
      ),
      'keywords' => array(
        'value' => '',
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
      'news_keywords' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '[node:title]',
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
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
      ),
      'og:country-name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_library.
  $config['node:ding_library'] = array(
    'instance' => 'node:ding_library',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'abstract' => array(
        'value' => '[node:field_ding_body]',
      ),
      'keywords' => array(
        'value' => '',
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
      'news_keywords' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '[node:title]',
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
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '[node:field-address:thoroughfare]',
      ),
      'og:locality' => array(
        'value' => '[node:field-address:locality]',
      ),
      'og:region' => array(
        'value' => '',
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
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_news.
  $config['node:ding_news'] = array(
    'instance' => 'node:ding_news',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field_ding_body]',
      ),
      'keywords' => array(
        'value' => '',
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
      'news_keywords' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[node:field_list_image]',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '[node:title]',
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
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
      ),
      'og:country-name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:ding_page.
  $config['node:ding_page'] = array(
    'instance' => 'node:ding_page',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '[node:field-ding-body:summary]',
      ),
      'abstract' => array(
        'value' => '[node:field_ding_body]',
      ),
      'keywords' => array(
        'value' => '',
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
      'news_keywords' => array(
        'value' => '',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '[node:field_page_list_image]',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_body]',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '[node:field_page_list_image]',
      ),
      'og:url' => array(
        'value' => '[current-page:url]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
      ),
      'og:country-name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'description' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
