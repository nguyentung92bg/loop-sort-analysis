/* IL2CPP: HomeSceneQuad$$SetTexture
void HomeSceneQuad__SetTexture (HomeSceneQuad_o* __this, UnityEngine_Texture_o* texture, UnityEngine_Rect_o uv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneQuad$$SetTexture
   void HomeSceneQuad__SetTexture (HomeSceneQuad_o* __this, UnityEngine_Texture_o* texture,
   UnityEngine_Rect_o uv, const MethodInfo* method); */

void HomeSceneQuad__SetTexture_2429bd4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b7b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7b0 = 1;
  }
  lVar3 = param_5[0x1e];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(lVar3,param_6,0);
  if ((uVar2 & 1) != 0) {
    param_5[0x1e] = param_6;
    thunk_FUN_021f190c(param_5 + 0x1e,param_6);
    (**(code **)(*param_5 + 0x308))(param_5,*(undefined8 *)(*param_5 + 0x310));
  }
  *(undefined4 *)(param_5 + 0x1f) = param_1;
  *(undefined4 *)((long)param_5 + 0xfc) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)((long)param_5 + 0x104) = param_4;
                    /* WARNING: Could not recover jumptable at 0x02529ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x2f8))(param_5,*(undefined8 *)(*param_5 + 0x300));
  return;
}

