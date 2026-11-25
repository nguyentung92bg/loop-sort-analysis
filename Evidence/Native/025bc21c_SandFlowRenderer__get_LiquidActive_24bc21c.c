/* IL2CPP: SandFlowRenderer$$get_LiquidActive
bool SandFlowRenderer__get_LiquidActive (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$get_LiquidActive
   bool SandFlowRenderer__get_LiquidActive (SandFlowRenderer_o* __this, const MethodInfo* method);
    */

uint SandFlowRenderer__get_LiquidActive_24bc21c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbb7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbb7 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f584f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0,0);
    bRam0000000004f584f8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_3c23098(uVar3,0);
  return (uVar2 ^ 0xffffffff) & 1;
}

