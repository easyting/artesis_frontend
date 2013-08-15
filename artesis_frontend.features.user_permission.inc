<?php
/**
 * @file
 * artesis_frontend.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function artesis_frontend_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'overlay',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access similarterms content.
  $permissions['access similarterms content'] = array(
    'name' => 'access similarterms content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'similarterms',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer flags.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: administer google analytics.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer opening hours configuration.
  $permissions['administer opening hours configuration'] = array(
    'name' => 'administer opening hours configuration',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'opening_hours',
  );

  // Exported permission: administer openlayers.
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'openlayers_ui',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer relation types.
  $permissions['administer relation types'] = array(
    'name' => 'administer relation types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer similarterms content.
  $permissions['administer similarterms content'] = array(
    'name' => 'administer similarterms content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'similarterms',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer snapengage.
  $permissions['administer snapengage'] = array(
    'name' => 'administer snapengage',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'snapengage',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer tipsy.
  $permissions['administer tipsy'] = array(
    'name' => 'administer tipsy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'tipsy',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change user role.
  $permissions['change user role'] = array(
    'name' => 'change user role',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'artesis_frontend',
  );

  // Exported permission: configure nodelist.
  $permissions['configure nodelist'] = array(
    'name' => 'configure nodelist',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'ding_nodelist',
  );

  // Exported permission: create ding_campaign content.
  $permissions['create ding_campaign content'] = array(
    'name' => 'create ding_campaign content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create ding_library content.
  $permissions['create ding_library content'] = array(
    'name' => 'create ding_library content',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create ding_page content.
  $permissions['create ding_page content'] = array(
    'name' => 'create ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create relations.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any ding_campaign content.
  $permissions['delete any ding_campaign content'] = array(
    'name' => 'delete any ding_campaign content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ding_library content.
  $permissions['delete any ding_library content'] = array(
    'name' => 'delete any ding_library content',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ding_page content.
  $permissions['delete any ding_page content'] = array(
    'name' => 'delete any ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_campaign content.
  $permissions['delete own ding_campaign content'] = array(
    'name' => 'delete own ding_campaign content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_library content.
  $permissions['delete own ding_library content'] = array(
    'name' => 'delete own ding_library content',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ding_page content.
  $permissions['delete own ding_page content'] = array(
    'name' => 'delete own ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete relations.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any ding_campaign content.
  $permissions['edit any ding_campaign content'] = array(
    'name' => 'edit any ding_campaign content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ding_library content.
  $permissions['edit any ding_library content'] = array(
    'name' => 'edit any ding_library content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ding_page content.
  $permissions['edit any ding_page content'] = array(
    'name' => 'edit any ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit opening hours for content.
  $permissions['edit opening hours for content'] = array(
    'name' => 'edit opening hours for content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'opening_hours',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own ding_campaign content.
  $permissions['edit own ding_campaign content'] = array(
    'name' => 'edit own ding_campaign content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ding_library content.
  $permissions['edit own ding_library content'] = array(
    'name' => 'edit own ding_library content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ding_page content.
  $permissions['edit own ding_page content'] = array(
    'name' => 'edit own ding_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit relations.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: export relation types.
  $permissions['export relation types'] = array(
    'name' => 'export relation types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: opt-in or out of tracking.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'editor',
      4 => 'journalist',
      5 => 'local administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: translate admin strings.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate user-defined strings.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: use PHP for SnapEngage visibility.
  $permissions['use PHP for SnapEngage visibility'] = array(
    'name' => 'use PHP for SnapEngage visibility',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'snapengage',
  );

  // Exported permission: use PHP for tracking visibility.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'local administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view full ding_page premium content.
  $permissions['view full ding_page premium content'] = array(
    'name' => 'view full ding_page premium content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'nopremium',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'journalist',
      3 => 'local administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
