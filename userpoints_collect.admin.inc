<?php

/**
 * @file
 * Provides administrative settings for userpoints collect module.
 */


/**
 * Administrative Settings Form.
 */
function userpoints_collect_admin_settings($form, &$form_state) {
  $form['userpoints_collect_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Eligibility Mode'),
    '#description' => t('Choose which type of eligibility mode to for users.'),
    '#default_value' => userpoints_collect_config('mode'),
    '#options' => array(
      USERPOINTS_COLLECT_MODE_SERIES => t('Series'),
      USERPOINTS_COLLECT_MODE_INTERVAL => t('Interval'),
    ),
  );
  $form['userpoints_collect_points'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of points to collect'),
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('points'),
  );
  $form['userpoints_collect_submit_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Submit Button label'),
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('submit_label'),
  );
  $form['userpoints_collect_return_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Return to Site label'),
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('return_label'),
  );
  $form['userpoints_collect_return_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Return to Site URL'),
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('return_url'),
  );
  $form['userpoints_collect_no_ballots_label'] = array(
    '#type' => 'textfield',
    '#title' => t('No ballots remaining label'),
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('no_ballots_label'),
  );
  $form['userpoints_collect_next_ballot_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Next ballot available in... label'),
    '#description' => 'Label must contain @timeleft to indicate where time left until next ballot should be displayed.',
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('next_ballot_label'),
  );
  $form['userpoints_collect_after_collect_path'] = array(
    '#type' => 'textfield',
    '#title' => t('After collect path'),
    '#description' => 'Redirect to this path after user collects a point.',
    '#required' => TRUE,
    '#default_value' => userpoints_collect_config('after_collect_path'),
  );

  return system_settings_form($form);
}
