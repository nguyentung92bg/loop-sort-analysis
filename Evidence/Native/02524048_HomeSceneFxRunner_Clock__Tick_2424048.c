/* IL2CPP: HomeSceneFxRunner.Clock$$Tick
void HomeSceneFxRunner_Clock__Tick (HomeSceneFxRunner_Clock_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Clock$$Tick
   void HomeSceneFxRunner_Clock__Tick (HomeSceneFxRunner_Clock_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Clock__Tick_2424048(long param_1)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 02524054 to 02624057 has its CatchHandler @ 02524090 */
                    /* try { // try from 02524058 to 0262405b has its CatchHandler @ 0252407c */
                    /* try { // try from 0252405c to 0262405f has its CatchHandler @ 02524098 */
                    /* try { // try from 02524060 to 02624063 has its CatchHandler @ 02524094 */
                    /* catch() { ... } // from try @ 02524008 with catch @ 02524064
                       try { // try from 02524064 to 026240b7 has its CatchHandler @ 02523dd4 */
                    /* catch() { ... } // from try @ 02523f18 with catch @ 02524068 */
  if ((bRam0000000004f4b791 & 1) == 0) {
                    /* catch() { ... } // from try @ 02524020 with catch @ 0252406c */
                    /* catch() { ... } // from try @ 02523fc0 with catch @ 02524070 */
                    /* catch() { ... } // from try @ 02523ec8 with catch @ 02524074 */
    FUN_021f03f8(PTR_DAT_049b5fb0);
                    /* catch() { ... } // from try @ 02523eb8 with catch @ 02524078 */
                    /* catch() { ... } // from try @ 02524058 with catch @ 0252407c */
                    /* catch() { ... } // from try @ 02523fd8 with catch @ 02524080 */
    FUN_021f03f8(PTR_DAT_049b6128);
                    /* catch() { ... } // from try @ 02523f6c with catch @ 02524084 */
                    /* catch() { ... } // from try @ 02523f58 with catch @ 02524088 */
    bRam0000000004f4b791 = 1;
  }
                    /* catch() { ... } // from try @ 02523ef4 with catch @ 0252408c */
                    /* catch() { ... } // from try @ 02524054 with catch @ 02524090 */
  uStack_40 = 0;
  uStack_38 = 0;
                    /* catch() { ... } // from try @ 02523ea8 with catch @ 02524094
                       catch() { ... } // from try @ 02524060 with catch @ 02524094 */
  fVar4 = (float)UnityEngine_Time__get_realtimeSinceStartup_3c267b0(0);
  puVar2 = PTR_DAT_049b6128;
                    /* catch() { ... } // from try @ 02523e98 with catch @ 02524098
                       catch() { ... } // from try @ 0252405c with catch @ 02524098 */
  dVar7 = *(double *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 02523f20 with catch @ 0252409c */
                    /* catch() { ... } // from try @ 02523ed8 with catch @ 025240a0
                       catch() { ... } // from try @ 02523f7c with catch @ 025240a0 */
                    /* try { // try from 025240b8 to 026240cf has its CatchHandler @ 02524148 */
  if ((dVar7 < 0.0) || (fVar5 = fVar4 - *(float *)(param_1 + 0x28), 60.0 < fVar5)) {
                    /* try { // try from 025240d0 to 02624137 has its CatchHandler @ 02523dd4 */
    if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_38 = System_DateTime__get_Now_30dd928(0);
    uStack_40 = System_DateTime__get_TimeOfDay_30ddb3c(&uStack_38,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    dVar7 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_40,0);
    fVar5 = fVar4 - fVar4;
    *(float *)(param_1 + 0x28) = fVar4;
    *(double *)(param_1 + 0x20) = dVar7;
  }
  fVar4 = _UNK_013aa48c;
  lVar3 = *(long *)(param_1 + 0x10);
                    /* try { // try from 02524138 to 02624147 has its CatchHandler @ 02524148 */
                    /* catch() { ... } // from try @ 025240b8 with catch @ 02524148
                       catch() { ... } // from try @ 02524138 with catch @ 02524148 */
                    /* try { // try from 0252414c to 0262414f has its CatchHandler @ 02524158 */
                    /* try { // try from 02524150 to 0262415b has its CatchHandler @ 02523dd4 */
  fVar6 = (float)FUN_046086d0(-(float)(dVar7 + (double)fVar5),_UNK_013aa48c);
  fVar1 = _UNK_013aa948;
                    /* catch() { ... } // from try @ 0252414c with catch @ 02524158 */
  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
            (0,0,(fVar6 / fVar4) * 360.0 * _UNK_013aa948,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
    lVar3 = *(long *)(param_1 + 0x18);
    fVar4 = (float)FUN_046086d0(-(float)(dVar7 + (double)fVar5),0x45610000);
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,(fVar4 / 3600.0) * 360.0 * fVar1,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

