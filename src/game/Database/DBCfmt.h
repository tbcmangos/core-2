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

#ifndef MANGOS_DBCSFRM_H
#define MANGOS_DBCSFRM_H
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_12_1
const char AreaTableEntryfmt[] = "iiinixxxxxissssssssssssssssxiiiiixx";
const char AreaTriggerEntryfmt[] = "niffffffff";
const char AuctionHouseEntryfmt[] = "niiixxxxxxxxxxxxxxxxx";
const char BankBagSlotPricesEntryfmt[] = "ni";
char const CharSectionsEntryfmt[] = "diiiiixxxi";
char const CharacterFacialHairStylesfmt[] = "iiixxxxxxxx";
const char BattlemasterListEntryfmt[] = "niiiiiiiiiiiixxssssssssssssssssxx";
const char CharStartOutfitEntryfmt[] = "diiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxx";
// 3*12 new item fields in 3.0.x
// const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char CharTitlesEntryfmt[] = "nxssssssssssssssssxxxxxxxxxxxxxxxxxxi";
const char ChatChannelsEntryfmt[] = "iixssssssssssssssssxxxxxxxxxxxxxxxxxx";
// ChatChannelsEntryfmt, index not used (more compact store)
const char ChrClassesEntryfmt[] = "nxixssssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxix";
const char ChrRacesEntryfmt[] = "niixiixxixxxxissssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxi";
const char CinematicCameraEntryfmt[] = "nsiffff";
const char CinematicSequencesEntryfmt[] = "nxixxxxxxx";
const char CreatureDisplayInfofmt[] = "nixifxxxxxxxxx";
const char CreatureDisplayInfoExtrafmt[] = "nixxxxxxxxxxxxxxxxxxx";
const char CreatureFamilyfmt[] = "nfifiiiissssssssssssssssxx";
const char CreatureModelDatafmt[] = "nisxfxxxxxxxxxxffxxxxxxx";
const char CreatureSpellDatafmt[] = "niiiixxxx";
const char CreatureTypefmt[] = "nxxxxxxxxxxxxxxxxxx";
const char DurabilityCostsfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[] = "nf";
const char EmotesEntryfmt[] = "nxxiiix";
const char EmotesTextEntryfmt[] = "nxixxxxxxxxxxxxxxxx";
// const char FactionEntryfmt[] = "niiiiiiiiiiiiiiiiiissssssssssssssssxxxxxxxxxxxxxxxxxx";
const char FactionTemplateEntryfmt[] = "niiiiiiiiiiiii";
const char GameObjectDisplayInfofmt[] = "nsxxxxxxxxxxffffff";
const char GMSurveyCurrentSurveyfmt[] = "ni";
const char GMSurveySurveysfmt[] = "niiiiiiiiii";
const char GMSurveyQuestionsfmt[] = "nssssssssssssssssx";
const char GMTicketCategoryfmt[] = "nssssssssssssssssx";
const char GemPropertiesEntryfmt[] = "nixxi";
const char GtCombatRatingsfmt[] = "f";
const char GtChanceToMeleeCritBasefmt[] = "f";
const char GtChanceToMeleeCritfmt[] = "f";
const char GtChanceToSpellCritBasefmt[] = "f";
const char GtChanceToSpellCritfmt[] = "f";
const char GtOCTRegenHPfmt[] = "f";
const char GtNPCManaCostScalerfmt[] = "f";
// const char GtOCTRegenMPfmt[]="f";
const char GtRegenHPPerSptfmt[] = "f";
const char GtRegenMPPerSptfmt[] = "f";
const char Itemfmt[] = "niii";
const char ItemBagFamilyfmt[] = "nxxxxxxxxxxxxxxxxx";
const char ItemClassfmt[] = "nxxssssssssssssssssx";
// const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
// const char ItemCondExtCostsEntryfmt[]="xiii";
const char ItemExtendedCostEntryfmt[] = "niiiiiiiiiiiii";
const char ItemRandomPropertiesfmt[] = "nxiiixxssssssssssssssssx";
const char ItemRandomSuffixfmt[] = "nssssssssssssssssxxiiiiii";
const char ItemSetEntryfmt[] = "dssssssssssssssssxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
const char LiquidTypefmt[] = "niii";
const char LockEntryfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
const char MailTemplateEntryfmt[] = "nxxxxxxxxxxxxxxxxxssssssssssssssssx";
//const char MapEntryfmt[] = "nxixssssssssssssssssxxxxxxxixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiffiixxi"; //reading in from map_template, not in use
char const NamesProfanityEntryfmt[] = "dsi";
char const NamesReservedEntryfmt[] = "dsi";
const char QuestSortEntryfmt[] = "nxxxxxxxxxxxxxxxxx";
const char RandomPropertiesPointsfmt[] = "niiiiiiiiiiiiiii";
const char SkillLinefmt[] = "nixssssssssssssssssxxxxxxxxxxxxxxxxxxi";
const char SkillLineAbilityfmt[] = "niiiixxiiiiixxi";
const char SkillRaceClassInfofmt[] = "diiiiiix";
char const SpellCategoryfmt[] = "ni";
const char SkillTiersfmt[] = "niiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char SoundEntriesfmt[] = "nxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellCastTimefmt[] = "niii";
const char SpellDurationfmt[] = "niii";
const char SpellFocusObjectfmt[] = "nxxxxxxxxxxxxxxxxx";
const char SpellItemEnchantmentfmt[] = "niiiiiixxxiiissssssssssssssssxiiii";
const char SpellItemEnchantmentConditionfmt[] = "nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
const char SpellRadiusfmt[] = "nfxx";
const char SpellRangefmt[] = "nffixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellShapeshiftfmt[] = "nxxxxxxxxxxxxxxxxxxiixiixxxiiiiiiii";
const char SpellVisualfmt[] = "nxxxxxiixxxxxxxxxxxxxxxxx"; // wotlk - "nxxxxxxiixxxxxxxxxxxxxxxxxxxxxxx"
const char StableSlotPricesfmt[] = "ni";
const char SummonPropertiesfmt[] = "niiiii";
const char TalentEntryfmt[] = "niiiiiiiixxxxixxixxxi";
const char TalentTabEntryfmt[] = "nxxxxxxxxxxxxxxxxxxxiix";
const char TaxiNodesEntryfmt[] = "nifffssssssssssssssssxii";
const char TaxiPathEntryfmt[] = "niii";
const char TaxiPathNodeEntryfmt[] = "diiifffiiii";
const char TotemCategoryEntryfmt[] = "nxxxxxxxxxxxxxxxxxii";
const char WMOAreaTableEntryfmt[] = "niiixxxxxiixxxxxxxxxxxxxxxxx";
const char WorldMapAreaEntryfmt[] = "xinxffffi";
// const char WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxxx";
const char WorldSafeLocsEntryfmt[] = "nifffxxxxxxxxxxxxxxxxx";
#else
char const AreaTableEntryfmt[]="niiiixxxxxissssssssxixxxi";
char const AreaTriggerEntryfmt[]="niffffffff";
char const AuctionHouseEntryfmt[]="niiixxxxxxxxx";
char const BankBagSlotPricesEntryfmt[]="ni";
char const CharSectionsEntryfmt[] = "diiiiixxxi";
char const CharacterFacialHairStylesfmt[] = "iiixxxxxx";
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_9_4
char const ChrClassesEntryfmt[]="nxxixssssssssxxix";
#else
char const ChrClassesEntryfmt[] = "nxxixssssssssxxi";
#endif
char const ChrRacesEntryfmt[]="niixiixxiixxixixissssssssxxxx";
char const ChatChannelsEntryfmt[]="nixssssssssxxxxxxxxxx";                 // ChatChannelsEntryfmt, index not used (more compact store)
char const CinematicSequencesEntryfmt[]="nxxxxxxxxx";
char const CreatureDisplayInfofmt[]="nixifxxxxxxx";
char const CreatureDisplayInfoExtrafmt[]="nixxxxxxxxxxxxxxxxx";
char const CreatureModelDatafmt[] = "nisxfxxxxxxxxxxf";
char const CreatureFamilyfmt[]="nfifiiiissssssssxx";
char const CreatureSpellDatafmt[]="niiiixxxx";
char const CreatureTypefmt[]="nxxxxxxxxxx";
char const DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
char const DurabilityQualityfmt[]="nf";
char const EmotesEntryfmt[]="nxxiiix";
char const EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
char const GameObjectDisplayInfofmt[]="nsxxxxxxxxxx";
char const ItemBagFamilyfmt[]="nxxxxxxxxx";
//char const ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
char const ItemRandomPropertiesfmt[]="nsiiixxssssssssx";
#if SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_10_2
char const ItemSetEntryfmt[]="dssssssssxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
#elif SUPPORTED_CLIENT_BUILD > CLIENT_BUILD_1_6_1
char const ItemSetEntryfmt[] = "dssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
#else
char const ItemSetEntryfmt[] = "dssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiii";
#endif
char const LiquidTypefmt[]="niii";
char const LockEntryfmt[]="niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
char const MailTemplateEntryfmt[]="nxxxxxxxxx";
char const MapEntryfmt[]="nxixssssssssxxxxxxxixxxxxxxxxxxxxxxxxxixxx"; //reading in from map_template, not in use
char const NamesProfanityEntryfmt[] = "ds";
char const NamesReservedEntryfmt[] = "ds";
char const QuestSortEntryfmt[]="nxxxxxxxxx";
char const SkillLinefmt[]="nixssssssssxxxxxxxxxxi";
char const SkillLineAbilityfmt[]="niiiixxiiiiixxi";
char const SkillRaceClassInfofmt[]="diiiiixx";
char const SpellCategoryfmt[] = "ni";
char const SpellCastTimefmt[]="nixx";
char const SpellDurationfmt[]="niii";
char const SpellFocusObjectfmt[]="nxxxxxxxxx";
char const SpellItemEnchantmentfmt[]="niiiiiixxxiiissssssssxii";
char const SpellRadiusfmt[]="nfxx";
char const SpellRangefmt[]="nffxxxxxxxxxxxxxxxxxxx";
char const SpellShapeshiftfmt[]="nxxxxxxxxxxiix";
char const StableSlotPricesfmt[] = "ni";
char const TalentEntryfmt[]="niiiiiiiixxxxixxixxxi";
char const TalentTabEntryfmt[]="nxxxxxxxxxxxiix";
char const TaxiNodesEntryfmt[]="nifffssssssssxii";
char const TaxiPathEntryfmt[]="niii";
char const TaxiPathNodeEntryfmt[]="diiifffii";
char const WMOAreaTableEntryfmt[]="niiixxxxxiixxxxxxxxx";
char const WorldMapAreaEntryfmt[]="xinxffff";
//char const WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxxx";
char const WorldSafeLocsEntryfmt[]="nifffxxxxxxxxx";
#endif

#endif
