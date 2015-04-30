<?php
/**
 * @file
 * oa_ldap.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function oa_ldap_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-oa_group-og_ldap_api_admins'
  $field_instances['node-oa_group-og_ldap_api_admins'] = array(
    'bundle' => 'oa_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_ldap_api_admins',
    'label' => 'LDAP Admins',
    'required' => 0,
    'settings' => array(
      'ldap_base_dn' => '',
      'ldap_entry_type' => 'og',
      'ldap_extra_filter' => 'objectClass=groupOfNames',
      'search_plugin' => 'ldap',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'ldap_entry_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'ldap_entry_reference/autocomplete',
        'ldap_search_attr' => 'cn',
        'size' => 60,
      ),
      'type' => 'ldap_entry_reference_autocomplete',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-oa_group-og_ldap_api_members'
  $field_instances['node-oa_group-og_ldap_api_members'] = array(
    'bundle' => 'oa_group',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_ldap_api_members',
    'label' => 'LDAP Members',
    'required' => 0,
    'settings' => array(
      'ldap_base_dn' => '',
      'ldap_entry_type' => 'og',
      'ldap_extra_filter' => 'objectClass=groupOfNames',
      'search_plugin' => 'ldap',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'ldap_entry_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'ldap_entry_reference/autocomplete',
        'ldap_search_attr' => 'cn',
        'size' => 60,
      ),
      'type' => 'ldap_entry_reference_autocomplete',
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'node-oa_space-og_ldap_api_admins'
  $field_instances['node-oa_space-og_ldap_api_admins'] = array(
    'bundle' => 'oa_space',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_ldap_api_admins',
    'label' => 'LDAP Admins',
    'required' => 0,
    'settings' => array(
      'ldap_base_dn' => '',
      'ldap_entry_type' => 'og',
      'ldap_extra_filter' => 'objectClass=groupOfNames',
      'search_plugin' => 'ldap',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'ldap_entry_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'ldap_entry_reference/autocomplete',
        'ldap_search_attr' => 'cn',
        'size' => 60,
      ),
      'type' => 'ldap_entry_reference_autocomplete',
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-oa_space-og_ldap_api_members'
  $field_instances['node-oa_space-og_ldap_api_members'] = array(
    'bundle' => 'oa_space',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_ldap_api_members',
    'label' => 'LDAP Members',
    'required' => 0,
    'settings' => array(
      'ldap_base_dn' => '',
      'ldap_entry_type' => 'og',
      'ldap_extra_filter' => 'objectClass=groupOfNames',
      'search_plugin' => 'ldap',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'ldap_entry_reference',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'ldap_entry_reference/autocomplete',
        'ldap_search_attr' => 'cn',
        'size' => 60,
      ),
      'type' => 'ldap_entry_reference_autocomplete',
      'weight' => 101,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('LDAP Admins');
  t('LDAP Members');

  return $field_instances;
}
