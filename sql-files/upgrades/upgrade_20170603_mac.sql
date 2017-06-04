ALTER TABLE `login` ADD `mac` mac(20) unsigned NOT NULL default '00:00:00:00:00:00:00' AFTER  `lastlogin`;
