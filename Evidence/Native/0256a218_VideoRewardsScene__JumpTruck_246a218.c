/* IL2CPP: VideoRewardsScene$$JumpTruck
void VideoRewardsScene__JumpTruck (VideoRewardsScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene$$JumpTruck
   void VideoRewardsScene__JumpTruck (VideoRewardsScene_o* __this, const MethodInfo* method); */

void VideoRewardsScene__JumpTruck_246a218(undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b97c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b97c = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uVar6 = FUN_024f7208(*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x98),0);
  if ((uVar6 & 1) != 0) {
    FUN_02580cb0(*(undefined8 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x98),1,0);
  }
  puVar3 = PTR_DAT_049c2d70;
  puVar2 = PTR_DAT_049c2288;
  if (*(long *)(param_3 + 0x48) != 0) {
    fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                              (*(long *)(param_3 + 0x48),0);
    if (cRam0000000004f4a196 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f4a196 = '\x01';
    }
    puVar5 = PTR_DAT_049c2f78;
    puVar4 = PTR_DAT_049c2f70;
    fVar12 = fVar11 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10) * 30.0;
    fVar13 = param_2 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14) * 30.0;
    auVar14 = LitMotion_LSequence__Create_2eaaa20(0);
    lVar7 = auVar14._0_8_;
    auStack_70 = auVar14;
    auStack_80 = LitMotion_LMotion__Create_2eaa148(fVar11,param_2,fVar12,fVar13,_UNK_013aa7b0,0);
    auVar15 = FUN_024f4e50(auStack_80,5,*(undefined8 *)puVar3);
    lVar8 = *(long *)puVar2;
    auStack_80 = auVar15;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar2;
    }
    auVar15 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60),
                           *(undefined8 *)puVar5);
    auVar15 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                        (auVar15._0_8_,auVar15._8_8_,*(undefined8 *)(param_3 + 0x48),
                         *(undefined8 *)puVar4);
    if (lVar7 != 0) {
      uVar1 = auVar14._8_4_ & 0xffff;
      if (*(ushort *)(lVar7 + 0x18) == uVar1) {
        LitMotion_MotionSequenceBuilderSource__Append_2eadcdc
                  (lVar7,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,0);
                    /* try { // try from 0256a3e0 to 0266a4b3 has its CatchHandler @ 0256a3e0
                       catch() { ... } // from try @ 0256a3e0 with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a4c8 with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a4f4 with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a5ac with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a600 with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a654 with catch @ 0256a3e0
                       catch() { ... } // from try @ 0256a7b0 with catch @ 0256a3e0 */
        auVar14 = LitMotion_LMotion__Create_2eaa148(fVar12,fVar13,fVar11,param_2,_UNK_013aa8fc,0);
        auStack_80 = auVar14;
        auVar14 = FUN_024f4e50(auStack_80,0x1d,*(undefined8 *)puVar3);
        auStack_80 = auVar14;
        auVar14 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                               *(undefined8 *)puVar5);
        auVar14 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                            (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(param_3 + 0x48),
                             *(undefined8 *)puVar4);
        if (*(ushort *)(lVar7 + 0x18) == uVar1) {
          LitMotion_MotionSequenceBuilderSource__Append_2eadcdc
                    (lVar7,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,0);
          auVar14 = FUN_025267c4(auStack_70,0,0);
          auVar16 = LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                              (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,
                               *(undefined8 *)(param_3 + 0x48),0);
          *(undefined1 (*) [12])(param_3 + 0x90) = auVar16;
          return;
        }
      }
    }
    thunk_FUN_02256840(PTR_DAT_049b82b8);
                    /* try { // try from 0256a4b4 to 0266a4c7 has its CatchHandler @ 0256a4cc */
    uVar9 = thunk_FUN_0222ca34();
    uVar10 = thunk_FUN_02256840(PTR_DAT_049c2ba8);
                    /* try { // try from 0256a4c8 to 0266a4df has its CatchHandler @ 0256a3e0 */
                    /* catch() { ... } // from try @ 0256a4b4 with catch @ 0256a4cc */
    System_InvalidOperationException___ctor_30fe440(uVar9,uVar10,0);
                    /* try { // try from 0256a4e0 to 0266a4f3 has its CatchHandler @ 0256a7a8 */
    uVar10 = thunk_FUN_02256840(PTR_DAT_049c2bb0);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar9,uVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

