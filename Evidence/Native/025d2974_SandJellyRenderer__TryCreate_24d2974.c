/* IL2CPP: SandJellyRenderer$$TryCreate
bool SandJellyRenderer__TryCreate (UnityEngine_Shader_o* shader, SandJellyRenderer_o** renderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$TryCreate
   bool SandJellyRenderer__TryCreate (UnityEngine_Shader_o* shader, SandJellyRenderer_o** renderer,
   const MethodInfo* method); */

bool SandJellyRenderer__TryCreate_24d2974(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7138);
    bRam0000000004f4bc20 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(param_1,0,0);
  lVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = UnityEngine_Shader__get_isSupported_3bdfae4(param_1,0);
    lVar3 = 0;
    if ((uVar2 & 1) != 0) {
      lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7138);
      SandJellyRenderer___ctor_24d2098(lVar3,param_1);
    }
  }
  *param_2 = lVar3;
  thunk_FUN_021f190c(param_2,lVar3);
  return *param_2 != 0;
}

