<?php

$plugin = array(
  'label' => t('ToDos'),
  'resource' => 'todos',
  'name' => 'todos__1_0',
  'entity_type' => 'node',
  'bundle' => 'todo',
  'description' => t('Export the "ToDo" content type.'),
  'class' => 'TodosResource',
  // @todo: Add once we provide login.
  // 'authentication_types' => TRUE,
);
