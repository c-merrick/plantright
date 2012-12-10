<?php if (empty($hide)): ?>

<?php if (!empty($pre_object)) print $pre_object ?>

<div <?php if (!empty($attr)) print drupal_attributes($attr) ?>>
  <?php if (!empty($title) && !$page): ?>
    <h2 class='<?php print $hook ?>-title'>
      <?php if (!empty($new)): ?><a id='new' class='new'><?php print('New') ?></a><?php endif; ?>
      <a href="<?php print $node_url ?>"><?php print $title ?></a>
    </h2>
  <?php endif; ?>

  <?php if (!empty($content)): ?>
    <div class='<?php print $hook ?>-content clear-block <?php if (!empty($is_prose)) print 'prose' ?>'>
      <?php print $content ?>
    </div>
  <?php endif; ?>
  <a href="/node/<?php print $node->nid ?>/edit" class="btn-primary">Edit Profile</a>
  <?php //dpm($node); ?>
</div>

<?php if (!empty($post_object)) print $post_object ?>

<?php endif; ?>