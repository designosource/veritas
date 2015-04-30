; Open Atrium Core Makefile

api = 2
core = 7.x

; OG LDAP API
projects[og_ldap_api][type] = module
projects[og_ldap_api][subdir] = contrib
projects[og_ldap_api][version] = 1.x-dev
projects[og_ldap_api][download][type] = git
projects[og_ldap_api][download][url] = http://git.drupal.org/project/og_ldap_api.git
projects[og_ldap_api][download][branch] = 7.x-1.x
projects[og_ldap_api][download][revision] = 636e787

; LDAP
projects[ldap][type] = module
projects[ldap][subdir] = contrib
projects[ldap][version] = 2.x-dev
projects[ldap][download][type] = git
projects[ldap][download][url] = http://git.drupal.org/project/ldap.git
projects[ldap][download][branch] = 7.x-2.x
projects[ldap][download][revision] = caa1ba5
projects[ldap][patch][2043539] = http://drupal.org/files/issues/ldap-check-server-status-2043539-4.patch
projects[ldap][patch][2241467] = http://drupal.org/files/issues/ldap_servers-status-report-2241467-3.patch

; LDAP entry reference
projects[ldap_entry_reference][type] = module
projects[ldap_entry_reference][subdir] = contrib
projects[ldap_entry_reference][version] = 1.x-dev
projects[ldap_entry_reference][download][type] = git
projects[ldap_entry_reference][download][url] = http://git.drupal.org/project/ldap_entry_reference.git
projects[ldap_entry_reference][download][branch] = 7.x-1.x
projects[ldap_entry_reference][download][revision] = 2b9da92
