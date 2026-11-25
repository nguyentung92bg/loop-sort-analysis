/* IL2CPP: HomeSceneSplash$$Pulse
void HomeSceneSplash__Pulse (UnityEngine_UI_RawImage_o* image, float t, float dur, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSplash$$Pulse
   void HomeSceneSplash__Pulse (UnityEngine_UI_RawImage_o* image, float t, float dur, float alpha,
   const MethodInfo* method); */

void HomeSceneSplash__Pulse_2427f94
               (undefined4 param_1,undefined4 param_2,float param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7a0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  fVar3 = (float)HomeSceneView__Alternate_24280f0
                           (param_1,0,param_2,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10));
  if ((param_4 != (long *)0x0) &&
     (lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_4,0), lVar2 != 0)) {
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar4;
    }
    UnityEngine_Transform__set_localScale_3c2ddfc
              (fVar5 * _UNK_013aa380 + _UNK_013aa540,fVar5 * _UNK_013aa4fc + 0.75,0x3f800000,lVar2,0
              );
                    /* WARNING: Could not recover jumptable at 0x025280ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,(fVar5 * 0.25 + 0.75) * param_3,param_4,
               *(undefined8 *)(*param_4 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

