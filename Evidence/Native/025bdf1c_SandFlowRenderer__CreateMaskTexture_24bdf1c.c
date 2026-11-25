/* IL2CPP: SandFlowRenderer$$CreateMaskTexture
UnityEngine_RenderTexture_o* SandFlowRenderer__CreateMaskTexture (int32_t width, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$CreateMaskTexture
   UnityEngine_RenderTexture_o* SandFlowRenderer__CreateMaskTexture (int32_t width, int32_t height,
   const MethodInfo* method); */

long SandFlowRenderer__CreateMaskTexture_24bdf1c(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_049c6ea0;
  if ((bRam0000000004f4bbbc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ea0);
    FUN_021f03f8(PTR_DAT_049c6ea8);
    bRam0000000004f4bbbc = 1;
  }
  uVar2 = UnityEngine_SystemInfo__SupportsRenderTextureFormat_3c28ed0(0x10,0);
  uVar4 = 0x10;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025bdfb0 with catch @ 025bdf8c
                       catch() { ... } // from try @ 025bdfe8 with catch @ 025bdf8c
                       catch() { ... } // from try @ 025be010 with catch @ 025bdf8c */
  UnityEngine_RenderTexture___ctor_3c00910(lVar3,param_1,param_2,0,uVar4,1,0);
                    /* try { // try from 025bdfa8 to 026bdfaf has its CatchHandler @ 025bdfc8 */
  if (lVar3 != 0) {
                    /* try { // try from 025bdfb0 to 026bdfe3 has its CatchHandler @ 025bdf8c */
    UnityEngine_Object__set_name_3c233fc(lVar3,*(undefined8 *)PTR_DAT_049c6ea8,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025bdfa8 with catch @ 025bdfc8
                        */
    UnityEngine_Texture__set_filterMode_3bf63a4(lVar3,0,0);
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar3,1,0);
                    /* try { // try from 025bdfe4 to 026bdfe7 has its CatchHandler @ 025be004 */
                    /* try { // try from 025bdfe8 to 026be007 has its CatchHandler @ 025bdf8c */
    UnityEngine_RenderTexture__Create_3bff7c0(lVar3,0);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025bdfe4 with catch @ 025be004 */
  FUN_021f06a0();
}

