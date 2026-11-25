/* IL2CPP: ProfileEditMonitor.<SaveProfileAsync>d__15$$MoveNext
void ProfileEditMonitor__SaveProfileAsync_d__15__MoveNext (ProfileEditMonitor__SaveProfileAsync_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02555e14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: ProfileEditMonitor.<SaveProfileAsync>d__15$$MoveNext
   void ProfileEditMonitor__SaveProfileAsync_d__15__MoveNext
   (ProfileEditMonitor__SaveProfileAsync_d__15_o __this, const MethodInfo* method); */

void ProfileEditMonitor__SaveProfileAsync_d__15__MoveNext_2455b20(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined1 auStack_60 [16];
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
  if ((bRam0000000004f4b8f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4a30);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b8f0 = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iStack_24 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    iStack_24 = -1;
    *param_1 = -1;
  }
  else {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_40 = ProfileEditMonitor__SaveProfile_2454b68();
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar2 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar8 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02555ca0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02555ca0:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
      if (iVar3 == 0) {
        iStack_24 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c4a30);
        iVar3 = 4;
        goto LAB_02555d50;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_60._0_8_;
    uVar8 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02555d38;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02555d38:
    (*(code *)*puVar4)(uVar2,uVar8,puVar4[1]);
  }
  iVar3 = 5;
LAB_02555d50:
  if (iStack_24 < 0) {
    if (((lStack_48 == 0) ||
        (lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                           (lStack_48,0xb4ce0c4e,0), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar5,1,0);
  }
  if ((iVar3 == 0) || (iVar3 == 5)) {
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
  }
  return;
}

