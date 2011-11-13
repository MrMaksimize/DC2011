<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>  

</head>
<body>


<div id="content">
  <h1><?php print $title; ?></h1>

  <p>
    <?php print $content; ?>
  </p>  

  <div id="sitename">
    <?php print $site_name; ?>
  </div>
  <div id="footermsg" class="hoverMid">
    <?php print $footer_message; ?>
  </div>
</div>


</body>
</html>