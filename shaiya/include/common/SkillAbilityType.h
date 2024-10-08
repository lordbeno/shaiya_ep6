#pragma once
#include <shaiya/include/common.h>

namespace shaiya
{
    enum struct SkillAbilityType : UINT8
    {
        MaxHealth = 1,
        MaxMana,
        MaxStamina,
        AbilityStrength,
        AbilityReaction,
        AbilityIntelligence,
        AbilityWisdom,
        AbilityDexterity,
        AbilityLuck,
        AddHpRecovery,
        AddSpRecovery,
        AddMpRecovery,
        DecreaseSpCostPercentage,
        DecreaseMpCostPercentage,
        AbilityAttackRange,
        AbilityAttackSpeed,
        AbilityMoveSpeed,
        AbilityCriticalHitRate,
        DecreaseSkillResetTime,
        AbilityHitRate,
        AbilityRangedHitRate,
        AbilityMagicHitRate,
        AbilityAttackPower,
        AbilityRangedAttackPower,
        AbilityMagicPower,
        AbilityAddDefense,
        AbilityAddRangedDefense,
        AbilityAddMagicResistance,
        AbilityEvasionRate,
        AbilityRangedEvasionRate,
        AbilityMagicEvasionRate,
        AttackBlinded,
        RangedAttackBlinded,
        Silenced,
        MultiplyExp,
        EternalEndurance,
        PreventItemDrop,
        PreventExpLoss,
        RecallWarehouse,
        WhiteTigerCharm,
        BlueDragonCharm,
        RedPhoenixCharm,
        DoubleWarehouse,
        IncreaseGoldDrop,
        PreventEquipmentDrop,
        ContinuousResurrection,
        BattlefieldRune,
        AbilityAbsorption,
        AbilityStrRecIntWisDexLuc,
        EnableEnterDungeon,
        DisableEnterDungeon,
        StrToMaxHealth,
        RecToMaxHealth,
        IntToMaxHealth,
        WisToMaxHealth,
        DexToMaxHealth,
        LucToMaxHealth,
        DecreaseHpByPercentage = 70,
        AbilityAddDefensePercentage = 73,
        AbilityAddRangedDefensePercentage,
        AbilityAddMagicResistancePercentage = 78,
        MultiplyQuestExp = 87
    };
}
