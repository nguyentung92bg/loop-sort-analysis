/* IL2CPP: MetalBlockSystem$$OnBlockTakeOff
void MetalBlockSystem__OnBlockTakeOff (MetalBlockSystem_o* __this, BlockTakeOffMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$OnBlockTakeOff
   void MetalBlockSystem__OnBlockTakeOff (MetalBlockSystem_o* __this, BlockTakeOffMessage_o m, const
   MethodInfo* method); */

void MetalBlockSystem__OnBlockTakeOff_23ee010
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long lStack_48;
  
                    /* try { // try from 024ee010 to 025ee013 has its CatchHandler @ 024ee020 */
  puVar12 = PTR_DAT_049c1fa8;
                    /* catch() { ... } // from try @ 024ee010 with catch @ 024ee020 */
                    /* try { // try from 024ee024 to 025ee02b has its CatchHandler @ 024ee034 */
                    /* try { // try from 024ee02c to 025ee037 has its CatchHandler @ 024edce8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024ee024 with catch @ 024ee034
                        */
  if ((bRam0000000004f4b631 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1fb0);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c1fb8);
    FUN_021f03f8(PTR_DAT_049c1fc0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1fc8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1fd0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1fd8);
    FUN_021f03f8(PTR_DAT_049c1fe0);
    FUN_021f03f8(PTR_DAT_049c1fa8);
    FUN_021f03f8(PTR_DAT_049c1fe8);
    bRam0000000004f4b631 = 1;
  }
  auStack_58._8_8_ = 0;
  lStack_48 = 0;
  auStack_68._8_8_ = 0;
  auStack_58._0_8_ = 0;
  auStack_68._0_8_ = 0;
  lVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar12);
  System_Object___ctor_3142338(lVar13,0);
  if (*(long *)(param_4 + 0x80) != 0) {
    uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282f498
                       (*(long *)(param_4 + 0x80),param_6,&lStack_48,*(undefined8 *)PTR_DAT_049c1fb8
                       );
    auVar6._8_8_ = auStack_68._8_8_;
    auVar6._0_8_ = auStack_68._0_8_;
    auVar25._8_8_ = auStack_58._8_8_;
    auVar25._0_8_ = auStack_58._0_8_;
    if ((uVar14 & 1) == 0) {
      return;
    }
    if ((param_6 != 0) &&
       (auStack_58 = auVar25, auStack_68 = auVar6, *(long *)(param_6 + 0x138) != 0)) {
      UnityEngine_Renderer__set_enabled_3bdcab0(*(long *)(param_6 + 0x138),1,0);
      if (lStack_48 != 0) {
        uVar19 = *(undefined8 *)(lStack_48 + 0x10);
        iVar1 = *(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4);
        *(int *)(lStack_48 + 0x18) = *(int *)(lStack_48 + 0x18) + -1;
        if (iVar1 == 0) {
          FUN_021f0574();
        }
        uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(uVar19,0,0);
        auVar10._8_8_ = auStack_68._8_8_;
        auVar10._0_8_ = auStack_68._0_8_;
        auVar8._8_8_ = auStack_68._8_8_;
        auVar8._0_8_ = auStack_68._0_8_;
        auVar7._8_8_ = auStack_68._8_8_;
        auVar7._0_8_ = auStack_68._0_8_;
        auVar4._8_8_ = auStack_58._8_8_;
        auVar4._0_8_ = auStack_58._0_8_;
        auVar3._8_8_ = auStack_58._8_8_;
        auVar3._0_8_ = auStack_58._0_8_;
        auVar2._8_8_ = auStack_58._8_8_;
        auVar2._0_8_ = auStack_58._0_8_;
        if ((uVar14 & 1) != 0) {
          return;
        }
        if (lStack_48 != 0) {
          if (*(int *)(lStack_48 + 0x18) < 1) {
            auStack_58 = auVar4;
            auStack_68 = auVar10;
            if (*(long *)(param_4 + 0x88) != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                        (*(long *)(param_4 + 0x88),lStack_48,*(undefined8 *)PTR_DAT_049c1fc0);
              auVar11._8_8_ = auStack_68._8_8_;
              auVar11._0_8_ = auStack_68._0_8_;
              auVar5._8_8_ = auStack_58._8_8_;
              auVar5._0_8_ = auStack_58._0_8_;
              if ((lStack_48 != 0) && (auStack_58 = auVar5, auStack_68 = auVar11, lVar13 != 0)) {
                plVar15 = (long *)(lVar13 + 0x10);
                *plVar15 = *(long *)(lStack_48 + 0x10);
                thunk_FUN_021f190c(plVar15);
                if (lStack_48 != 0) {
                  *(undefined8 *)(lStack_48 + 0x10) = 0;
                  thunk_FUN_021f190c((undefined8 *)(lStack_48 + 0x10),0);
                  if (*plVar15 != 0) {
                    uVar22 = UnityEngine_Transform__get_localScale_3c2dd20(*plVar15,0);
                    if (cRam0000000004f4a233 == '\0') {
                      FUN_021f03f8(PTR_DAT_049bbf90);
                      cRam0000000004f4a233 = '\x01';
                    }
                    puVar17 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                    auStack_68 = LitMotion_LMotion__Create_2eaa1b4
                                           (uVar22,param_2,param_3,*puVar17,puVar17[1],puVar17[2],
                                            _UNK_013aa568,0);
                    auVar25 = FUN_024f4e50(auStack_68,0x19,*(undefined8 *)PTR_DAT_049c1680);
                    auStack_68 = auVar25;
                    uVar19 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                    System_Action___ctor_306b98c(uVar19,lVar13,*(undefined8 *)PTR_DAT_049c1fe0,0);
                    auVar25 = FUN_024f6b84(auStack_68,uVar19,*(undefined8 *)PTR_DAT_049c1fd0);
                    auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                        (auVar25._0_8_,auVar25._8_8_,*(undefined8 *)(lVar13 + 0x10),
                                         *(undefined8 *)PTR_DAT_049c1670);
                    if (*(long *)(lVar13 + 0x10) != 0) {
                      uVar19 = UnityEngine_Component__get_gameObject_3c187f4
                                         (*(long *)(lVar13 + 0x10),0);
                      goto LAB_024ee468;
                    }
                  }
                }
              }
            }
          }
          else {
            auStack_58 = auVar2;
            auStack_68 = auVar7;
            if ((*(long *)(param_4 + 0x38) != 0) &&
               (auStack_58 = auVar3, auStack_68 = auVar8, *(long *)(lStack_48 + 0x10) != 0)) {
              fVar21 = (float)*(int *)(lStack_48 + 0x18) /
                       (float)*(int *)(*(long *)(param_4 + 0x38) + 0x154);
              fVar23 = 1.0;
              if (fVar21 <= 1.0) {
                fVar23 = fVar21;
              }
              fVar24 = fVar23 * _UNK_013aa8f4 + _UNK_013aa838;
              fVar23 = _UNK_013aa838;
              if (0.0 <= fVar21) {
                fVar23 = fVar24;
              }
              UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(lStack_48 + 0x10),0);
              auStack_58 = LitMotion_LMotion__Create_2ea9f9c(fVar24,fVar23,_UNK_013aa764,0);
              auVar25 = FUN_024f4e50(auStack_58,5,*(undefined8 *)PTR_DAT_049c1358);
              puVar12 = PTR_DAT_049c1fe8;
              auStack_58 = auVar25;
              if (lStack_48 != 0) {
                uVar19 = *(undefined8 *)(lStack_48 + 0x10);
                lVar13 = *(long *)PTR_DAT_049c1fe8;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar13 = *(long *)puVar12;
                }
                puVar16 = *(undefined8 **)(lVar13 + 0xb8);
                lVar18 = puVar16[1];
                if (lVar18 == 0) {
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    FUN_021f0574();
                    puVar16 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
                  }
                  uVar20 = *puVar16;
                  lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1fb0);
                  System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
                            (lVar18,uVar20,*(undefined8 *)PTR_DAT_049c1fd8,0);
                  plVar15 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
                  *plVar15 = lVar18;
                  thunk_FUN_021f190c(plVar15,lVar18);
                }
                auVar25 = FUN_024f4ff0(auStack_58,uVar19,lVar18,*(undefined8 *)PTR_DAT_049c1fc8);
                auVar9._8_8_ = auStack_68._8_8_;
                auVar9._0_8_ = auStack_68._0_8_;
                if ((lStack_48 != 0) && (auStack_68 = auVar9, *(long *)(lStack_48 + 0x10) != 0)) {
                  uVar19 = UnityEngine_Component__get_gameObject_3c187f4
                                     (*(long *)(lStack_48 + 0x10),0);
LAB_024ee468:
                  LitMotion_MotionHandleExtensions__AddTo_2eacb88
                            (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,uVar19,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

