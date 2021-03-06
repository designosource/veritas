; Panopoly WYSIWYG Makefile

api = 2
core = 7.x

; The WYSIWYG Module Family

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2
projects[wysiwyg][patch][1489096] = http://drupal.org/files/wysiwyg-table-format.patch
projects[wysiwyg][patch][1786732] = http://drupal.org/files/wysiwyg-arbitrary_image_paths_markitup-1786732-3.patch
projects[wysiwyg][patch][1802394] = http://drupal.org/files/wysiwyg-1802394-4.patch
projects[wysiwyg][patch][934976] = https://drupal.org/files/wysiwyg-one-format.934976.23-alt.patch
projects[wysiwyg][patch][1757684] = https://www.drupal.org/files/issues/wysiwyg-1757684.28.patch

projects[wysiwyg_filter][version] = 1.6-rc2
projects[wysiwyg_filter][subdir] = contrib

; The WYSIWYG Helpers

projects[linkit][version] = 3.3
projects[linkit][subdir] = contrib

projects[image_resize_filter][version] = 1.14
projects[image_resize_filter][subdir] = contrib

projects[caption_filter][version] = 1.x-dev
projects[caption_filter][subdir] = contrib
projects[caption_filter][download][type] = git
projects[caption_filter][download][revision] = b8097ee
projects[caption_filter][download][branch] = 7.x-1.x

; Include our Editors

libraries[tinymce][download][type] = get
libraries[tinymce][download][url] = http://download.moxiecode.com/tinymce/tinymce_3.5.8.zip
libraries[tinymce][patch][1561882] = http://drupal.org/files/1561882-cirkuit-theme-tinymce-3.5.8.patch

libraries[markitup][download][type] = git
libraries[markitup][download][url] = https://github.com/markitup/1.x.git
libraries[markitup][download][revision] = 2c88c42
libraries[markitup][download][branch] = master
libraries[markitup][patch][1715642] = http://drupal.org/files/1715642-adding-html-set-markitup-editor.patch
