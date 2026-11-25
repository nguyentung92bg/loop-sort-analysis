/* IL2CPP: AdjustEventSheet$$TryGetIapCumulativeTokens
bool AdjustEventSheet__TryGetIapCumulativeTokens (AdjustEventSheet_o* __this, float totalSpending, System_Collections_Generic_List_string__o* tokens, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetIapCumulativeTokens
   bool AdjustEventSheet__TryGetIapCumulativeTokens (AdjustEventSheet_o* __this, float
   totalSpending, System_Collections_Generic_List_string__o* tokens, const MethodInfo* method); */

bool AdjustEventSheet__TryGetIapCumulativeTokens_2556f54(float param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_2 + 0x50);
  if ((bRam0000000004f4c0ab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4138);
    FUN_021f03f8(PTR_DAT_049b72e8);
    FUN_021f03f8(PTR_DAT_049cb210);
    FUN_021f03f8(PTR_DAT_049b3c18);
    FUN_021f03f8(PTR_DAT_049cb218);
    bRam0000000004f4c0ab = 1;
  }
  if (param_3 != 0) {
    lVar5 = *(long *)PTR_DAT_049b72e8;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    uVar3 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x18);
      *(undefined4 *)(param_3 + 0x18) = 0;
      if (0 < iVar6) {
        System_Array__Clear_31229cc(*(undefined8 *)(param_3 + 0x10),0,iVar6,0);
      }
    }
    puVar2 = PTR_DAT_049cb218;
    puVar1 = PTR_DAT_049b4138;
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar6 = 0;
        do {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar4,iVar6,aiStack_50,*(undefined8 *)puVar2);
          if (param_1 < (float)aiStack_50[0]) break;
          FUN_02333498(param_3,uStack_48,*(undefined8 *)puVar1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar4 + 0x18));
      }
      return 0 < *(int *)(param_3 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

