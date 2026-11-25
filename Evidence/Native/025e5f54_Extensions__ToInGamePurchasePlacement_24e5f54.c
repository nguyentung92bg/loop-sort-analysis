/* IL2CPP: Extensions$$ToInGamePurchasePlacement
System_String_o* Extensions__ToInGamePurchasePlacement (int32_t booster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToInGamePurchasePlacement
   System_String_o* Extensions__ToInGamePurchasePlacement (int32_t booster, const MethodInfo*
   method); */

long Extensions__ToInGamePurchasePlacement_24e5f54(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c7ba0);
    FUN_021f03f8(PTR_DAT_049c7ba8);
    bRam0000000004f4bc87 = 1;
  }
  puVar4 = PTR_DAT_049c7ba8;
  puVar3 = PTR_DAT_049c7ba0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = Extensions__ToAnalyticsName_24e5df4(param_1);
  lVar9 = *(long *)puVar3;
  lVar8 = *(long *)puVar4;
  lVar6 = lVar5;
  lVar7 = lVar8;
  if (((((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) && (lVar6 = lVar9, lVar5 != 0)) &&
      ((*(int *)(lVar5 + 0x10) != 0 && (lVar7 = lVar5, lVar8 != 0)))) &&
     (*(int *)(lVar8 + 0x10) != 0)) {
    lVar6 = thunk_FUN_0222a544(*(int *)(lVar5 + 0x10) + *(int *)(lVar9 + 0x10) +
                               *(int *)(lVar8 + 0x10),lVar5,lVar8,0);
    System_String__FillStringChecked_2f7d2e8(lVar6,0,lVar9);
    System_String__FillStringChecked_2f7d2e8(lVar6,*(undefined4 *)(lVar9 + 0x10),lVar5);
    System_String__FillStringChecked_2f7d2e8
              (lVar6,*(int *)(lVar5 + 0x10) + *(int *)(lVar9 + 0x10),lVar8);
    return lVar6;
  }
  if ((lVar6 == 0) || (iVar1 = *(int *)(lVar6 + 0x10), iVar1 == 0)) {
    if ((lVar7 == 0) || (lVar6 = lVar7, *(int *)(lVar7 + 0x10) == 0)) {
      lVar6 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
  }
  else if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) {
    lVar5 = thunk_FUN_0222a544(*(int *)(lVar7 + 0x10) + iVar1,lVar7,lVar8,0);
    System_String__FillStringChecked_2f7d2e8(lVar5,0,lVar6);
    System_String__FillStringChecked_2f7d2e8(lVar5,iVar1,lVar7);
    lVar6 = lVar5;
  }
  return lVar6;
}

