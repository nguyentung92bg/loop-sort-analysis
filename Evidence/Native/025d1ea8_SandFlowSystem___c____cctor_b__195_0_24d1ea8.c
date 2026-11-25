/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_0
bool SandFlowSystem___c____cctor_b__195_0 (SandFlowSystem___c_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_0
   bool SandFlowSystem___c____cctor_b__195_0 (SandFlowSystem___c_o* __this, Block_o* block, const
   MethodInfo* method); */

bool SandFlowSystem___c____cctor_b__195_0_24d1ea8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc1d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long **)(param_2 + 0x100) != (long *)0x0) {
      return **(long **)(param_2 + 0x100) != *(long *)PTR_DAT_049c1818;
    }
  }
  return true;
}

