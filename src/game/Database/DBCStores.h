/*
 * Copyright (C) 2005-2011 MaNGOS <http://getmangos.com/>
 * Copyright (C) 2009-2011 MaNGOSZero <https://github.com/mangos/zero>
 * Copyright (C) 2011-2016 Nostalrius <https://nostalrius.org>
 * Copyright (C) 2016-2017 Elysium Project <https://github.com/elysium-project>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOS_DBCSTORES_H
#define MANGOS_DBCSTORES_H

#include "Common.h"
#include "Database/DBCStore.h"
#include "DBCStructure.h"

#include <list>

bool IsAcceptableClientBuild(uint32 build);
std::string AcceptableClientBuildsListStr();

char const* GetPetName(uint32 petfamily, uint32 dbclang);
uint32 GetTalentSpellCost(uint32 spellId);
uint32 GetTalentSpellCost(TalentSpellPos const* pos);
TalentSpellPos const* GetTalentSpellPos(uint32 spellId);

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
int32 GetAreaFlagByAreaID(uint32 area_id);                  // -1 if not found
uint32 GetAreaFlagByMapId(uint32 mapid);
#endif

WMOAreaTableEntry const* GetWMOAreaTableEntryByTripple(int32 rootid, int32 adtid, int32 groupid);

CharacterFacialHairStylesEntry const* GetCharFacialHairEntry(uint8 race, uint8 gender, uint8 facialHairId);
CharSectionsEntry const* GetCharSectionEntry(uint8 race, CharSectionType genType, uint8 gender, uint8 type, uint8 color);

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
uint32 GetVirtualMapForMapAndZone(uint32 mapid, uint32 zoneId);

enum ContentLevels
{
    CONTENT_1_60 = 0,
    CONTENT_61_70
};
ContentLevels GetContentLevelsForMapAndZone(uint32 mapid, uint32 zoneId);
#endif

ChatChannelsEntry const* GetChannelEntryFor(uint32 channel_id);
ChatChannelsEntry const* GetChannelEntryFor(std::string const& name);

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
ChatChannelsEntry const* GetChatChannelsEntryFor(const std::string& name, uint32 channel_id = 0);

bool IsTotemCategoryCompatiableWith(uint32 itemTotemCategoryId, uint32 requiredTotemCategoryId);

bool MapCoordinateVsZoneCheck(float x, float y, uint32 mapid, uint32 zone);
#endif

bool Zone2MapCoordinates(float& x,float& y,uint32 zone);
bool Map2ZoneCoordinates(float& x,float& y,uint32 zone);

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
uint32 GetTalentInspectBitPosInTab(uint32 talentId);
uint32 GetTalentTabInspectBitSize(uint32 talentTabId);
uint32 const* /*[3]*/ GetTalentTabPages(uint32 cls);
#endif

bool IsPointInAreaTriggerZone(AreaTriggerEntry const* atEntry, uint32 mapid, float x, float y, float z, float delta = 0.0f);

typedef std::multimap<uint32, SkillRaceClassInfoEntry const*> SkillRaceClassInfoMap;
typedef std::pair<SkillRaceClassInfoMap::iterator, SkillRaceClassInfoMap::iterator> SkillRaceClassInfoBounds;
SkillRaceClassInfoEntry const* GetSkillRaceClassInfo(uint32 skill, uint8 race, uint8 class_);

uint8 ValidateName(std::wstring const& name);

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
uint32 GetCreatureModelRace(uint32 model_id);
#endif

extern DBCStorage <AuctionHouseEntry>            sAuctionHouseStore;
extern DBCStorage <BankBagSlotPricesEntry>       sBankBagSlotPricesStore;
//extern DBCStorage <ChatChannelsEntry>           sChatChannelsStore; -- accessed using function, no usable index
extern DBCStorage <CharacterFacialHairStylesEntry>  sCharacterFacialHairStylesStore;
extern DBCStorage <CharSectionsEntry>            sCharSectionsStore;

