/* IL2CPP: FeatureTutorial.<Play>d__4$$MoveNext
void FeatureTutorial__Play_d__4__MoveNext (FeatureTutorial__Play_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FeatureTutorial.<Play>d__4$$MoveNext
   void FeatureTutorial__Play_d__4__MoveNext (FeatureTutorial__Play_d__4_o __this, const MethodInfo*
   method); */

void FeatureTutorial__Play_d__4__MoveNext_249089c(int *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4ba68 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5ec0);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c2ea0);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049c2eb0);
    FUN_021f03f8(PTR_DAT_049c5ec8);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c2ec8);
    FUN_021f03f8(PTR_DAT_049c2ed0);
    FUN_021f03f8(PTR_DAT_049c5ed0);
    bRam0000000004f4ba68 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_68 = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar13 = *(long *)(param_1 + 8);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar13 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Features__Get_24fb17c(&uStack_90,*(long *)(lVar13 + 0xb0),*(undefined4 *)(lVar13 + 0xc0),0);
    if (*(long *)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = CONCAT44(uStack_7c,uStack_80);
    uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar13 + 0xc0));
    lVar5 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                      (lVar5,&uStack_90,*(undefined8 *)PTR_DAT_049c5ec8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2eb0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
    uVar6 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar9 + 0x80));
    puVar3 = PTR_DAT_049c2ea0;
    func_0x04608620(&uStack_90,uVar6,uVar1);
    uStack_88 = 0xffffffffffffffff;
    uStack_80 = (undefined4)uStack_90;
    uStack_90 = *(ulong *)puVar3;
    lVar5 = System_Enum__ToString_3135e00(&uStack_90,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = System_String__ToLowerInvariant_2f81e54(lVar5,0);
    puVar3 = PTR_DAT_049c2ed0;
    uVar7 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c2ed0,uVar6,*(undefined8 *)PTR_DAT_049c2ec8,0);
    if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = Localization__Get_252dbe0(uVar7,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar13,0x91273900,uVar7,0);
    uVar6 = System_String__Concat_2f7d424
                      (*(undefined8 *)puVar3,uVar6,*(undefined8 *)PTR_DAT_049c5ed0,0);
    uVar6 = Localization__Get_252dbe0(uVar6,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar13,0x993134c1,uVar6,0);
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(lVar13,0x1a9a2c8b,0)
    ;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8(lVar5,uVar2,0);
    lVar5 = UnityEngine_Component__get_transform_3c18724(lVar5,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (fStack_78 * *(float *)(lVar10 + 0xc),fStack_78 * *(float *)(lVar10 + 0x10),
               fStack_78 * *(float *)(lVar10 + 0x14),lVar5,0);
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                      (lVar13,0x39cfe44a,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = *(long *)(lVar13 + 0x30);
    plVar9 = (long *)UnityEngine_Component__get_transform_3c18724(lVar5,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else if (*plVar9 != *(long *)PTR_DAT_049bc0c8) {
      plVar9 = (long *)0x0;
    }
    Monitors__SetClickableArea_256ec2c(lVar13,plVar9,0);
    auStack_50 = Cysharp_Threading_Tasks_UnityAsyncExtensions__OnClickAsync_3806d0c
                           (lVar5,*(undefined8 *)(param_1 + 10),0);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    uVar6 = auStack_50._8_8_;
    uVar2 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar2 != (long *)0x0) {
      lVar13 = *(long *)uVar2;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02590cc4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_02590cc4:
      iVar4 = (*(code *)*puVar8)(uVar2,uVar6 & 0xffffffff,puVar8[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235bb44(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c5ec0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_60._0_8_;
    uVar14 = auStack_60._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02590d5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02590d5c:
    (*(code *)*puVar8)(uVar2,uVar14,puVar8[1]);
  }
  puVar3 = PTR_DAT_049b5570;
  *param_1 = -2;
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  FUN_0235bed4(param_1 + 2,&uStack_90,*(undefined8 *)puVar3);
  return;
}

