/* IL2CPP: ConsoleMethods$$SetLevel
void ConsoleMethods__SetLevel (int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetLevel
   void ConsoleMethods__SetLevel (int32_t index, const MethodInfo* method); */

void ConsoleMethods__SetLevel_24f2768(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  long lStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4bcfc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
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
  puVar1 = PTR_DAT_049c7f20;
  puVar2 = PTR_DAT_049b5310;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (param_1 < 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_049b5310;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar2;
  }
  CloudPrefsInt__Set_24e9aa8(*(long *)(lVar8 + 0xb8) + 0x60,param_1);
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar2 + 0xb8) + 0x80,param_1 + 1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4bd9b == '\0') {
    FUN_021f03f8(PTR_DAT_049c7f20);
    cRam0000000004f4bd9b = '\x01';
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049b5228;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x18))
              (*(undefined8 *)(lVar8 + 0x40),&lStack_80,*(undefined8 *)(lVar8 + 0x28));
    lVar8 = lStack_80;
    if (lStack_80 != 0) {
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
        lVar9 = *(long *)puVar2;
      }
      CloudPrefsInt__WriteTo_24e9c00(*(long *)(lVar9 + 0xb8) + 0x60,lVar8);
      CloudPrefsInt__WriteTo_24e9c00(*(long *)(*(long *)puVar2 + 0xb8) + 0x80,lVar8);
    }
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar9 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar9 + 0x50),&lStack_80,*(undefined8 *)PTR_DAT_049b5f78);
    puVar7 = PTR_DAT_049c8250;
    puVar6 = PTR_DAT_049c8248;
    puVar5 = PTR_DAT_049c4e90;
    puVar4 = PTR_DAT_049c43f8;
    puVar3 = PTR_DAT_049c43f0;
    puVar1 = PTR_DAT_049c43e8;
    puVar2 = PTR_DAT_049c39c8;
    auVar13._8_8_ = auStack_70._8_8_;
    auVar13._0_8_ = auStack_70._0_8_;
    if ((lStack_80 != 0) && (auStack_70 = auVar13, *(long *)(lStack_80 + 0x50) != 0)) {
      auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (*(long *)(lStack_80 + 0x50),*(undefined8 *)PTR_DAT_049c4410);
      puStack_78 = auStack_70;
      lStack_80 = 0;
      while( true ) {
        uVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_70,*(undefined8 *)puVar3);
        if ((uVar10 & 1) == 0) break;
        lVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_70,*(undefined8 *)puVar4);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        piVar12 = (int *)thunk_FUN_0224e54c(lVar11,*(long *)(**(long **)(*(long *)(*(long *)puVar2 +
                                                                                  0x20) + 0xc0) +
                                                            0x80) + 0x20);
        if ((0 < *piVar12) && (param_1 < *(int *)(lVar11 + 0x24))) {
          AreaSheet_Row__Relock_2558854(lVar11,lVar8,0);
        }
      }
      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                (auStack_70,*(undefined8 *)puVar1);
      FUN_0235c744(*(undefined8 *)(lVar9 + 0x50),&lStack_80,*(undefined8 *)puVar6);
      lVar8 = lStack_80;
      if (lStack_80 != 0) {
        CloudSaveModule__MarkDirty_24ed184(lStack_80);
        auVar13 = CloudSaveModule__FlushDirty_24ee1e8(lVar8);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268(auVar13._0_8_,auVar13._8_8_,0);
        FUN_0235c744(*(undefined8 *)(lVar9 + 0x50),&lStack_80,*(undefined8 *)puVar7);
        if (lStack_80 != 0) {
          FUN_02568dec(lStack_80,*(undefined8 *)PTR_DAT_049c5f58,0,0,*(undefined8 *)puVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

