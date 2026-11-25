/* IL2CPP: HomeMonitor$$UpdateLiveOpsIcons
void HomeMonitor__UpdateLiveOpsIcons (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$UpdateLiveOpsIcons
   void HomeMonitor__UpdateLiveOpsIcons (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__UpdateLiveOpsIcons_2447a3c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4b872 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4390);
    FUN_021f03f8(PTR_DAT_049c4398);
    FUN_021f03f8(PTR_DAT_049c43a0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c43a8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b872 = 1;
  }
  puVar7 = PTR_DAT_049c43a0;
  puVar6 = PTR_DAT_049c4398;
  puVar5 = PTR_DAT_049c4390;
  puVar4 = PTR_DAT_049b6110;
  puVar3 = PTR_DAT_049b3b98;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x1c0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x1c0),&uStack_98,*(undefined8 *)PTR_DAT_049c43a8);
  uStack_50 = uStack_78;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  while( true ) {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar6);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar5);
      return;
    }
    lVar14 = *(long *)puVar7;
    lVar9 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_98,uVar11,uVar1);
    uVar11 = uStack_90;
    uVar8 = uStack_98;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    plVar12 = (long *)Extensions__ToClassInstance_24e79d0(uVar8 & 0xffffffff,0);
    if (plVar12 == (long *)0x0) break;
    uVar13 = (**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                         (uVar11,0x1a9a2c8b,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_UI_Image__set_sprite_3cee6e8(lVar10,uVar13,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

