DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20200902153855');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20200902153855');
-- Add your query below.

ALTER TABLE `characters`
ADD COLUMN `dungeon_difficulty`  tinyint(1) NOT NULL DEFAULT 0 COMMENT 'TBC Only' AFTER `orientation`,
ADD COLUMN `arenaPoints`  int(10) NOT NULL DEFAULT 0 COMMENT 'TBC only' AFTER `honorStoredDK`,
ADD COLUMN `totalHonorPoints` int(10) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `arenaPoints`,
ADD COLUMN `todayHonorPoints` int(10) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `totalHonorPoints`,
ADD COLUMN `yesterdayHonorPoints` int(10) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `todayHonorPoints`,
ADD COLUMN `totalKills` int(10) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `yesterdayHonorPoints`,
ADD COLUMN `todayKills` smallint(5) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `totalKills`,
ADD COLUMN `yesterdayKills` smallint(5) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `todayKills`,
ADD COLUMN `chosenTitle` int(10) NOT NULL DEFAULT '0'  COMMENT 'TBC ONLY' AFTER `yesterdayKills`,
ADD COLUMN `knownTitles` longtext COMMENT 'TBC ONLY' AFTER `chosenTitle`;

ALTER TABLE `instance`
ADD COLUMN `dungeon_difficulty`  tinyint(1) NOT NULL DEFAULT 0 COMMENT 'TBC Only' AFTER `resettime`,

--
-- Table structure for table `character_declinedname`
--

DROP TABLE IF EXISTS `character_declinedname`;
CREATE TABLE `character_declinedname` (
  `guid` int(11) unsigned NOT NULL DEFAULT '0' COMMENT 'Global Unique Identifier',
  `genitive` varchar(15) NOT NULL DEFAULT '',
  `dative` varchar(15) NOT NULL DEFAULT '',
  `accusative` varchar(15) NOT NULL DEFAULT '',
  `instrumental` varchar(15) NOT NULL DEFAULT '',
  `prepositional` varchar(15) NOT NULL DEFAULT '',
  PRIMARY KEY (`guid`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
