<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>  

</head>
<body>
  <div id="page-outer-wrapper">
  <div id="page" class="clearfix">
  <div id="page-inner-wrapper">


<div id="content">
  <?php if (!empty($logo)){ ?>
    <div id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />        
    </div>
  <?php } ?>

  <h1><?php print $title; ?></h1>

  <p>
    <?php print $content; ?>
  </p>  

  <div id="sitename">
    <span> &#150; <?php print $site_name; ?></span>
  </div>
</div>

<div id="footer-message-wrapper" class="hoverMid">
  <div id="footer-message">
    <?php print $footer_message; ?>
  </div>
</div>

</div>
</div>
</div>

</body>
</html>