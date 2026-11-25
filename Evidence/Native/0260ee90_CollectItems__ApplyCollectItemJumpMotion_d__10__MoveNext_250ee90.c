/* IL2CPP: CollectItems.<ApplyCollectItemJumpMotion>d__10$$MoveNext
void CollectItems__ApplyCollectItemJumpMotion_d__10__MoveNext (CollectItems__ApplyCollectItemJumpMotion_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CollectItems.<ApplyCollectItemJumpMotion>d__10$$MoveNext
   void CollectItems__ApplyCollectItemJumpMotion_d__10__MoveNext
   (CollectItems__ApplyCollectItemJumpMotion_d__10_o __this, const MethodInfo* method); */

void CollectItems__ApplyCollectItemJumpMotion_d__10__MoveNext_250ee90
               (undefined1 param_1 [16],undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bdef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c91e8);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c91f0);
    FUN_021f03f8(PTR_DAT_049c91f8);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c9200);
    FUN_021f03f8(PTR_DAT_049c9208);
    bRam0000000004f4bdef = 1;
  }
  puVar2 = PTR_DAT_049b6128;
  puVar1 = PTR_DAT_049b5138;
  auStack_60._8_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auVar13 = ZEXT816(0);
  auStack_70._0_8_ = 0;
  if (*param_3 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_3 + 0x10);
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    *param_3 = -1;
  }
  else {
    if (*param_3 == 1) {
      auStack_70 = *(undefined1 (*) [16])(param_3 + 0x10);
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      *param_3 = -1;
      auStack_60 = ZEXT816(0);
      goto LAB_0260f3ec;
    }
    lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c91f8);
    System_Object___ctor_3142338(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar10 = (long *)(lVar7 + 0x20);
    *plVar10 = *(long *)(param_3 + 6);
    thunk_FUN_021f190c(plVar10);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0260efe4 to 0270efeb has its CatchHandler @ 0260f0b0 */
    uVar12 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(*plVar10,0);
    *(undefined4 *)(lVar7 + 0x10) = uVar12;
    *(undefined4 *)(lVar7 + 0x14) = param_2;
    if (cRam0000000004f49d57 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
                    /* try { // try from 0260f004 to 0270f04f has its CatchHandler @ 0260f0b4 */
      cRam0000000004f49d57 = '\x01';
    }
    *(undefined8 *)(lVar7 + 0x18) = **(undefined8 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
    auStack_60 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa8a8,0);
                    /* try { // try from 0260f050 to 0270f05f has its CatchHandler @ 0260ee2c */
    auVar13 = FUN_024f4e50(auStack_60,5,*(undefined8 *)PTR_DAT_049c1358);
                    /* try { // try from 0260f060 to 0270f07b has its CatchHandler @ 0260f0b8 */
    auStack_60 = auVar13;
                    /* try { // try from 0260f07c to 0270f0a3 has its CatchHandler @ 0260ee2c */
    auVar13 = FUN_024f6e90(_UNK_013aa4b8,auStack_60,0,1,*(undefined8 *)PTR_DAT_049c20d8);
    auStack_60 = auVar13;
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
                    /* try { // try from 0260f0a4 to 0270f0a7 has its CatchHandler @ 0260f0ac */
                    /* try { // try from 0260f0a8 to 0270f0d3 has its CatchHandler @ 0260ee2c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260f0a4 with catch @ 0260f0ac
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260efe4 with catch @ 0260f0b0
                        */
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar5,lVar7,*(undefined8 *)PTR_DAT_049c91f0,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260f004 with catch @ 0260f0b4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260f060 with catch @ 0260f0b8
                        */
    auVar13 = FUN_024f6d0c(auStack_60,uVar5,*(undefined8 *)PTR_DAT_049c20a8);
                    /* try { // try from 0260f0d4 to 0270f0d7 has its CatchHandler @ 0260f0f0 */
                    /* try { // try from 0260f0d8 to 0270f0f3 has its CatchHandler @ 0260ee2c */
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 0260f0d4 with catch @ 0260f0f0 */
                    /* try { // try from 0260f0f4 to 0270f0fb has its CatchHandler @ 0260f104 */
    uVar5 = System_TimeSpan__FromSeconds_311711c(0x3fe0000000000000,0);
                    /* try { // try from 0260f0fc to 0270f107 has its CatchHandler @ 0260ee2c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0260f0f4 with catch @ 0260f104
                        */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar5,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar5 = auStack_70._0_8_;
    auVar13 = auStack_60;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0260f1f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0260f1f0:
      iVar4 = (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
      auVar13 = auStack_60;
      if (iVar4 == 0) {
        *param_3 = 0;
        *(undefined1 (*) [16])(param_3 + 0x10) = auStack_70;
        thunk_FUN_021f190c(param_3 + 0x10,0);
        FUN_0235c25c(param_3 + 2,auStack_70,param_3,*(undefined8 *)PTR_DAT_049c91e8);
        return;
      }
    }
  }
  auStack_60 = auVar13;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0260f284;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0260f284:
    (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
  }
  lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetAnimator_3350cf8
                    (*(undefined8 *)(param_3 + 8),0xbcdc2f95,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_References_AnimatorReference__SetTrigger_3345b68
            (lVar7,*(undefined8 *)PTR_DAT_049c9200,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_TimeSpan__FromSeconds_311711c(_UNK_013a76f8,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar13 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar5,0,8,0,0,0);
  auStack_50 = auVar13;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_70 = auStack_50;
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
  uVar5 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0260f3d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0260f3d8:
    iVar4 = (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
    if (iVar4 == 0) {
      *param_3 = 1;
      *(undefined1 (*) [16])(param_3 + 0x10) = auStack_70;
      thunk_FUN_021f190c(param_3 + 0x10,0);
      FUN_0235c25c(param_3 + 2,auStack_70,param_3,*(undefined8 *)PTR_DAT_049c91e8);
      return;
    }
  }
LAB_0260f3ec:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0260f46c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0260f46c:
    (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
  }
  if (*(long *)(param_3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_3 + 8),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetAnimator_3350cf8
                    (*(undefined8 *)(param_3 + 0xc),0xc6b67d06,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_References_AnimatorReference__SetTrigger_3345b68
            (lVar7,*(undefined8 *)PTR_DAT_049c9208,0);
  cVar3 = cRam0000000004f49bfa;
  *param_3 = -2;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_3 + 2);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0260f550;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_0260f550:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

