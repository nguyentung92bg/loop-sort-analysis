/* IL2CPP: WeeklyMissionSheet.Elem$$PostLoad
void WeeklyMissionSheet_Elem__PostLoad (WeeklyMissionSheet_Elem_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionSheet.Elem$$PostLoad
   void WeeklyMissionSheet_Elem__PostLoad (WeeklyMissionSheet_Elem_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void WeeklyMissionSheet_Elem__PostLoad_2569c68(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uStack_48;
  
  if ((bRam0000000004f4c188 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049cbdd0);
    FUN_021f03f8(PTR_DAT_049c2c78);
    bRam0000000004f4c188 = 1;
  }
  Cathei_BakingSheet_SheetRowElem__PostLoad_22dfde8(param_1,param_2,0);
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar5 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),0x3a,0,0),
     puVar3 = PTR_DAT_049cbdd0, puVar2 = PTR_DAT_049b3bd0, lVar5 == 0)) {
LAB_02669e74:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
      FUN_021f0574();
    }
    System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
              (uVar8,1,&uStack_48,*(undefined8 *)puVar3);
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      uVar9 = uStack_48 & 0xffffffff;
      uVar7 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
      lVar5 = System_Int32__Parse_30fbf68(uVar7,uVar8,0);
      *(ulong *)(param_1 + 0x28) = uVar9 | lVar5 << 0x20;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar5 = System_String__Split_2f802dc(*(long *)(param_1 + 0x20),10,0,0),
         puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, lVar5 != 0)) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar10 = 0;
          do {
            if (uVar1 <= uVar10) goto LAB_02669e78;
            lVar6 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if ((lVar6 == 0) || (lVar6 = System_String__Split_2f802dc(lVar6,0x3a,0,0), lVar6 == 0))
            goto LAB_02669e74;
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_02669e78;
            uVar8 = *(undefined8 *)(lVar6 + 0x20);
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar8,1,&uStack_48,*(undefined8 *)puVar4);
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_02669e78;
            uVar9 = uStack_48 & 0xffffffff;
            uVar7 = *(undefined8 *)(lVar6 + 0x28);
            uVar8 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
            lVar6 = System_Int32__Parse_30fbf68(uVar7,uVar8,0);
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_02669e74;
            uStack_48 = uVar9 | lVar6 << 0x20;
            FUN_02333498(*(long *)(param_1 + 0x30),&uStack_48,*(undefined8 *)puVar3);
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar1);
        }
        return;
      }
      goto LAB_02669e74;
    }
  }
LAB_02669e78:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

