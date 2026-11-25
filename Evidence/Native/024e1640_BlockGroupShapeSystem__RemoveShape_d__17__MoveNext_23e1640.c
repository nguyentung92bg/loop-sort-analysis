/* IL2CPP: BlockGroupShapeSystem.<RemoveShape>d__17$$MoveNext
void BlockGroupShapeSystem__RemoveShape_d__17__MoveNext (BlockGroupShapeSystem__RemoveShape_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockGroupShapeSystem.<RemoveShape>d__17$$MoveNext
   void BlockGroupShapeSystem__RemoveShape_d__17__MoveNext
   (BlockGroupShapeSystem__RemoveShape_d__17_o __this, const MethodInfo* method); */

void BlockGroupShapeSystem__RemoveShape_d__17__MoveNext_23e1640(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b5dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16d8);
    FUN_021f03f8(PTR_DAT_049c16e0);
    FUN_021f03f8(PTR_DAT_049c16e8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b5dc = 1;
  }
  lVar14 = *(long *)(param_1 + 4);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar14 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 024e16f4 to 025e171b has its CatchHandler @ 024e18f4 */
    uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(lVar14 + 0x70),*(undefined8 *)(param_1 + 6),param_1 + 10,
                       *(undefined8 *)PTR_DAT_049c16e8);
    if ((uVar5 & 1) == 0) goto LAB_024e1ab0;
    plVar6 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                               (*(undefined8 *)(param_1 + 10),0x1a9a2c8b,0);
    lVar7 = BlockGroupShapeSystem__CancelAndGetMotions_23e1484(lVar14,*(undefined8 *)(param_1 + 10))
    ;
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
                    /* try { // try from 024e1758 to 025e177f has its CatchHandler @ 024e18f0 */
    puVar2 = PTR_DAT_049c1690;
    lVar8 = *(long *)PTR_DAT_049c1690;
    lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar17 = *(undefined4 *)(lVar11 + 0xc);
    uVar18 = *(undefined4 *)(lVar11 + 0x10);
    uVar19 = *(undefined4 *)(lVar11 + 0x14);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar2;
    }
    uVar1 = _UNK_013aa810;
    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
    uVar16 = *puVar12;
                    /* try { // try from 024e1794 to 025e179b has its CatchHandler @ 024e18dc */
                    /* try { // try from 024e17a0 to 025e17a7 has its CatchHandler @ 024e18d8 */
    auVar20 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar17,uVar18,uVar19,uVar16,puVar12[1],puVar12[2],_UNK_013aa810,0);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 10),0);
                    /* try { // try from 024e17e4 to 025e1823 has its CatchHandler @ 024e18ec */
    auVar20 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar20._0_8_,auVar20._8_8_,uVar9,*(undefined8 *)PTR_DAT_049c1670);
    uVar9 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar20 = Extensions__AddTo_24d83f4(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,uVar9,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024e1b4c to 025e1b8f has its CatchHandler @ 024e2270 */
      FUN_021f06a0();
    }
                    /* try { // try from 024e182c to 025e182f has its CatchHandler @ 024e18e8 */
                    /* try { // try from 024e1830 to 025e18bb has its CatchHandler @ 024e15c0 */
    LitMotion_CompositeMotionHandle__Add_2e8b150(lVar7,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    auVar20 = LitMotion_LMotion__Create_2ea9f9c(uVar16,0,uVar1,0);
    auVar20 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                        (auVar20._0_8_,auVar20._8_8_,plVar6,*(undefined8 *)PTR_DAT_049c1678);
    auVar20 = Extensions__AddTo_24d83f4
                        (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
    LitMotion_CompositeMotionHandle__Add_2e8b150(lVar7,auVar20._0_8_,auVar20._8_8_ & 0xffffffff,0);
    puVar2 = PTR_DAT_049b5138;
    uVar9 = *(undefined8 *)(lVar14 + 0x20);
                    /* try { // try from 024e18bc to 025e18bf has its CatchHandler @ 024e18e4 */
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* try { // try from 024e18c0 to 025e18c3 has its CatchHandler @ 024e18e0 */
      FUN_021f0574();
    }
                    /* try { // try from 024e18c4 to 025e18c7 has its CatchHandler @ 024e18d4 */
                    /* try { // try from 024e18c8 to 025e190f has its CatchHandler @ 024e15c0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e18c4 with catch @ 024e18d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e17a0 with catch @ 024e18d8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e1794 with catch @ 024e18dc
                        */
    auStack_70 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(100,0,8,uVar9,0,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e18c0 with catch @ 024e18e0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e18bc with catch @ 024e18e4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e182c with catch @ 024e18e8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e17e4 with catch @ 024e18ec
                        */
    thunk_FUN_021f190c(auStack_70,0);
    uVar3 = auStack_70._8_8_;
    uVar9 = auStack_70._0_8_;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e1758 with catch @ 024e18f0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e16f4 with catch @ 024e18f4
                        */
    auStack_80 = auStack_70;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 024e1910 to 025e1913 has its CatchHandler @ 024e191c */
      cRam0000000004f49bf4 = '\x01';
    }
                    /* catch() { ... } // from try @ 024e1910 with catch @ 024e191c */
                    /* try { // try from 024e1920 to 025e1927 has its CatchHandler @ 024e1930 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 024e1928 to 025e1933 has its CatchHandler @ 024e15c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024e1920 with catch @ 024e1930
                        */
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar9 != (long *)0x0) {
      lVar7 = *(long *)uVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_024e19c0;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
LAB_024e19c0:
                    /* try { // try from 024e19cc to 025e1b03 has its CatchHandler @ 024e19cc
                       catch() { ... } // from try @ 024e19cc with catch @ 024e19cc
                       catch() { ... } // from try @ 024e1d08 with catch @ 024e19cc
                       catch() { ... } // from try @ 024e1e00 with catch @ 024e19cc
                       catch() { ... } // from try @ 024e1f6c with catch @ 024e19cc
                       catch() { ... } // from try @ 024e2158 with catch @ 024e19cc
                       catch() { ... } // from try @ 024e223c with catch @ 024e19cc
                       catch() { ... } // from try @ 024e22e0 with catch @ 024e19cc
                       catch() { ... } // from try @ 024e230c with catch @ 024e19cc
                       catch() { ... } // from try @ 024e2398 with catch @ 024e19cc */
      iVar4 = (*(code *)*puVar10)(uVar9,uVar3 & 0xffffffff,puVar10[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_80;
                    /* try { // try from 024e1b04 to 025e1b0b has its CatchHandler @ 024e2274 */
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c16d8);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
    uVar15 = auStack_80._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_024e1a58;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024e1a58:
    (*(code *)*puVar10)(uVar9,uVar15,puVar10[1]);
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(lVar14 + 0x48);
  uVar9 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 10),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar9,uVar9);
  }
  PrefabModule__Return_2537164(lVar7,uVar9,0);
  if (*(long *)(lVar14 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
            (*(long *)(lVar14 + 0x70),*(undefined8 *)(param_1 + 6),*(undefined8 *)PTR_DAT_049c16e0);
LAB_024e1ab0:
  piVar13 = param_1 + 10;
  piVar13[0] = 0;
  piVar13[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar13,0);
  FUN_0235afc8(param_1 + 2,0);
  return;
}

