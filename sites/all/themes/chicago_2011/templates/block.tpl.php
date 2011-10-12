<?php

/**
 * @file block.tpl.php
 *
 * Theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $block->content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: This is a numeric id connected to each module.
 * - $block->region: The block region embedding the current block.
 *
 * Helper variables:
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 */
?>
<?php 
  if($block->bid=='block-1')  {
    global $user; 
    profile_load_profile($user); 
    $logged_in_copy="Welcome, $user->profile_first $user->profile_last" . l("Buy a ticket", "content/drupalcamp-chicago-2011") . " " . l("My Account", "user/".$user->uid."edit") . " " .  l("Logout", "logout");   
    $block->content=$logged_in?$logged_in_copy:$block->content;
  }
?>

<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?> <?php print $skinr;  ?>">

  <div class="block-inner">
  
		<?php if ($block->subject): ?>
      <h2 class="title block-title"><?php print $block->subject ?></h2>
    <?php endif;?>
    
    <div class="content">
    	<div class="content-inner">
      	<?php print $block->content ?>
      </div><!-- /.content-inner -->
    </div><!-- /.content -->
    
  </div><!-- /.block-inner -->
</div><!-- /#block-xx -->
