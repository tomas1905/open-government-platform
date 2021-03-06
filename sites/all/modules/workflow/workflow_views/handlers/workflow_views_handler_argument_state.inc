<?php

/**
 * @file
 * Provide views argument handler for workflow.module.
 */

/**
 * Argument handler to accept a node type.
 */
class views_handler_argument_workflow_state extends views_handler_argument {
  function construct() {
    parent::construct('type');
  }

  /**
   * Override the behavior of summary_name(). Get the user-friendly version
   * of the workflow state.
   */
  function summary_name($data) {
    return workflow_get_sid_label($data->{$this->name_alias});
  }

  /**
   * Override the behavior of title(). Get the user-friendly version of the
   * workflow state.
   */
  function title() {
    return workflow_get_sid_label($this->argument);
  }
}
