/* IL2CPP: HomeSceneQuad$$get_mainTexture
UnityEngine_Texture_o* HomeSceneQuad__get_mainTexture (HomeSceneQuad_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneQuad$$get_mainTexture
   UnityEngine_Texture_o* HomeSceneQuad__get_mainTexture (HomeSceneQuad_o* __this, const MethodInfo*
   method); */

undefined8 HomeSceneQuad__get_mainTexture_2429b38(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b7af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcb90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7af = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0xf0);
  uVar5 = *puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  puVar1 = PTR_DAT_049bcb90;
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_049bcb90;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  }
  return *puVar4;
}