#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <BattlemasterListEntry>        sBattlemasterListStore;
extern DBCStorage <CharStartOutfitEntry>         sCharStartOutfitStore;
extern DBCStorage <CharTitlesEntry>              sCharTitlesStore;
extern DBCStorage <ChatChannelsEntry>            sChatChannelsStore;
#endif
extern DBCStorage <ChrClassesEntry>              sChrClassesStore;
extern DBCStorage <ChrRacesEntry>                sChrRacesStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
//extern DBCStorage <CinematicCameraEntry>         sCinematicCameraStore;
#endif
extern DBCStorage <CinematicSequencesEntry>      sCinematicSequencesStore;
extern DBCStorage <CreatureDisplayInfoEntry>     sCreatureDisplayInfoStore;
extern DBCStorage <CreatureDisplayInfoExtraEntry>sCreatureDisplayInfoExtraStore;
extern DBCStorage <CreatureFamilyEntry>          sCreatureFamilyStore;

extern DBCStorage <CreatureModelDataEntry>       sCreatureModelDataStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <CreatureSpellDataEntry>       sCreatureSpellDataStore;
#endif
extern DBCStorage <CreatureTypeEntry>            sCreatureTypeStore;
extern DBCStorage <DurabilityCostsEntry>         sDurabilityCostsStore;
extern DBCStorage <DurabilityQualityEntry>       sDurabilityQualityStore;
extern DBCStorage <EmotesEntry>                  sEmotesStore;
extern DBCStorage <EmotesTextEntry>              sEmotesTextStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
//extern DBCStorage <FactionEntry>                 sFactionStore;
extern DBCStorage <FactionTemplateEntry>         sFactionTemplateStore;

#endif
extern DBCStorage <GameObjectDisplayInfoEntry>   sGameObjectDisplayInfoStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <GemPropertiesEntry>           sGemPropertiesStore;

extern DBCStorage <GMSurveyCurrentSurveyEntry>   sGMSurveyCurrentSurveyStore;
extern DBCStorage <GMSurveyQuestionsEntry>       sGMSurveyQuestionsStore;
extern DBCStorage <GMSurveyEntry>                sGMSurveySurveysStore;
extern DBCStorage <GMTicketCategoryEntry>        sGMTicketCategoryStore;

extern DBCStorage <GtCombatRatingsEntry>         sGtCombatRatingsStore;
extern DBCStorage <GtChanceToMeleeCritBaseEntry> sGtChanceToMeleeCritBaseStore;
extern DBCStorage <GtChanceToMeleeCritEntry>     sGtChanceToMeleeCritStore;
extern DBCStorage <GtChanceToSpellCritBaseEntry> sGtChanceToSpellCritBaseStore;
extern DBCStorage <GtChanceToSpellCritEntry>     sGtChanceToSpellCritStore;
extern DBCStorage <GtOCTRegenHPEntry>            sGtOCTRegenHPStore;
extern DBCStorage <GtNPCManaCostScalerEntry>     sGtNPCManaCostScalerStore;
// extern DBCStorage <GtOCTRegenMPEntry>            sGtOCTRegenMPStore; -- not used currently
extern DBCStorage <GtRegenHPPerSptEntry>         sGtRegenHPPerSptStore;
extern DBCStorage <GtRegenMPPerSptEntry>         sGtRegenMPPerSptStore;
extern DBCStorage <ItemEntry>                    sItemStore;

#endif

