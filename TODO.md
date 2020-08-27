# todo
 - patch 20 having issue on the template load. set to patch 10 for now, eg below
 - Item (Entry: 15304) has unknown (wrong or not listed in `item_enchantment_template`) RandomProperty (477)
 - Item RandomProperty id #813 used in `item_template` but it doesn't have records in `item_enchantment_template` table.
 - Table 'creature_loot_template' entry 9819 (creature entry) not exist but used as loot id in DB.
 - find the reason, need to change the patch_max from 10 to 20 later

# notes
 - struct MapEntry inside Map.h this is actually read from SQL map_template but other core are reading in the Map.dbc
 - DBCfmt.h has the DBC structure in string format, inside DBCStructure.h the entry has to be same sequence as the fmt
 - SQLStorages.cpp has the database strictire in string format, the entry also has to be same sequence as teh fmt