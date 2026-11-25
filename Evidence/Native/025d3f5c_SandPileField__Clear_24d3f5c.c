/* IL2CPP: SandPileField$$Clear
void SandPileField__Clear (SandPileField_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$Clear
   void SandPileField__Clear (SandPileField_o* __this, const MethodInfo* method); */

void SandPileField__Clear_24d3f5c(long param_1)

{
  ulong auStack_30 [2];
  
  if ((bRam0000000004f4bc2c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6f30);
    FUN_021f03f8(PTR_DAT_049c76a0);
    FUN_021f03f8(PTR_DAT_049c76a8);
    bRam0000000004f4bc2c = 1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    SandPileField__Fill___Il2CppFullySharedGenericStructType__26b5bac
              (*(long *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),auStack_30,
               *(undefined8 *)PTR_DAT_049c76a8);
  }
  *(undefined1 *)(param_1 + 0xc9) = 1;
  if (*(long *)(param_1 + 0x78) != 0) {
    auStack_30[0] = auStack_30[0] & 0xffffffff00000000;
    SandPileField__Fill___Il2CppFullySharedGenericStructType__26b5bac
              (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),auStack_30,
               *(undefined8 *)PTR_DAT_049c76a0);
  }
  SandPileField__BeginDeposit_24d401c(param_1);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}

