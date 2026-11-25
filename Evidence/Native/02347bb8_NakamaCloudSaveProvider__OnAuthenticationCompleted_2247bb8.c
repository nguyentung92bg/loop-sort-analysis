/* IL2CPP: NakamaCloudSaveProvider$$OnAuthenticationCompleted
void NakamaCloudSaveProvider__OnAuthenticationCompleted (NakamaCloudSaveProvider_o* __this, System_String_o* userId, bool recovered, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x039227a0) */
/* WARNING: Removing unreachable block (ram,0x0392275c) */
/* WARNING: Removing unreachable block (ram,0x03922770) */
/* WARNING: Removing unreachable block (ram,0x03922774) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: NakamaCloudSaveProvider$$OnAuthenticationCompleted
   void NakamaCloudSaveProvider__OnAuthenticationCompleted (NakamaCloudSaveProvider_o* __this,
   System_String_o* userId, bool recovered, const MethodInfo* method); */

void NakamaCloudSaveProvider__OnAuthenticationCompleted_2247bb8(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined4 uStack_c4;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_34 [4];
  
  puVar5 = PTR_DAT_049b5878;
  puVar4 = PTR_DAT_049b5138;
  puVar3 = PTR_DAT_049b4308;
                    /* try { // try from 02347bc0 to 02447c47 has its CatchHandler @ 02347a18 */
  if ((bRam0000000004f49b57 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b5878);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b57 = 1;
  }
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___ctor_306b98c(uVar7,param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b5778;
                    /* try { // try from 02347c48 to 02447c4f has its CatchHandler @ 02347c7c */
                    /* try { // try from 02347c50 to 02447c8f has its CatchHandler @ 02347a18 */
  if ((bRam0000000004f5350d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5778,8,0);
    bRam0000000004f5350d = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b5778;
  if ((bRam0000000004f534c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5778);
    bRam0000000004f534c5 = 1;
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_049cf348;
  lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(uint *)(lVar13 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  lVar13 = *(long *)(lVar13 + 0x60);
  if (lVar13 != 0) {
    if ((bRam0000000004f539ca & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a130a8,uVar7,0);
      FUN_021f03f8(PTR_DAT_049cf348);
      bRam0000000004f539ca = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    System_Threading_SpinLock__Enter_31695f4(lVar13 + 0x14,auStack_34,0);
    if (*(char *)(lVar13 + 0x18) == '\0') {
      lVar8 = *(long *)(lVar13 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar13 + 0x1c) == *(int *)(lVar8 + 0x18)) {
        uVar1 = *(int *)(lVar13 + 0x1c) << 1;
        if (0x7feffffe < uVar1) {
          uVar1 = 0x7fefffff;
        }
        uVar11 = FUN_021f04e4(*(undefined8 *)PTR_DAT_04a130a8,uVar1);
        System_Array__Copy_3123bf0
                  (*(undefined8 *)(lVar13 + 0x20),uVar11,*(undefined4 *)(lVar13 + 0x1c),0);
        *(undefined8 *)(lVar13 + 0x20) = uVar11;
        thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20),uVar11);
        lVar8 = *(long *)(lVar13 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar13 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      puVar12 = (undefined8 *)(lVar8 + (long)(int)*(uint *)(lVar13 + 0x1c) * 8 + 0x20);
      *puVar12 = uVar7;
      thunk_FUN_021f190c(puVar12,uVar7);
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    }
    else {
      lVar8 = *(long *)(lVar13 + 0x30);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar13 + 0x28) == *(int *)(lVar8 + 0x18)) {
        uVar1 = *(int *)(lVar13 + 0x28) << 1;
        if (0x7feffffe < uVar1) {
          uVar1 = 0x7fefffff;
        }
        uVar11 = FUN_021f04e4(*(undefined8 *)PTR_DAT_04a130a8,uVar1);
        System_Array__Copy_3123bf0
                  (*(undefined8 *)(lVar13 + 0x30),uVar11,*(undefined4 *)(lVar13 + 0x28),0);
        *(undefined8 *)(lVar13 + 0x30) = uVar11;
        thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x30),uVar11);
        lVar8 = *(long *)(lVar13 + 0x30);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar13 + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      puVar12 = (undefined8 *)(lVar8 + (long)(int)*(uint *)(lVar13 + 0x28) * 8 + 0x20);
      *puVar12 = uVar7;
      thunk_FUN_021f190c(puVar12,uVar7);
      *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + 1;
    }
    return;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Cysharp_Threading_Tasks_PlayerLoopHelper__ThrowInvalidLoopTiming_37c57cc(8);
  puVar3 = PTR_DAT_049b4b60;
  if ((bRam0000000004f534c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b4b60);
    FUN_021f03f8(PTR_DAT_04a112a8);
    FUN_021f03f8(PTR_DAT_049b4de0);
    FUN_021f03f8(PTR_DAT_04a112b0);
    FUN_021f03f8(PTR_DAT_04a112b8);
    FUN_021f03f8(PTR_DAT_04a112c0);
    bRam0000000004f534c6 = 1;
  }
  uStack_a0 = 0;
  uStack_c4 = 0;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  UnityEngine_LowLevel_PlayerLoop__GetCurrentPlayerLoop_3c34d74(auStack_f0,0);
  plVar9 = (long *)thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Text_StringBuilder___ctor_2f8ab2c(plVar9,0);
  if ((plVar9 != (long *)0x0) &&
     (System_Text_StringBuilder__AppendLine_2f8c724(plVar9,*(undefined8 *)PTR_DAT_04a112c0,0),
     puVar5 = PTR_DAT_04a112b0, puVar4 = PTR_DAT_049b4de0, puVar3 = PTR_DAT_049b3c58, lStack_e8 != 0
     )) {
    if (0 < (int)*(ulong *)(lStack_e8 + 0x18)) {
      uVar15 = 0;
      uVar14 = *(ulong *)(lStack_e8 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar15) {
LAB_038c5bcc:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar8 = lStack_e8 + uVar15 * 0x28;
        plStack_b8 = *(long **)(lVar8 + 0x28);
        plStack_c0 = *(long **)(lVar8 + 0x20);
        uStack_a8 = *(undefined8 *)(lVar8 + 0x38);
        uStack_b0 = *(undefined8 *)(lVar8 + 0x30);
        uStack_a0 = *(undefined8 *)(lVar8 + 0x40);
        if (plStack_c0 == (long *)0x0) goto LAB_038c5bc8;
        uVar7 = (**(code **)(*plStack_c0 + 0x1b8))(plStack_c0,*(undefined8 *)(*plStack_c0 + 0x1c0));
        System_Text_StringBuilder__AppendFormat_2f8d244
                  (plVar9,*(undefined8 *)PTR_DAT_04a112b8,uVar7,0);
        System_Text_StringBuilder__AppendLine_2f8c704(plVar9,0);
        plVar6 = plStack_b8;
        if (plStack_b8 == (long *)0x0) {
          uVar7 = UnityEngine_LowLevel_PlayerLoopSystem__ToString_3c34ca8(&plStack_c0,0);
          System_Text_StringBuilder__AppendFormat_2f8d244
                    (plVar9,*(undefined8 *)PTR_DAT_04a112a8,uVar7,0);
          System_Text_StringBuilder__AppendLine_2f8c704(plVar9,0);
        }
        else {
          uVar1 = *(uint *)(plStack_b8 + 3);
          if (0 < (int)uVar1) {
            uVar16 = 0;
            plVar2 = plStack_b8;
            do {
              if (uVar1 <= uVar16) goto LAB_038c5bcc;
              plVar10 = (long *)plVar2[4];
              if (plVar10 == (long *)0x0) goto LAB_038c5bc8;
              lVar8 = plVar2[5];
              uVar7 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              System_Text_StringBuilder__AppendFormat_2f8d244(plVar9,*(undefined8 *)puVar4,uVar7,0);
              System_Text_StringBuilder__AppendLine_2f8c704(plVar9,0);
              if (lVar8 != 0) {
                uStack_c4 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
                uVar7 = System_Int32__ToString_30fbaa0(&uStack_c4,0);
                uVar7 = System_String__Concat_2f72b28(*(undefined8 *)puVar5,uVar7,0);
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  FUN_021f0574(lVar8);
                }
                UnityEngine_Debug__LogWarning_3bcf90c(uVar7,0);
              }
              uVar1 = *(uint *)(plVar6 + 3);
              uVar16 = uVar16 + 1;
              plVar2 = plVar2 + 5;
            } while ((int)uVar16 < (int)uVar1);
          }
        }
        uVar14 = (ulong)*(uint *)(lStack_e8 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)(int)*(uint *)(lStack_e8 + 0x18));
    }
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574(lVar8);
    }
    UnityEngine_Debug__Log_3bd0be4(uVar7,0);
    return;
  }
LAB_038c5bc8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

