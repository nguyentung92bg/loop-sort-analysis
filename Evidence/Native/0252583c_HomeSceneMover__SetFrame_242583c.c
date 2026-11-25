/* IL2CPP: HomeSceneMover$$SetFrame
void HomeSceneMover__SetFrame (HomeSceneMover_o* __this, int32_t frame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMover$$SetFrame
   void HomeSceneMover__SetFrame (HomeSceneMover_o* __this, int32_t frame, const MethodInfo*
   method); */

void HomeSceneMover__SetFrame_242583c(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 0252583c to 02625847 has its CatchHandler @ 02525a6c */
                    /* try { // try from 02525858 to 0262585f has its CatchHandler @ 02525a58 */
  if ((bRam0000000004f4b79a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b79a = 1;
  }
                    /* try { // try from 02525874 to 0262587b has its CatchHandler @ 02525a50 */
  if (*(int *)(param_1 + 0xa0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xa0) = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
                    /* try { // try from 02525898 to 0262589f has its CatchHandler @ 02525a4c */
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 025258a8 to 026258af has its CatchHandler @ 02525a48 */
      fVar12 = *(float *)(param_1 + 0x60) / (float)iVar1;
                    /* try { // try from 025258b0 to 026258c3 has its CatchHandler @ 02525a44 */
      UnityEngine_UI_RawImage__set_uvRect_3edcf98
                (fVar12 * (float)param_2 + *(float *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0x5c),fVar12,*(undefined4 *)(param_1 + 100),
                 *(long *)(param_1 + 0x38),0);
      puVar2 = PTR_DAT_049b3b98;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                    /* try { // try from 025258dc to 026258df has its CatchHandler @ 02525a3c */
        FUN_021f0574();
      }
                    /* try { // try from 025258e8 to 0262590b has its CatchHandler @ 02525a40 */
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar4 != 0)) {
          plVar6 = *(long **)(param_1 + 0x78);
          lVar4 = UnityEngine_Sprite__get_texture_3bc3d98(lVar4,0);
          puVar2 = PTR_DAT_049b3b98;
          if ((*(long *)(param_1 + 0x10) != 0) && (plVar6 != (long *)0x0)) {
                    /* try { // try from 0252594c to 02625977 has its CatchHandler @ 02525ab4 */
            fVar9 = *(float *)(*(long *)(param_1 + 0x10) + 0xc0);
            fVar10 = *(float *)(param_1 + 100);
            fVar8 = *(float *)(param_1 + 0x58);
            fVar11 = *(float *)(param_1 + 0x5c);
                    /* try { // try from 02525978 to 026259b7 has its CatchHandler @ 025256ec */
            if ((bRam0000000004f4b7b0 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_049b3b98,lVar4,0);
              bRam0000000004f4b7b0 = 1;
            }
            lVar7 = plVar6[0x1e];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lVar7,lVar4,0);
            if ((uVar3 & 1) != 0) {
              plVar6[0x1e] = lVar4;
              thunk_FUN_021f190c(plVar6 + 0x1e,lVar4);
              (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
            }
            *(float *)(plVar6 + 0x1f) = fVar12 * (float)param_2 + fVar8;
            *(float *)((long)plVar6 + 0xfc) = fVar11 + fVar9 * fVar10;
            *(float *)(plVar6 + 0x20) = fVar12;
            *(float *)((long)plVar6 + 0x104) = -(fVar9 * fVar10);
                    /* WARNING: Could not recover jumptable at 0x02529ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

