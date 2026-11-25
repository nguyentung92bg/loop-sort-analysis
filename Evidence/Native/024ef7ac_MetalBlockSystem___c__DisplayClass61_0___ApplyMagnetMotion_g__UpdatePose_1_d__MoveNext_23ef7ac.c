/* IL2CPP: MetalBlockSystem.<>c__DisplayClass61_0.<<ApplyMagnetMotion>g__UpdatePose|1>d$$MoveNext
void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__UpdatePose_1_d__MoveNext (MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__UpdatePose_1_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem.<>c__DisplayClass61_0.<<ApplyMagnetMotion>g__UpdatePose|1>d$$MoveNext
   void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__UpdatePose_1_d__MoveNext
   (MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__UpdatePose_1_d_o __this, const
   MethodInfo* method); */

void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__UpdatePose_1_d__MoveNext_23ef7ac
               (int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  int iVar15;
  undefined4 uStack_38;
  int iStack_34;
  
                    /* try { // try from 024ef7b8 to 025ef7c7 has its CatchHandler @ 024eff94 */
  if ((bRam0000000004f4b641 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2050);
    FUN_021f03f8(PTR_DAT_049c1f68);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b641 = 1;
  }
                    /* try { // try from 024ef80c to 025ef83b has its CatchHandler @ 024f0050 */
  puVar3 = PTR_DAT_049c1f68;
  puVar2 = PTR_DAT_049b5138;
  puVar1 = PTR_DAT_049b3b98;
  lVar8 = *(long *)(param_1 + 4);
  uStack_38 = 0;
  iStack_34 = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[7];
    param_1[7] = 0;
    *param_1 = -1;
    uStack_38 = 0;
    goto LAB_024ef9f0;
  }
  param_1[6] = 0;
  while( true ) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lVar8 + 0x80) == '\0') break;
    uVar7 = *(undefined8 *)(lVar8 + 0x88);
                    /* try { // try from 024efa14 to 025efa1f has its CatchHandler @ 024effa0 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
    if ((uVar5 & 1) == 0) break;
    if (*(long *)(lVar8 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(*(long *)(lVar8 + 0x88),0);
    if ((uVar5 & 1) == 0) break;
    fVar9 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
    fVar14 = *(float *)(lVar8 + 0x28);
    param_1[6] = (int)(fVar9 + (float)param_1[6]);
    fVar10 = (float)FUN_04608770(fVar9 * -12.0);
                    /* try { // try from 024ef884 to 025ef8c3 has its CatchHandler @ 024effe8 */
    fVar10 = fVar10 * fVar14;
    fVar14 = *(float *)(lVar8 + 0x1c);
    *(float *)(lVar8 + 0x28) = fVar10;
    fVar9 = (float)FUN_04608770(fVar9 * -8.0);
    *(float *)(lVar8 + 0x1c) = fVar9 * fVar14;
    if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_localScale_3c2ddfc
              ((fVar10 + 1.0) * *(float *)(lVar8 + 0x48),(1.0 - fVar10) * *(float *)(lVar8 + 0x4c),
               *(undefined4 *)(lVar8 + 0x50),*(long *)(lVar8 + 0x40),0);
    if (-1 < *(int *)(lVar8 + 0x54)) {
      lVar6 = *(long *)(lVar8 + 0x58);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 024ef8f0 to 025ef913 has its CatchHandler @ 024eff8c */
      auVar12 = NEON_fmov(0x3f800000,4);
      fVar10 = *(float *)(lVar8 + 0x1c) * 0.5;
      fVar9 = 1.0;
      if (fVar10 <= 1.0) {
        fVar9 = fVar10;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar10) {
        fVar14 = fVar9;
      }
      fVar9 = (float)*(undefined8 *)(lVar8 + 0x60);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar8 + 0x60) >> 0x20);
      fVar11 = (float)*(undefined8 *)(lVar8 + 0x68);
      fVar10 = fVar10 + (auVar12._4_4_ - fVar10) * fVar14;
                    /* try { // try from 024ef944 to 025ef947 has its CatchHandler @ 024eff6c */
      UnityEngine_MaterialPropertyBlock__SetColor_3bdbd6c
                (CONCAT44(fVar10,fVar9 + (auVar12._0_4_ - fVar9) * fVar14),fVar10,
                 fVar11 + (auVar12._8_4_ - fVar11) * fVar14,lVar6,
                 **(undefined4 **)(*(long *)puVar3 + 0xb8),0);
      if (*(long *)(lVar8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 024ef958 to 025ef95b has its CatchHandler @ 024eff64 */
      UnityEngine_Renderer__SetPropertyBlock_3bdc9f0
                (*(long *)(lVar8 + 0x70),*(undefined8 *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 0x54)
                 ,0);
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x78);
    uVar13 = *(undefined4 *)(lVar8 + 0x10);
                    /* try { // try from 024ef96c to 025ef973 has its CatchHandler @ 024eff60 */
    iVar15 = param_1[6];
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    MetalBlockSystem__SetFieldLines_23eefbc(uVar13,iVar15,uVar7);
                    /* try { // try from 024ef98c to 025ef993 has its CatchHandler @ 024eff58 */
    if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x20);
    UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar8 + 0x40),0);
    MetalBlockSystem__RattlePieces_23ee988(uVar7);
                    /* try { // try from 024ef9b0 to 025ef9db has its CatchHandler @ 024eff5c */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar13 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ffc(8,0);
    _uStack_38 = CONCAT44(iStack_34,uVar13);
    iVar15 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
    iStack_34 = iVar15;
    uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0);
    puVar4 = PTR_DAT_049c2050;
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      uVar7 = *(undefined8 *)puVar4;
      param_1[7] = iStack_34;
                    /* try { // try from 024efa80 to 025efaa7 has its CatchHandler @ 024f0000 */
      FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar7);
      return;
    }
LAB_024ef9f0:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

