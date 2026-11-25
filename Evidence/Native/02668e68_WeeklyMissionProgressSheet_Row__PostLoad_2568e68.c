/* IL2CPP: WeeklyMissionProgressSheet.Row$$PostLoad
void WeeklyMissionProgressSheet_Row__PostLoad (WeeklyMissionProgressSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionProgressSheet.Row$$PostLoad
   void WeeklyMissionProgressSheet_Row__PostLoad (WeeklyMissionProgressSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void WeeklyMissionProgressSheet_Row__PostLoad_2568e68(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar5 = PTR_DAT_049cbd88;
  puVar4 = PTR_DAT_049cb430;
  puVar3 = PTR_DAT_049c2cf0;
  if ((bRam0000000004f4c182 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049cb430);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cbd88);
    bRam0000000004f4c182 = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar4);
  plVar9 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
  uVar6 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar9 + 0x80));
  func_0x04608620(&uStack_70,uVar6,uVar1);
  puVar3 = PTR_DAT_049b3bd0;
  uStack_44 = (undefined4)uStack_70;
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_44);
  uVar6 = System_String__Format_2f73700(*(undefined8 *)puVar5,uVar6,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  CloudPrefsBool___ctor_24eafb8(&uStack_70,uVar6,0,0,0);
  *(undefined8 *)(param_1 + 0x30) = uStack_68;
  *(ulong *)(param_1 + 0x28) = uStack_70;
  *(undefined8 *)(param_1 + 0x40) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_60;
  thunk_FUN_021f190c(param_1 + 0x30,0);
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar7 = System_String__Split_2f802dc(*(long *)(param_1 + 0x20),10,0,0),
     puVar5 = PTR_DAT_049caa68, puVar4 = PTR_DAT_049c2c78, lVar7 != 0)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      uVar12 = 0;
      do {
        if (uVar2 <= uVar12) {
LAB_026690b0:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar8 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar8 = System_String__Split_2f802dc(lVar8,0x3a,0,0), lVar8 == 0))
        goto LAB_026690ac;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_026690b0;
        uVar6 = *(undefined8 *)(lVar8 + 0x20);
        if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                  (uVar6,1,&uStack_70,*(undefined8 *)puVar5);
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_026690b0;
        uVar11 = uStack_70 & 0xffffffff;
        uVar10 = *(undefined8 *)(lVar8 + 0x28);
        uVar6 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
        lVar8 = System_Int32__Parse_30fbf68(uVar10,uVar6,0);
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_026690ac;
        uStack_70 = uVar11 | lVar8 << 0x20;
        FUN_02333498(*(long *)(param_1 + 0x48),&uStack_70,*(undefined8 *)puVar4);
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar2);
    }
    return;
  }
LAB_026690ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

