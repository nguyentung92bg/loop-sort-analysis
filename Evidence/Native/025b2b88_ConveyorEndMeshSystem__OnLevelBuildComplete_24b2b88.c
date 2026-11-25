/* IL2CPP: ConveyorEndMeshSystem$$OnLevelBuildComplete
void ConveyorEndMeshSystem__OnLevelBuildComplete (ConveyorEndMeshSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorEndMeshSystem$$OnLevelBuildComplete
   void ConveyorEndMeshSystem__OnLevelBuildComplete (ConveyorEndMeshSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void ConveyorEndMeshSystem__OnLevelBuildComplete_24b2b88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  puVar1 = PTR_DAT_049c6bc0;
  if ((bRam0000000004f4bb72 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c40);
    FUN_021f03f8(PTR_DAT_049c6bc8);
    FUN_021f03f8(PTR_DAT_049c6bd0);
    FUN_021f03f8(PTR_DAT_049c24f8);
    FUN_021f03f8(PTR_DAT_049c6bd8);
    FUN_021f03f8(PTR_DAT_049c6bc0);
    bRam0000000004f4bb72 = 1;
  }
  lStack_48 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar4,0);
                    /* try { // try from 025b2c2c to 026b2c37 has its CatchHandler @ 025b2de8 */
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar5 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0(*(long *)(param_1 + 0x40),0);
    if ((uVar5 & 1) != 0) {
      return;
    }
                    /* try { // try from 025b2c54 to 026b2c7b has its CatchHandler @ 025b2dec */
    if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x38) != 0)) &&
       (lVar6 = PrefabModule__Rent_2537380
                          (*(long *)(param_1 + 0x38),
                           *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),0), lVar6 != 0)) {
      lVar7 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        Dreamteck_Splines_SplineComputer__Evaluate_2349114(&uStack_d0,0,*(long *)(param_1 + 0x40),0)
        ;
        uStack_88 = uStack_c8;
        uStack_90 = uStack_d0;
        uVar5 = uStack_90;
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
                    /* try { // try from 025b2c98 to 026b2c9b has its CatchHandler @ 025b2dd8 */
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        uStack_58 = uStack_98;
        uStack_60 = uStack_a0;
        if (lVar7 != 0) {
          uStack_90._4_4_ = (undefined4)(uStack_d0 >> 0x20);
          uVar3 = uStack_90._4_4_;
          uStack_90 = uVar5;
          UnityEngine_Transform__set_position_3c2d61c
                    (uStack_d0 & 0xffffffff,uVar3,uStack_c8 & 0xffffffff,lVar7,0);
          Dreamteck_Splines_SplineSample__get_rotation_23697d0(&uStack_90,0);
                    /* try { // try from 025b2cc0 to 026b2cc7 has its CatchHandler @ 025b2dd0 */
          UnityEngine_Transform__set_rotation_3c2d86c(lVar7,0);
                    /* try { // try from 025b2cd4 to 026b2cdf has its CatchHandler @ 025b2de4 */
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          puVar1 = PTR_DAT_049bbf90;
                    /* try { // try from 025b2cf0 to 026b2cff has its CatchHandler @ 025b2de0 */
          lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                     *(undefined4 *)(lVar9 + 0x14),lVar7,0);
          puVar2 = PTR_DAT_049c24f8;
                    /* try { // try from 025b2d14 to 026b2d17 has its CatchHandler @ 025b2dec */
                    /* try { // try from 025b2d2c to 026b2d2f has its CatchHandler @ 025b2dc8 */
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (FUN_02333498(*(long *)(param_1 + 0x58),lVar6,*(undefined8 *)PTR_DAT_049c24f8),
             lVar4 != 0)) {
                    /* try { // try from 025b2d40 to 026b2d47 has its CatchHandler @ 025b2dec */
            *(long *)(lVar4 + 0x10) = lVar7;
            *(ulong *)(lVar4 + 0x18) = uStack_90;
            *(undefined4 *)(lVar4 + 0x20) = (undefined4)uStack_88;
            thunk_FUN_021f190c((long *)(lVar4 + 0x10),lVar7);
                    /* try { // try from 025b2d50 to 026b2d77 has its CatchHandler @ 025b2df0 */
            if ((*(long *)(param_1 + 0x30) != 0) &&
               ((*(long *)(param_1 + 0x38) != 0 &&
                (lVar6 = PrefabModule__Rent_2537380
                                   (*(long *)(param_1 + 0x38),
                                    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),0), lVar6 != 0
                )))) {
              lVar7 = UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0);
                    /* try { // try from 025b2d78 to 026b2db7 has its CatchHandler @ 025b2b80 */
              plVar11 = (long *)(lVar4 + 0x28);
              *plVar11 = lVar7;
              thunk_FUN_021f190c(plVar11,lVar7);
              *(long *)(param_1 + 0x60) = *plVar11;
              thunk_FUN_021f190c((long *)(param_1 + 0x60));
              if (*(long *)(param_1 + 0x48) != 0) {
                ConveyorEndMeshSystem__MoveEnd_24b2eb0
                          (*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x168),param_1);
                    /* try { // try from 025b2db8 to 026b2dbb has its CatchHandler @ 025b2ddc */
                lVar7 = *plVar11;
                    /* try { // try from 025b2dbc to 026b2dbf has its CatchHandler @ 025b2dd4 */
                if (cRam0000000004f4a190 == '\0') {
                    /* try { // try from 025b2dc0 to 026b2dc3 has its CatchHandler @ 025b2de4 */
                    /* try { // try from 025b2dc4 to 026b2dc7 has its CatchHandler @ 025b2dcc */
                    /* catch() { ... } // from try @ 025b2d2c with catch @ 025b2dc8
                       try { // try from 025b2dc8 to 026b2e0b has its CatchHandler @ 025b2b80 */
                  FUN_021f03f8(PTR_DAT_049bbf90);
                    /* catch() { ... } // from try @ 025b2dc4 with catch @ 025b2dcc */
                    /* catch() { ... } // from try @ 025b2cc0 with catch @ 025b2dd0 */
                  cRam0000000004f4a190 = '\x01';
                }
                    /* catch() { ... } // from try @ 025b2dbc with catch @ 025b2dd4 */
                if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 025b2c98 with catch @ 025b2dd8 */
                    /* catch() { ... } // from try @ 025b2db8 with catch @ 025b2ddc */
                    /* catch() { ... } // from try @ 025b2cf0 with catch @ 025b2de0 */
                    /* catch() { ... } // from try @ 025b2cd4 with catch @ 025b2de4
                       catch() { ... } // from try @ 025b2dc0 with catch @ 025b2de4 */
                  lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
                    /* catch() { ... } // from try @ 025b2c2c with catch @ 025b2de8 */
                    /* catch() { ... } // from try @ 025b2c54 with catch @ 025b2dec
                       catch() { ... } // from try @ 025b2d14 with catch @ 025b2dec
                       catch() { ... } // from try @ 025b2d40 with catch @ 025b2dec */
                    /* catch() { ... } // from try @ 025b2d50 with catch @ 025b2df0 */
                  UnityEngine_Transform__set_localScale_3c2ddfc
                            (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                             *(undefined4 *)(lVar9 + 0x14),lVar7,0);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    FUN_02333498(*(long *)(param_1 + 0x58),lVar6,*(undefined8 *)puVar2);
                    /* try { // try from 025b2e0c to 026b2e0f has its CatchHandler @ 025b2e18 */
                    /* catch() { ... } // from try @ 025b2e0c with catch @ 025b2e18 */
                    /* try { // try from 025b2e1c to 026b2e23 has its CatchHandler @ 025b2e2c */
                    uVar5 = UnityEngine_GameObject__TryGetComponent___Il2CppFullySharedGenericType__261b2a4
                                      (lVar6,&lStack_48,*(undefined8 *)PTR_DAT_049c6bd0);
                    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 025b2e1c with catch @ 025b2e2c */
                      lStack_48 = UnityEngine_GameObject__AddComponent_object__261a774
                                            (lVar6,*(undefined8 *)PTR_DAT_049c6bc8);
                    }
                    lVar6 = lStack_48;
                    uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1c40);
                    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                              (uVar8,lVar4,*(undefined8 *)PTR_DAT_049c6bd8,0);
                    if (lVar6 != 0) {
                      puVar10 = (undefined8 *)(lVar6 + 0x20);
                      *puVar10 = uVar8;
                      thunk_FUN_021f190c(puVar10,uVar8);
                      return;
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

