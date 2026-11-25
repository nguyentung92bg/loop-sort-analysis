/* IL2CPP: MetalBlockSystem$$CreatePile
MetalBlockSystem_MetalPile_o* MetalBlockSystem__CreatePile (MetalBlockSystem_o* __this, UnityEngine_MeshRenderer_o* groupBlock, Block_o* block, float fill, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$CreatePile
   MetalBlockSystem_MetalPile_o* MetalBlockSystem__CreatePile (MetalBlockSystem_o* __this,
   UnityEngine_MeshRenderer_o* groupBlock, Block_o* block, float fill, const MethodInfo* method); */

long MetalBlockSystem__CreatePile_23edbbc
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  long lStack_48;
  
  if ((bRam0000000004f4b633 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bdd48);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049c1f70);
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c1f80);
    FUN_021f03f8(PTR_DAT_049c1f88);
    FUN_021f03f8(PTR_DAT_049c1f90);
    FUN_021f03f8(PTR_DAT_049c1f98);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1fa0);
    bRam0000000004f4b633 = 1;
  }
  puVar2 = PTR_DAT_049c1fa0;
  puVar1 = PTR_DAT_049b3b90;
  if (param_6 != 0) {
    lVar5 = UnityEngine_Component__get_transform_3c18724(param_6,0);
    lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_3c1db70(lVar6,*(undefined8 *)puVar2,0);
    if (((lVar6 != 0) &&
        (lVar6 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0), lVar5 != 0)) &&
       (uVar7 = UnityEngine_Transform__get_parent_3c2d470(lVar5,0), puVar2 = PTR_DAT_049c1f98,
       puVar1 = PTR_DAT_049b3b98, lVar6 != 0)) {
                    /* try { // try from 024edce8 to 025ede8b has its CatchHandler @ 024edce8
                       catch() { ... } // from try @ 024edce8 with catch @ 024edce8
                       catch() { ... } // from try @ 024edf2c with catch @ 024edce8
                       catch() { ... } // from try @ 024edfdc with catch @ 024edce8
                       catch() { ... } // from try @ 024edfe8 with catch @ 024edce8
                       catch() { ... } // from try @ 024ee02c with catch @ 024edce8 */
      UnityEngine_Transform__SetParent_3c2e060(lVar6,uVar7,0,0);
      uVar11 = UnityEngine_Transform__get_localPosition_3c2c388(lVar5,0);
      uVar15 = param_2;
      uVar16 = param_3;
      uVar12 = UnityEngine_Transform__get_localRotation_3c2d92c(lVar5,0);
      UnityEngine_Transform__SetLocalPositionAndRotation_3c2e390
                (uVar11,param_2,param_3,uVar12,uVar15,uVar16,param_4,lVar6,0);
      fVar13 = 1.0;
      if (param_1 <= 1.0) {
        fVar13 = param_1;
      }
      fVar14 = _UNK_013aa838;
      if (0.0 <= param_1) {
        fVar14 = fVar13 * _UNK_013aa8f4 + _UNK_013aa838;
      }
      UnityEngine_Transform__set_localScale_3c2ddfc(0x3f800000,fVar14,0x3f800000,lVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar8 = UnityEngine_Object__Instantiate_object__2695b80(param_6,lVar6,*(undefined8 *)puVar2);
      if (lVar8 != 0) {
        lVar9 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar15 = *puVar10;
        uVar16 = puVar10[1];
        uVar11 = puVar10[2];
        if (cRam0000000004f4a191 == '\0') {
          FUN_021f03f8(PTR_DAT_049bc158);
          cRam0000000004f4a191 = '\x01';
        }
        if (lVar9 != 0) {
          puVar10 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
          UnityEngine_Transform__SetLocalPositionAndRotation_3c2e390
                    (uVar15,uVar16,uVar11,*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar9,0);
          lVar9 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
          UnityEngine_Transform__get_localScale_3c2dd20(lVar5,0);
          puVar1 = PTR_DAT_049bdd48;
          if (lVar9 != 0) {
                    /* try { // try from 024ede8c to 025ede93 has its CatchHandler @ 024edfe8 */
            UnityEngine_Transform__set_localScale_3c2ddfc(lVar9,0);
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                      (lVar8,&lStack_48,*(undefined8 *)puVar1);
            if ((param_7 != 0) && (lStack_48 != 0)) {
                    /* try { // try from 024edeac to 025edf2b has its CatchHandler @ 024edff4 */
              UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                        (lStack_48,*(undefined8 *)(param_7 + 0x118),0);
              if (*(long *)(param_7 + 0x138) != 0) {
                uVar7 = UnityEngine_Renderer__get_sharedMaterials_3bddc90
                                  (*(long *)(param_7 + 0x138),0);
                UnityEngine_Renderer__set_sharedMaterials_3bddc94(lVar8,uVar7,0);
                lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
                if (lVar5 != 0) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar5,1,0);
                  lVar5 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
                  puVar4 = PTR_DAT_049c1f90;
                  puVar3 = PTR_DAT_049c1f88;
                  puVar2 = PTR_DAT_049c1f80;
                  puVar1 = PTR_DAT_049c1f78;
                  if (lVar5 != 0) {
                    /* try { // try from 024edf2c to 025edfd7 has its CatchHandler @ 024edce8 */
                    UnityEngine_Transform__get_localScale_3c2dd20(lVar5,0);
                    auVar17 = LitMotion_LMotion_Punch__Create_2eaa764(0);
                    auVar17 = LitMotion_MotionBuilderExtensions__WithFrequency___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688eb0
                                        (auVar17._0_8_,auVar17._8_8_,2,*(undefined8 *)puVar4);
                    auVar17 = LitMotion_MotionBuilderExtensions__WithDampingRatio___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2688d9c
                                        (0x3f800000,auVar17._0_8_,auVar17._8_8_,
                                         *(undefined8 *)puVar3);
                    auVar17 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                        (auVar17._0_8_,auVar17._8_8_,lVar5,*(undefined8 *)puVar1);
                    uVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
                    LitMotion_MotionHandleExtensions__AddTo_2eacb88
                              (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,uVar7,0);
                    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    System_Object___ctor_3142338(lVar5,0);
                    if (lVar5 != 0) {
                      *(long *)(lVar5 + 0x10) = lVar6;
                      thunk_FUN_021f190c((long *)(lVar5 + 0x10),lVar6);
                      if (*(long *)(param_5 + 0x88) != 0) {
                    /* try { // try from 024edfd8 to 025edfdb has its CatchHandler @ 024edff0 */
                    /* try { // try from 024edfdc to 025edfe3 has its CatchHandler @ 024edce8 */
                    /* try { // try from 024edfe4 to 025edfe7 has its CatchHandler @ 024edfec */
                        FUN_02333498(*(long *)(param_5 + 0x88),lVar5,*(undefined8 *)PTR_DAT_049c1f70
                                    );
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024ede8c with catch @ 024edfe8
                       try { // try from 024edfe8 to 025ee00f has its CatchHandler @ 024edce8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024edfe4 with catch @ 024edfec
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024edfd8 with catch @ 024edff0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024edeac with catch @ 024edff4
                        */
                        return lVar5;
                      }
                    }
                  }
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

