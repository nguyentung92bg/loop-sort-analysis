/* IL2CPP: SandFlowRenderer$$CreateLiquidTexture
UnityEngine_RenderTexture_o* SandFlowRenderer__CreateLiquidTexture (int32_t width, int32_t height, int32_t format, System_String_o* name, bool mips, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$CreateLiquidTexture
   UnityEngine_RenderTexture_o* SandFlowRenderer__CreateLiquidTexture (int32_t width, int32_t
   height, int32_t format, System_String_o* name, bool mips, const MethodInfo* method); */

long SandFlowRenderer__CreateLiquidTexture_24bde24
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               uint param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_049c6ea0;
  if ((bRam0000000004f4bbbb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ea0);
    bRam0000000004f4bbbb = 1;
  }
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_RenderTexture___ctor_3c00910(lVar2,param_1,param_2,0,param_3,1,0);
  if (lVar2 != 0) {
    UnityEngine_Object__set_name_3c233fc(lVar2,param_4,0);
    uVar3 = 1;
    if ((param_5 & 1) != 0) {
      uVar3 = 2;
    }
    UnityEngine_Texture__set_filterMode_3bf63a4(lVar2,uVar3,0);
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar2,1,0);
    UnityEngine_RenderTexture__set_useMipMap_3bfeea0(lVar2,param_5 & 1,0);
    UnityEngine_RenderTexture__set_autoGenerateMips_3bff18c(lVar2,0,0);
    UnityEngine_RenderTexture__Create_3bff7c0(lVar2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

