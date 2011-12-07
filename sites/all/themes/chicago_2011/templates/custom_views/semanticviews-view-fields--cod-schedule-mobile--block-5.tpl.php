<?php
// $Id: semanticviews-view-fields.tpl.php,v 1.1.2.4 2010/02/20 14:43:06 bangpound Exp $
/**
 * @file semanticviews-view-fields.tpl.php
 * Default simple view template to display all the fields as a row. The template
 * outputs a full row by looping through the $fields array, printing the field's
 * HTML element (as configured in the UI) and the class attributes. If a label
 * is specified for the field, it is printed wrapped in a <label> element with
 * the same class attributes as the field's HTML element.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output
 *     safe.
 *   - $field->element_type: The HTML element wrapping the field content and
 *     label.
 *   - $field->attributes: An array of attributes for the field wrapper.
 *   - $field->handler: The Views field handler object controlling this field.
 *     Do not use var_export to dump this object, as it can't handle the
 *     recursion.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @see template_preprocess_semanticviews_view_fields()
 * @ingroup views_templates
 * @todo Justify this template. Excluding the PHP, this template outputs angle
 * brackets, the label element, slashes and whitespace.
 *
 * SPECIFIC FIELDS AVAILABLE TO THIS VIEW ONLY
 *
 * [field_slot_datetime_value] == Content: Date and time (field_slot_datetime) - From date
 * [title] == Node: Title
 * [teaser] == Node: Teaser
 * [field_questions_answered_value] == Content: What questions will your session answer? (field_questions_answered)
 * [field_speakers_uid_1] == Content: Speaker(s) (field_speakers)
 * [picture] == User: Picture
 * [ops] == Flags: Flag link
 * [field_accepted_value] == Content: Status (field_accepted)
 * [field_experience_value] == Content: Experience level (field_experience)
 * [field_track_value] == Content: Track (field_track)
 */
?>

<div class="presentation-inner-wrapper">
<div class="presentation-inner <?php if($id == 'field_track_value'): print $field_track_value->content; endif; ?>">
      <div class="session-info">
<?php foreach ($fields as $id => $field): ?>
<?php if($id == 'field_session_room_nid'): ?>
    <?php if ($field->element_type): ?>
      <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
    <?php endif; ?>

      <?php if ($field->label): ?>

        <?php if ($field->label_element_type): ?>
          <<?php print $field->label_element_type; ?><?php print drupal_attributes($field->label_attributes); ?>>
        <?php endif; ?>

          <?php print $field->label; ?>:

        <?php if ($field->label_element_type): ?>
          </<?php print $field->label_element_type; ?>>
        <?php endif; ?>

      <?php endif; ?><!-- /label -->

      <?php print $field->content; ?>

    <?php if ($field->element_type): ?>
      </<?php print $field->element_type; ?>>
    <?php endif; ?>
  <?php endif; ?><!-- /room -->

  <?php if($id == 'phpcode'): ?>
    <?php if ($field->element_type): ?>
      <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
    <?php endif; ?>

      <?php if ($field->label): ?>

        <?php if ($field->label_element_type): ?>
          <<?php print $field->label_element_type; ?><?php print drupal_attributes($field->label_attributes); ?>>
        <?php endif; ?>

          <?php print $field->label; ?>:

        <?php if ($field->label_element_type): ?>
          </<?php print $field->label_element_type; ?>>
        <?php endif; ?>

      <?php endif; ?><!-- /label -->

      <?php print $field->content; ?>

    <?php if ($field->element_type): ?>
      </<?php print $field->element_type; ?>>
    <?php endif; ?>
  <?php endif; ?><!-- /presenter pics -->

  <?php if($id == 'title'): ?>
      <?php if ($field->element_type): ?>
        <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
      <?php endif; ?>

        <?php if ($field->label): ?>

          <?php if ($field->label_element_type): ?>
            <<?php print $field->label_element_type; ?><?php print drupal_attributes($field->label_attributes); ?>>
          <?php endif; ?>

            <?php print $field->label; ?>:

          <?php if ($field->label_element_type): ?>
            </<?php print $field->label_element_type; ?>>
          <?php endif; ?>

        <?php endif; ?><!-- /label -->

        <?php print $field->content; ?>

      <?php if ($field->element_type): ?>
        </<?php print $field->element_type; ?>>
      <?php endif; ?><!-- /title -->

    <?php endif; ?>
    <?php if ($id == 'field_track'): ?>
    <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
    <?php print $field->content; ?>
    </<?php print $field->element_type; ?>>
    <?php endif; ?>

  <?php if($id == 'field_experience_value'): ?>
    <?php if ($field->element_type): ?>
      <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
    <?php endif; ?>

      <?php if ($field->label): ?>

        <?php if ($field->label_element_type): ?>
          <<?php print $field->label_element_type; ?><?php print drupal_attributes($field->label_attributes); ?>>
        <?php endif; ?>

          <?php print $field->label; ?>:

        <?php if ($field->label_element_type): ?>
          </<?php print $field->label_element_type; ?>>
        <?php endif; ?>

      <?php endif; ?><!-- /label -->

      <?php print $field->content; ?>

    <?php if ($field->element_type): ?>
      </<?php print $field->element_type; ?>>
    <?php endif; ?>
<?php print '<div class ="load-space"><div class="load-container" id="nid-'.$row->nid.'"></div></div>'; ?>
<?php endif; ?><!-- /field_experience_value -->
  <?php if($id == 'ops'): ?>

    <?php if ($field->element_type): ?>
      <<?php print $field->element_type; ?><?php print drupal_attributes($field->attributes); ?>>
    <?php endif; ?>

      <?php if ($field->label): ?>

        <?php if ($field->label_element_type): ?>
          <<?php print $field->label_element_type; ?><?php print drupal_attributes($field->label_attributes); ?>>
        <?php endif; ?>

          <?php print $field->label; ?>:

        <?php if ($field->label_element_type): ?>
          </<?php print $field->label_element_type; ?>>
        <?php endif; ?>

      <?php endif; ?><!-- /label -->

      <?php print $field->content; ?>

    <?php if ($field->element_type): ?>
      </<?php print $field->element_type; ?>>
    <?php endif; ?>
  <?php endif; ?><!-- /ops -->
<?php endforeach; ?>
    </div><!-- /session-info -->
  </div><!-- /presentation-inner -->
</div>