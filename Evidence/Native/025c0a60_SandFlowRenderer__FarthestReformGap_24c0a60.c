/* IL2CPP: SandFlowRenderer$$FarthestReformGap
float SandFlowRenderer__FarthestReformGap (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$FarthestReformGap
   float SandFlowRenderer__FarthestReformGap (SandFlowRenderer_o* __this, int32_t index,
   SandFlowPacket_o* packet, const MethodInfo* method); */

void SandFlowRenderer__FarthestReformGap_24c0a60(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_218 [116];
  undefined1 uStack_1a4;
  undefined1 auStack_1a3 [75];
  undefined1 auStack_158 [117];
  undefined1 auStack_e3 [79];
  undefined1 auStack_94 [76];
  long lStack_48;
  
  puVar2 = PTR_DAT_049c6ec0;
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4bbcb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ec0);
    bRam0000000004f4bbcb = 1;
  }
  SandFlowRenderer__CreateReformJob_24c0754(auStack_158,param_1,param_2,param_3);
  func_0x04608620(auStack_218,auStack_158,0x74);
  func_0x04608620(auStack_94,auStack_e3,0x4b);
  uStack_1a4 = 1;
  func_0x04608620(auStack_1a3,auStack_94,0x4b);
  Unity_Jobs_IJobExtensions__Run___Il2CppFullySharedGenericStructType__2643b3c
            (auStack_218,*(undefined8 *)puVar2);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(*(long *)(param_1 + 0x248) + 8));
}

