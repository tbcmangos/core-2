DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20200827155906');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20200827155906');
-- Add your query below.

ALTER TABLE `map_template`
ADD COLUMN `expansion`  tinyint(3) UNSIGNED NOT NULL DEFAULT 0 COMMENT 'expansion of the game, 0 classic 1 tbc' AFTER `patch`,
ADD COLUMN `reset_delay_heroic`  int(10) UNSIGNED NOT NULL DEFAULT 0 AFTER `reset_delay`;

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