extern DBCStorage <ItemBagFamilyEntry>           sItemBagFamilyStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <ItemClassEntry>               sItemClassStore;
#endif
//extern DBCStorage <ItemDisplayInfoEntry>      sItemDisplayInfoStore; -- not used currently
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <ItemExtendedCostEntry>        sItemExtendedCostStore;
#endif
extern DBCStorage <ItemRandomPropertiesEntry>    sItemRandomPropertiesStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <ItemRandomSuffixEntry>        sItemRandomSuffixStore;
#endif
extern DBCStorage <ItemSetEntry>                 sItemSetStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <LiquidTypeEntry>              sLiquidTypeStore;
#endif
extern DBCStorage <LockEntry>                    sLockStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <MailTemplateEntry>            sMailTemplateStore;
//extern DBCStorage <MapEntry>                     sMapStore; vmangos using map_template
#endif
extern DBCStorage <QuestSortEntry>               sQuestSortStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <RandomPropertiesPointsEntry>  sRandomPropertiesPointsStore;
#endif
extern DBCStorage <SkillLineEntry>               sSkillLineStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <SkillLineAbilityEntry>        sSkillLineAbilityStore;
#endif
extern DBCStorage <SkillRaceClassInfoEntry>      sSkillRaceClassInfoStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <SkillTiersEntry>              sSkillTiersStore;
//extern DBCStorage <SoundEntriesEntry>            sSoundEntriesStore; //vmangos in objectmgr.h
#endif
extern DBCStorage <SpellCastTimesEntry>          sSpellCastTimesStore;
extern DBCStorage <SpellDurationEntry>           sSpellDurationStore;
extern DBCStorage <SpellFocusObjectEntry>        sSpellFocusObjectStore;
extern DBCStorage <SpellItemEnchantmentEntry>    sSpellItemEnchantmentStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <SpellItemEnchantmentConditionEntry> sSpellItemEnchantmentConditionStore;
#endif
extern DBCStorage <SpellCategoryEntry>           sSpellCategoryStore;
extern SpellCategoriesStore                      sSpellCategoriesStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern ItemSpellCategoryStore                    sItemSpellCategoryStore;
#endif
extern PetFamilySpellsStore                      sPetFamilySpellsStore;
extern DBCStorage <SpellRadiusEntry>             sSpellRadiusStore;
extern DBCStorage <SpellRangeEntry>              sSpellRangeStore;
extern DBCStorage <SpellShapeshiftFormEntry>     sSpellShapeshiftFormStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <SpellVisualEntry>             sSpellVisualStore;
#endif
extern DBCStorage <StableSlotPricesEntry>        sStableSlotPricesStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <SummonPropertiesEntry>        sSummonPropertiesStore;
#endif
extern DBCStorage <TalentEntry>                  sTalentStore;
extern DBCStorage <TalentTabEntry>               sTalentTabStore;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <TaxiNodesEntry>               sTaxiNodesStore;
#endif
extern DBCStorage <TaxiPathEntry>                sTaxiPathStore;
extern TaxiMask                                  sTaxiNodesMask;
extern TaxiPathSetBySource                       sTaxiPathSetBySource;
extern TaxiPathNodesByPath                       sTaxiPathNodesByPath;
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
extern DBCStorage <TotemCategoryEntry>           sTotemCategoryStore;
#endif
extern DBCStorage <WMOAreaTableEntry>            sWMOAreaTableStore;
//extern DBCStorage <WorldMapAreaEntry>           sWorldMapAreaStore; -- use Zone2MapCoordinates and Map2ZoneCoordinates
//extern DBCStorage <WorldMapOverlayEntry>         sWorldMapOverlayStore;
extern DBCStorage <WorldSafeLocsEntry>           sWorldSafeLocsStore;

void LoadDBCStores(std::string const& dataPath);

char const* GetUnitRaceName(uint8 race, uint8 locale);
char const* GetUnitClassName(uint8 class_, uint8 locale);
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
// script support functions
//DBCStorage <SoundEntriesEntry>          const* GetSoundEntriesStore();
//DBCStorage <SpellRangeEntry>            const* GetSpellRangeStore();
//DBCStorage <FactionEntry>               const* GetFactionStore();
//DBCStorage <ItemEntry>                  const* GetItemDisplayStore();
//DBCStorage <CreatureDisplayInfoEntry>   const* GetCreatureDisplayStore();
//DBCStorage <EmotesEntry>                const* GetEmotesStore();
//DBCStorage <EmotesTextEntry>            const* GetEmotesTextStore();

#endif
#endif
