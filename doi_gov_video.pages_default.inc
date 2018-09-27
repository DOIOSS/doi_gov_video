<?php
/**
 * @file
 * doi_gov_video.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function doi_gov_video_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'main' => NULL,
      'bottom' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f165a34b-3969-4050-b331-04c3363fe62d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a9b648f2-a88c-407c-91f8-0d21cdb9f07a';
  $pane->panel = 'main';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a9b648f2-a88c-407c-91f8-0d21cdb9f07a';
  $display->content['new-a9b648f2-a88c-407c-91f8-0d21cdb9f07a'] = $pane;
  $display->panels['main'][0] = 'new-a9b648f2-a88c-407c-91f8-0d21cdb9f07a';
  $pane = new stdClass();
  $pane->pid = 'new-184106b1-e2d8-4cd7-b813-6eea4eb34ed2';
  $pane->panel = 'main';
  $pane->type = 'node_terms';
  $pane->subtype = 'node_terms';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'vids' => array(
      4 => '4',
      5 => '5',
      6 => '6',
      10 => '10',
      11 => 0,
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
    ),
    'term_format' => 'inline-delimited',
    'link' => 0,
    'term_delimiter' => '&nbsp;&nbsp;',
    'term_limit' => '5',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '184106b1-e2d8-4cd7-b813-6eea4eb34ed2';
  $display->content['new-184106b1-e2d8-4cd7-b813-6eea4eb34ed2'] = $pane;
  $display->panels['main'][1] = 'new-184106b1-e2d8-4cd7-b813-6eea4eb34ed2';
  $pane = new stdClass();
  $pane->pid = 'new-7357d11d-ec08-402c-bce9-73844a8ba9c0';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_file';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'videojs',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'check_support' => 0,
      'autoplay' => 0,
      'loop' => 0,
      'preload' => 'metadata',
      'width' => '',
      'height' => '',
      'hidecontrols' => 0,
      'defaulttrack' => 'en',
      'posterimage_field' => 'field_thumbnail_image',
      'posterimage_style' => '',
      'tracks_field' => 'field_video_caption_file',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7357d11d-ec08-402c-bce9-73844a8ba9c0';
  $display->content['new-7357d11d-ec08-402c-bce9-73844a8ba9c0'] = $pane;
  $display->panels['main'][2] = 'new-7357d11d-ec08-402c-bce9-73844a8ba9c0';
  $pane = new stdClass();
  $pane->pid = 'new-b2b07be4-c036-4076-9171-f741601f571b';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_video_transcript';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b2b07be4-c036-4076-9171-f741601f571b';
  $display->content['new-b2b07be4-c036-4076-9171-f741601f571b'] = $pane;
  $display->panels['main'][3] = 'new-b2b07be4-c036-4076-9171-f741601f571b';
  $pane = new stdClass();
  $pane->pid = 'new-eb9eee95-59e3-49b4-96a0-b5723b8071b4';
  $pane->panel = 'main';
  $pane->type = 'node_publication_info';
  $pane->subtype = 'node_publication_info';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'short',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'eb9eee95-59e3-49b4-96a0-b5723b8071b4';
  $display->content['new-eb9eee95-59e3-49b4-96a0-b5723b8071b4'] = $pane;
  $display->panels['main'][4] = 'new-eb9eee95-59e3-49b4-96a0-b5723b8071b4';
  $pane = new stdClass();
  $pane->pid = 'new-5cb9a489-d912-49f0-85fb-671c5f1410ec';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '5cb9a489-d912-49f0-85fb-671c5f1410ec';
  $display->content['new-5cb9a489-d912-49f0-85fb-671c5f1410ec'] = $pane;
  $display->panels['main'][5] = 'new-5cb9a489-d912-49f0-85fb-671c5f1410ec';
  $pane = new stdClass();
  $pane->pid = 'new-49812509-15e5-411e-9ba7-fead4ef104ae';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_content-related_content_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'access_id' => '%node:nid',
      'tid' => '',
    ),
    'exposed' => array(
      'type' => array(
        'video' => 'video',
      ),
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '49812509-15e5-411e-9ba7-fead4ef104ae';
  $display->content['new-49812509-15e5-411e-9ba7-fead4ef104ae'] = $pane;
  $display->panels['main'][6] = 'new-49812509-15e5-411e-9ba7-fead4ef104ae';
  $pane = new stdClass();
  $pane->pid = 'new-7c9f1c0f-a6bb-414e-9e21-48cdffcd1430';
  $pane->panel = 'sidebar';
  $pane->type = 'subnavigation';
  $pane->subtype = 'subnavigation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7c9f1c0f-a6bb-414e-9e21-48cdffcd1430';
  $display->content['new-7c9f1c0f-a6bb-414e-9e21-48cdffcd1430'] = $pane;
  $display->panels['sidebar'][0] = 'new-7c9f1c0f-a6bb-414e-9e21-48cdffcd1430';
  $pane = new stdClass();
  $pane->pid = 'new-3571a7bc-b2f7-484a-a6a3-2df64b6f674a';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'doi_content_topbar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3571a7bc-b2f7-484a-a6a3-2df64b6f674a';
  $display->content['new-3571a7bc-b2f7-484a-a6a3-2df64b6f674a'] = $pane;
  $display->panels['top'][0] = 'new-3571a7bc-b2f7-484a-a6a3-2df64b6f674a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3571a7bc-b2f7-484a-a6a3-2df64b6f674a';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}
