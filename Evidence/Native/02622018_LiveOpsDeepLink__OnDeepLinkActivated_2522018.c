/* IL2CPP: LiveOpsDeepLink$$OnDeepLinkActivated
void LiveOpsDeepLink__OnDeepLinkActivated (LiveOpsDeepLink_o* __this, DeepLinkActivatedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsDeepLink$$OnDeepLinkActivated
   void LiveOpsDeepLink__OnDeepLinkActivated (LiveOpsDeepLink_o* __this, DeepLinkActivatedMessage_o
   m, const MethodInfo* method); */

void LiveOpsDeepLink__OnDeepLinkActivated_2522018(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be7a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9820);
    FUN_021f03f8(PTR_DAT_049c9828);
    FUN_021f03f8(PTR_DAT_049c9830);
    FUN_021f03f8(PTR_DAT_049c9838);
    FUN_021f03f8(PTR_DAT_049c4108);
    FUN_021f03f8(PTR_DAT_049c9840);
    FUN_021f03f8(PTR_DAT_049c9848);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be7a = 1;
  }
  puVar5 = PTR_DAT_049c9830;
  puVar3 = PTR_DAT_049c9828;
  puVar4 = PTR_DAT_049c9820;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&uStack_80,*(undefined8 *)PTR_DAT_049c9840);
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  do {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar3);
    if ((uVar8 & 1) == 0) goto LAB_02622238;
    lVar12 = *(long *)puVar5;
    lVar9 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_80,uVar11,uVar1);
    uVar6 = uStack_78;
    uVar11 = uStack_80;
  } while ((int)uStack_80 != 0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = GameMachine__IsInState_object__261a580
                    (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_049c4108);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = GameMachine__IsInState_object__261a580
                      (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_049c9838);
    puVar3 = PTR_DAT_049b5310;
    if ((uVar8 & 1) != 0) {
      lVar10 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        lVar10 = *(long *)puVar3;
      }
      iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar10 + 0xb8) + 0x60,0);
      if (1 < iVar7) {
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_40 = uVar11;
        uStack_38 = uVar6;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_80,&uStack_40,*(undefined8 *)PTR_DAT_049c9848);
        *(undefined8 *)(param_1 + 0x50) = uStack_70;
        *(undefined8 *)(param_1 + 0x48) = uStack_78;
        *(undefined8 *)(param_1 + 0x40) = uStack_80;
        thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),0);
      }
    }
  }
  else {
    LiveOpsDeepLink__HandleDeepLink_2521efc(param_1,uVar11,uVar6);
  }
LAB_02622238:
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_60,*(undefined8 *)puVar4);
  return;
}

