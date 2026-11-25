/* IL2CPP: PlayingMonitor$$OnDebugNextLevelClicked
void PlayingMonitor__OnDebugNextLevelClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnDebugNextLevelClicked
   void PlayingMonitor__OnDebugNextLevelClicked (PlayingMonitor_o* __this, const MethodInfo*
   method); */

void PlayingMonitor__OnDebugNextLevelClicked_24514b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  iVar9 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x160,0);
  iVar1 = iVar9 + 1;
  if ((bRam0000000004f4bcfc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20,0);
    FUN_021f03f8(PTR_DAT_049c43e8);
    FUN_021f03f8(PTR_DAT_049c43f0);
    FUN_021f03f8(PTR_DAT_049c43f8);
    FUN_021f03f8(PTR_DAT_049c8248);
    FUN_021f03f8(PTR_DAT_049c8250);
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c39c8);
    FUN_021f03f8(PTR_DAT_049c4410);
    FUN_021f03f8(PTR_DAT_049c4e90);
    FUN_021f03f8(PTR_DAT_049c5f58);
    bRam0000000004f4bcfc = 1;
  }
  puVar2 = PTR_DAT_049c7f20;
  puVar3 = PTR_DAT_049b5310;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (iVar1 < 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_049b5310;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar3;
  }
  CloudPrefsInt__Set_24e9aa8(*(long *)(lVar10 + 0xb8) + 0x60,iVar1);
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar3 + 0xb8) + 0x80,iVar9 + 2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4bd9b == '\0') {
    FUN_021f03f8(PTR_DAT_049c7f20);
    cRam0000000004f4bd9b = '\x01';
  }
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_049b5228;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),&lStack_80,*(undefined8 *)(lVar10 + 0x28));
    lVar10 = lStack_80;
    if (lStack_80 != 0) {
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar3;
      }
      CloudPrefsInt__WriteTo_24e9c00(*(long *)(lVar11 + 0xb8) + 0x60,lVar10);
      CloudPrefsInt__WriteTo_24e9c00(*(long *)(*(long *)puVar3 + 0xb8) + 0x80,lVar10);
    }
  }
  puVar3 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar11 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar3);
  if (lVar11 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar11 + 0x50),&lStack_80,*(undefined8 *)PTR_DAT_049b5f78);
    puVar8 = PTR_DAT_049c8250;
    puVar7 = PTR_DAT_049c8248;
    puVar6 = PTR_DAT_049c4e90;
    puVar5 = PTR_DAT_049c43f8;
    puVar4 = PTR_DAT_049c43f0;
    puVar2 = PTR_DAT_049c43e8;
    puVar3 = PTR_DAT_049c39c8;
    auVar15._8_8_ = auStack_70._8_8_;
    auVar15._0_8_ = auStack_70._0_8_;
    if ((lStack_80 != 0) && (auStack_70 = auVar15, *(long *)(lStack_80 + 0x50) != 0)) {
      auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (*(long *)(lStack_80 + 0x50),*(undefined8 *)PTR_DAT_049c4410);
      puStack_78 = auStack_70;
      lStack_80 = 0;
      while( true ) {
        uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_70,*(undefined8 *)puVar4);
        if ((uVar12 & 1) == 0) break;
        lVar13 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_70,*(undefined8 *)puVar5);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        piVar14 = (int *)thunk_FUN_0224e54c(lVar13,*(long *)(**(long **)(*(long *)(*(long *)puVar3 +
                                                                                  0x20) + 0xc0) +
                                                            0x80) + 0x20);
        if ((0 < *piVar14) && (iVar1 < *(int *)(lVar13 + 0x24))) {
          AreaSheet_Row__Relock_2558854(lVar13,lVar10,0);
        }
      }
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_70,*(undefined8 *)puVar2);
      FUN_0235c744(*(undefined8 *)(lVar11 + 0x50),&lStack_80,*(undefined8 *)puVar7);
      lVar10 = lStack_80;
      if (lStack_80 != 0) {
        CloudSaveModule__MarkDirty_24ed184(lStack_80);
        auVar15 = CloudSaveModule__FlushDirty_24ee1e8(lVar10);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268(auVar15._0_8_,auVar15._8_8_,0);
        FUN_0235c744(*(undefined8 *)(lVar11 + 0x50),&lStack_80,*(undefined8 *)puVar8);
        if (lStack_80 != 0) {
          FUN_02568dec(lStack_80,*(undefined8 *)PTR_DAT_049c5f58,0,0,*(undefined8 *)puVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

