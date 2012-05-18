<?php

$info = array();

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'base' => t('Header background'),
  'text' => t('Main text'),
  'link' => t('Links'),
  'button' => t('Buttons'),
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
      'footer' => '#EDEBEA', /* Footer bg */
      'footerlinks' => '#6B6964', /* Footer links */
    ),
  ),
  'green' => array(
    'title' => t('Green and orange'),
    'colors' => array(
      'base' => '#374537', /* Header bg */
      'text' => '#303030', /* Main text */
      'link' => '#b16145', /* Links */
      'button' => '#ac5031', /* Buttons */
      'footer' => '#EDEBEA', /* Footer bg */
      'footerlinks' => '#6B6964', /* Footer links */
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
