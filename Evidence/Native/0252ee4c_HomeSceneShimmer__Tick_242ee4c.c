/* IL2CPP: HomeSceneShimmer$$Tick
void HomeSceneShimmer__Tick (HomeSceneShimmer_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneShimmer$$Tick
   void HomeSceneShimmer__Tick (HomeSceneShimmer_o* __this, float t, const MethodInfo* method); */

void HomeSceneShimmer__Tick_242ee4c(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar2 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3038);
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7ce = 1;
  }
  puVar1 = PTR_DAT_049c3038;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = *(long *)(param_2 + 0x10);
  fVar5 = param_1 / 9.0 - (float)(int)(param_1 / 9.0);
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar5) {
    fVar7 = fVar6;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar4 != 0) {
    HomeSceneQuad__SetTexture_2429bd4
              (-fVar7,0,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),lVar4,
               *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8));
    if (*(long *)(param_2 + 0x18) != 0) {
      HomeSceneQuad__SetTexture_2429bd4
                (fVar7 + _UNK_013aa3f0,_UNK_013aa41c,*(undefined4 *)(param_2 + 0x28),
                 *(undefined4 *)(param_2 + 0x2c),*(long *)(param_2 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10));
      fVar6 = (float)HomeSceneView__Alternate_24280f0
                               (param_1,0,_UNK_013aa544,
                                *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10));
      plVar3 = *(long **)(param_2 + 0x10);
      if (plVar3 != (long *)0x0) {
        fVar5 = 1.0;
        if (fVar6 <= 1.0) {
          fVar5 = fVar6;
        }
        fVar7 = 0.25;
        if (0.0 <= fVar6) {
          fVar7 = fVar5 * 0.5 + 0.25;
        }
        (**(code **)(*plVar3 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,fVar7,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        plVar3 = *(long **)(param_2 + 0x18);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0252efe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,fVar7,plVar3,*(undefined8 *)(*plVar3 + 0x2b0))
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

