<?php
/**
 * @file
 * artesis_frontend.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function artesis_frontend_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Default MasterKey search',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '124e3ac6-e30a-4754-89a0-54f41acef96a',
  'type' => 'mkdru',
  'language' => 'en',
  'created' => '1383911431',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd4d1354c-c0d4-4855-8a7d-738f1e1889c3',
  'revision_uid' => '1',
  'mkdru' => array(
    'nid' => '2',
    'vid' => '2',
    'settings' => '{"is_service_proxy":1,"autocomplete":{"use_autocomplete":0,"alt_url":""},"mergekey":"","rank":"","disable_ranking":0,"facets":{"source":{"displayName":"Source","pz2Name":"xtargets","multiLimit":0,"max":"10","orderWeight":"1","remove":"Remove source facet"},"subject":{"displayName":"Subject","pz2Name":"subject","multiLimit":1,"max":"10","orderWeight":"2","remove":"Remove subject facet"},"author":{"displayName":"Author","pz2Name":"author","multiLimit":0,"max":"10","orderWeight":"3","remove":"Remove author facet"}},"sp_server_auth":1,"pz2_path":"\\/service-proxy\\/"}',
    'pz2_path' => '/service-proxy/',
    'sp_user' => 'deichmanske',
    'sp_pass' => 'bibliotek_090313',
    'sp_server_auth' => '1',
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'publish_on' => '0',
  'unpublish_on' => '0',
  'schedule_enable' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2013-11-08 13:50:31 +0200',
);
  return $nodes;
}
