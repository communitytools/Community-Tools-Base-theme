<?php

$info = array();

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'base' => t('Header background'),
  'text' => t('Main text'),
  'link' => t('Links'),
  'button' => t('Buttons'),
  'slogan' => t('Slogan'),
  'footer' => t('Footer background'),
  'footerlinks' => t('Footer links'),
);

// Color schemes for the site.
$info['schemes'] = array(
  // Define the default scheme.
  'default' => array(
    'title' => t('Brown and blue (default)'),
    'colors' => array(
      'base' => '#282423', /* Header bg */
      'text' => '#303030', /* Main text */
      'link' => '#1C85D6', /* Links */
      'button' => '#1C85D5', /* Buttons */
      'slogan' => '#BFAC85', /* Slogan */
      'footer' => '#EDEBEA', /* Footer bg */
      'footerlinks' => '#6B6964', /* Footer links */
    ),
  ),
  'green' => array(
    'title' => t('Blue and orange'),
    'colors' => array(
      'base' => '#113c48', /* Header bg */
      'text' => '#303030', /* Main text */
      'link' => '#de6705', /* Links */
      'button' => '#ec710b', /* Buttons */
      'slogan' => '#7191af', /* Slogan */
      'footer' => '#dddde1', /* Footer bg */
      'footerlinks' => '#70674f', /* Footer links */
    ),
  ),
);

// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array(
  'css/colors.css',
);

// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array();

// Files used in the scheme preview.
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';

// Gradients
$info['gradients'] = array();

// Color areas to fill (x, y, width, height).
$info['fill'] = array();

// Coordinates of all the theme slices (x, y, width, height)
// with their filename as used in the stylesheet.
$info['slices'] = array();

// Base file for image generation.
// $info['base_image'] = 'color/base.png';
