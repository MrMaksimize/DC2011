<?php // $Id: ssl-icon.tpl.php,v 1.2 2010/07/28 03:38:13 hakulicious Exp $ ?>
<div id="ssl_icon">
	<img src="<?php print $base_url . '/' . drupal_get_path('module', 'fancy_login'); ?>/images/https.png" alt="<?php print t('Secure Login'); ?>" title="<?php print t('This login is SSL protected'); ?>" id="ssl_login_image" />
	<div id="ssl_login_popup">
		<p>This login is SSL protected</p>
	</div>
</div>
