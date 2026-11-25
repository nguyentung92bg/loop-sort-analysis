/* IL2CPP: BoosterTutorial.<Play>d__4$$MoveNext
void BoosterTutorial__Play_d__4__MoveNext (BoosterTutorial__Play_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterTutorial.<Play>d__4$$MoveNext
   void BoosterTutorial__Play_d__4__MoveNext (BoosterTutorial__Play_d__4_o __this, const MethodInfo*
   method); */

void BoosterTutorial__Play_d__4__MoveNext_2490104(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4ba64 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5ea0);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049c5ea8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba64 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*param_1 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar12 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Boosters__Get_24e5ab0(&uStack_c0,*(long *)(lVar12 + 0xb0),*(undefined4 *)(lVar12 + 0xc0),0);
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_58 = uStack_a8;
    uStack_60 = uStack_b0;
    if (*(long *)(lVar12 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar12 + 0xc0));
    lVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                      (lVar6,&uStack_c0,*(undefined8 *)PTR_DAT_049c5ea8);
    puVar2 = PTR_DAT_049b6118;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
    puVar3 = PTR_DAT_049b6110;
    func_0x04608620(&uStack_c0,uVar7,uVar1);
    uVar10 = uStack_c0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = Extensions__ToLocalizedName_24e5fe8(uVar10 & 0xffffffff,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar12,0x91273900,uVar7,0);
    plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
    func_0x04608620(&uStack_c0,uVar7,uVar1);
    uVar7 = Extensions__ToLocalizedDesc_24e60d4(uStack_c0 & 0xffffffff,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar12,0x993134c1,uVar7,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
              (lVar12,0x13d626de,uStack_a0,0);
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_d8 = uStack_60;
    uStack_e0 = uStack_68;
    uStack_d0 = uStack_58;
    StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a34
              (lVar12,0x1a9a2c8b,&uStack_e0,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                      (lVar12,0x39cfe44a,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *(long *)(lVar12 + 0x30);
    plVar9 = (long *)UnityEngine_Component__get_transform_3c18724(lVar6,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else if (*plVar9 != *(long *)PTR_DAT_049bc0c8) {
      plVar9 = (long *)0x0;
    }
    Monitors__SetClickableArea_256ec2c(lVar12,plVar9,0);
    auStack_50 = Cysharp_Threading_Tasks_UnityAsyncExtensions__OnClickAsync_3806d0c
                           (lVar6,*(undefined8 *)(param_1 + 10),0);
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    uVar4 = auStack_50._8_8_;
    uVar7 = auStack_50._0_8_;
    auStack_80 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar7 != (long *)0x0) {
      lVar12 = *(long *)uVar7;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02590480;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar7,*(long *)PTR_DAT_049b54e0,0);
LAB_02590480:
      iVar5 = (*(code *)*puVar8)(uVar7,uVar4 & 0xffffffff,puVar8[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_80;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235bb44(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5ea0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar7 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar12 = *(long *)auStack_80._0_8_;
    uVar13 = auStack_80._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02590518;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02590518:
    (*(code *)*puVar8)(uVar7,uVar13,puVar8[1]);
  }
  puVar2 = PTR_DAT_049b5570;
  *param_1 = -2;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  FUN_0235bed4(param_1 + 2,&uStack_c0,*(undefined8 *)puVar2);
  return;
}

