/* IL2CPP: SandFlowSystem$$<OnAwake>b__114_0
bool SandFlowSystem___OnAwake_b__114_0 (SandFlowSystem_o* __this, System_ValueTuple_Block__Carrier__o pair, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$<OnAwake>b__114_0
   bool SandFlowSystem___OnAwake_b__114_0 (SandFlowSystem_o* __this,
   System_ValueTuple_Block__Carrier__o pair, const MethodInfo* method); */

uint SandFlowSystem___OnAwake_b__114_0_24d1c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bc0c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7370);
    bRam0000000004f4bc0c = 1;
  }
  if (*(long *)(param_1 + 0x280) != 0) {
    uStack_40 = param_2;
    uStack_38 = param_3;
    uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (*(long *)(param_1 + 0x280),&uStack_40,*(undefined8 *)PTR_DAT_049c7370);
    return (uVar1 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

