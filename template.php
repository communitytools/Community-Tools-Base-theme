<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

 /*
function cmtls_base_preprocess(&$vars) {
    //dpm($vars);
}
 */

/**
  * Change submit button html
  * Based on http://drupal.org/node/19855
  */
/*
function cmtls_base_theme(&$existing, $type, $theme, $path) {
  $hooks['user_login_block'] = array(
    'template' => 'templates/user_login',
    'render element' => 'form',
    // other theme registration code...
  );
  
  return $hooks;
}

function cmtls_base_preprocess_user_login_block(&$variables) {
  $variables['form']['actions']['submit']['#prefix'] = '<span class="form-submit">';
  $variables['form']['actions']['submit']['#sufix'] = '</sufix>';
  $variables['rendered'] = drupal_render_children($variables['form']);
}

*/
