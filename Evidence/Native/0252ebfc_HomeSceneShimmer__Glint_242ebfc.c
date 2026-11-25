/* IL2CPP: HomeSceneShimmer$$Glint
UnityEngine_Texture2D_o* HomeSceneShimmer__Glint (int32_t w, int32_t h, float rx, float ry, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShimmer$$Glint
   UnityEngine_Texture2D_o* HomeSceneShimmer__Glint (int32_t w, int32_t h, float rx, float ry, float
   alpha, const MethodInfo* method); */

long HomeSceneShimmer__Glint_242ebfc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar2 = PTR_DAT_049c37b8;
  if ((bRam0000000004f4b7cc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b8);
    FUN_021f03f8(PTR_DAT_049c37c0);
    FUN_021f03f8(PTR_DAT_049c37b8);
    bRam0000000004f4b7cc = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(uint *)(lVar5 + 0x10) = param_4;
  puVar2 = PTR_DAT_049c33b8;
  *(undefined4 *)(lVar5 + 0x14) = param_1;
  puVar3 = PTR_DAT_049c37c0;
  *(uint *)(lVar5 + 0x18) = param_5;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined4 *)(lVar5 + 0x1c) = param_2;
  *(undefined4 *)(lVar5 + 0x20) = param_3;
  lVar7 = thunk_FUN_0222ca34(uVar6);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
            (lVar7,lVar5,*(undefined8 *)puVar3,0);
  puVar2 = PTR_DAT_049b8c98;
  if ((bRam0000000004f4b7a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9070);
    FUN_021f03f8(PTR_DAT_049b8c98);
    bRam0000000004f4b7a9 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Texture2D___ctor_3bfb1d4(lVar5,(ulong)param_4,param_5,4,0,0);
  puVar2 = PTR_DAT_049b9070;
  if (lVar5 != 0) {
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar5,0,0);
    UnityEngine_Texture__set_filterMode_3bf63a4(lVar5,1,0);
    lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,param_5 * param_4);
    if (0 < (int)param_5) {
      uVar8 = 0;
      uVar11 = 0;
      do {
        if (0 < (int)param_4) {
          if (lVar7 == 0) goto LAB_02528d8c;
          lVar9 = (ulong)uVar8 << 0x20;
          uVar10 = 0;
          do {
            fStack_84 = ((float)(int)uVar10 + 0.5) / (float)(int)param_4;
            fStack_88 = ((float)(int)uVar11 + 0.5) / (float)(int)param_5;
            (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),&fStack_84,&fStack_88,&fStack_8c,
                       *(undefined8 *)(lVar7 + 0x28));
            if (lVar4 == 0) goto LAB_02528d8c;
            if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar8 + uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            lVar1 = lVar9 >> 0x1e;
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 0x100000000;
            *(uint *)(lVar4 + lVar1 + 0x20) = (int)(fStack_8c * 255.0) << 0x18 | 0xffffff;
          } while (param_4 != uVar10);
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + param_4;
      } while (uVar11 != param_5);
    }
    UnityEngine_Texture2D__SetPixels32_3bfbf78(lVar5,lVar4,0);
    UnityEngine_Texture2D__Apply_3bfbb6c(lVar5,0,1,0);
    return lVar5;
  }
LAB_02528d8c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

