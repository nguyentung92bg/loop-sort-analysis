/* IL2CPP: PerformanceModule$$Start
void PerformanceModule__Start (PerformanceModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: PerformanceModule$$Start
   void PerformanceModule__Start (PerformanceModule_o* __this, const MethodInfo* method); */

void PerformanceModule__Start_2536850(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_4c;
  float afStack_48 [4];
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_049c6078;
  if ((bRam0000000004f4bf5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c6078);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049ca1d0);
    bRam0000000004f4bf5f = 1;
  }
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = AutoQualitySetter__DetectSetting_2498a54(0);
  fVar7 = 1.0;
  if (uVar2 < 5) {
    fVar7 = *(float *)(&UNK_013e9fa4 + (ulong)uVar2 * 4);
  }
  iVar3 = UnityEngine_Screen__get_width_3bd80bc(0);
  fVar8 = 1.0;
  if (1080.0 / (float)iVar3 <= 1.0) {
    fVar8 = 1080.0 / (float)iVar3;
  }
  if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Application__set_targetFrameRate_3bc7f88(0x3c,0);
  PerformanceModule__SetRenderScale_2536b2c(fVar7 * fVar8);
  UnityEngine_QualitySettings__SetQualityLevel_3bda3ec(0,0);
  UnityEngine_QualitySettings__set_shadows_3bda470(0,0);
  UnityEngine_QualitySettings__set_shadowResolution_3bda4ac(1,0);
  UnityEngine_QualitySettings__set_antiAliasing_3bda54c(0,0);
  puVar1 = PTR_DAT_049b3bd0;
  afStack_48[1] = 0.0;
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),afStack_48 + 1);
  afStack_48[0] = fVar7 * fVar8;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x78),afStack_48);
  uStack_4c = 0x3c;
                    /* try { // try from 026369a4 to 027369a7 has its CatchHandler @ 026369a8 */
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_4c);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026369a4 with catch @ 026369a8
                       try { // try from 026369a8 to 027369cf has its CatchHandler @ 0263650c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02636724 with catch @ 026369ac
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02636690 with catch @ 026369b0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026366b0 with catch @ 026369b4
                        */
  uVar4 = System_String__Format_2f7dff0(*(undefined8 *)PTR_DAT_049ca1d0,uVar4,uVar5,uVar6,0);
                    /* try { // try from 026369d0 to 027369d3 has its CatchHandler @ 026369ec */
                    /* try { // try from 026369d4 to 027369ef has its CatchHandler @ 0263650c */
  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 026369d0 with catch @ 026369ec */
  UnityEngine_Debug__Log_3bd0be4(uVar4,0);
                    /* try { // try from 026369f0 to 027369f7 has its CatchHandler @ 02636a00 */
                    /* try { // try from 026369f8 to 02736a03 has its CatchHandler @ 0263650c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026369f0 with catch @ 02636a00
                        */
  return;
}

