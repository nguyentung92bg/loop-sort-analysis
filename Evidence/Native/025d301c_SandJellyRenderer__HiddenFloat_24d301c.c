/* IL2CPP: SandJellyRenderer$$HiddenFloat
float SandJellyRenderer__HiddenFloat (UnityEngine_Material_o* material, System_String_o* name, float fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$HiddenFloat
   float SandJellyRenderer__HiddenFloat (UnityEngine_Material_o* material, System_String_o* name,
   float fallback, const MethodInfo* method); */

undefined1  [16]
SandJellyRenderer__HiddenFloat_24d301c(uint param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = UnityEngine_Material__HasProperty_3be6890(param_2,param_3,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = UnityEngine_Shader__PropertyToID_3be0c1c(param_3,param_3,0);
    if ((bRam0000000004f5735a & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a25ca8);
      FUN_021f03f8(PTR_DAT_049b89f8);
      bRam0000000004f5735a = 1;
    }
    if (param_2 != 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_2,0);
      }
      if (*(int *)(*(long *)PTR_DAT_049b89f8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (pcRam0000000004f57580 == (code *)0x0) {
        pcRam0000000004f57580 = (code *)FUN_021f03bc(&UNK_013c8fb4);
      }
                    /* WARNING: Could not recover jumptable at 0x03ceaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f57580)(lVar3,uVar1);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025d3068 to 026d3143 has its CatchHandler @ 025d3068
                       catch() { ... } // from try @ 025d3068 with catch @ 025d3068
                       catch() { ... } // from try @ 025d3160 with catch @ 025d3068
                       catch() { ... } // from try @ 025d31ec with catch @ 025d3068 */
  return ZEXT416(param_1);
}

