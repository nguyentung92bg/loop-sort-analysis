/* IL2CPP: ParallaxIntroEffect$$OnEnable
void ParallaxIntroEffect__OnEnable (ParallaxIntroEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ParallaxIntroEffect$$OnEnable
   void ParallaxIntroEffect__OnEnable (ParallaxIntroEffect_o* __this, const MethodInfo* method); */

void ParallaxIntroEffect__OnEnable_2572810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4c1e5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c2f78);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4c1e5 = 1;
  }
  puVar4 = PTR_DAT_049c2f78;
  puVar3 = PTR_DAT_049c2f70;
  puVar2 = PTR_DAT_049c2d70;
  puVar1 = PTR_DAT_049c2288;
  lVar5 = *(long *)(param_1 + 0x20);
  auStack_70 = ZEXT816(0);
  if (lVar5 != 0) {
    uVar9 = 0;
    auStack_70 = ZEXT816(0);
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar9) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_026729c4:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_026729c4;
      lVar7 = (long)(int)uVar9;
      lVar8 = *(long *)(lVar5 + 0x20 + lVar7 * 0x10);
      if (lVar8 == 0) break;
      fVar10 = *(float *)(lVar5 + 0x20 + lVar7 * 0x10 + 8);
      lVar6 = lVar6 + lVar7 * 8;
                    /* try { // try from 026728fc to 02772a33 has its CatchHandler @ 026728fc
                       catch() { ... } // from try @ 026728fc with catch @ 026728fc
                       catch() { ... } // from try @ 02672ae4 with catch @ 026728fc
                       catch() { ... } // from try @ 02672b30 with catch @ 026728fc
                       catch() { ... } // from try @ 02672b78 with catch @ 026728fc
                       catch() { ... } // from try @ 02672ba4 with catch @ 026728fc */
      fVar12 = *(float *)(lVar6 + 0x20);
      fVar11 = *(float *)(lVar6 + 0x24);
      fVar13 = fVar11 + *(float *)(param_1 + 0x2c) * fVar10;
      fVar10 = fVar12 + fVar10 * *(float *)(param_1 + 0x28);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(fVar10,fVar13,lVar8,0);
      auVar14 = LitMotion_LMotion__Create_2eaa148
                          (fVar10,fVar13,fVar12,fVar11,*(undefined4 *)(param_1 + 0x30),0);
      auStack_70 = auVar14;
      auVar14 = FUN_024f4e50(auStack_70,8,*(undefined8 *)puVar2);
      lVar5 = *(long *)puVar1;
      auStack_70 = auVar14;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar1;
      }
      uVar9 = uVar9 + 1;
      auVar14 = FUN_02526574(auStack_70,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                             *(undefined8 *)puVar4);
      auVar14 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                          (auVar14._0_8_,auVar14._8_8_,lVar8,*(undefined8 *)puVar3);
      LitMotion_MotionHandleExtensions__AddTo_2eaccf0
                (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,lVar8,0);
      lVar5 = *(long *)(param_1 + 0x20);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

