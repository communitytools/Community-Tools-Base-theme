<?php

$info = array();

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'link' => t('Link color'),
  'base' => t('Header background color'),
);

// Color schemes for the site.
$info['schemes'] = array(
  // Define the default scheme.
  'default' => array(
    'title' => t('Brown (default)'),
    'colors' => array(
      'link' => '#1C85D5',
      'base' => '#282423',
    ),
  ),
  'green' => array(
    'title' => t('Green'),
    'colors' => array(
      'link' => '#ffffff',
      'base' => '#008CFF',
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
