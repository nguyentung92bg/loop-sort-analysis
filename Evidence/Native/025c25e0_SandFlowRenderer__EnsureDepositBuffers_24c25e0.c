/* IL2CPP: SandFlowRenderer$$EnsureDepositBuffers
void SandFlowRenderer__EnsureDepositBuffers (SandFlowRenderer_o* __this, int32_t count, int32_t grains, int32_t cells, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$EnsureDepositBuffers
   void SandFlowRenderer__EnsureDepositBuffers (SandFlowRenderer_o* __this, int32_t count, int32_t
   grains, int32_t cells, const MethodInfo* method); */

void SandFlowRenderer__EnsureDepositBuffers_24c25e0
               (long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bbd2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ed8);
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6f50);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6eb0);
    FUN_021f03f8(PTR_DAT_049c6ee8);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6f58);
    FUN_021f03f8(PTR_DAT_049c6eb8);
    FUN_021f03f8(PTR_DAT_049c6ef8);
    bRam0000000004f4bbd2 = 1;
  }
  if (0x3ff < param_2) {
    param_2 = 0x400;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  iVar1 = (param_2 + 0x7fU & 0xf80) * param_3;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    if ((*(int *)(param_1 + 0x1c0) == param_3) && (iVar1 <= *(int *)(param_1 + 0x1b8)))
    goto LAB_025c2728;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              (param_1 + 0x1b0,*(undefined8 *)PTR_DAT_049c6ed8);
  }
  uStack_40 = 0;
  uStack_38 = 0;
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
            (&uStack_40,iVar1,4,0,*(undefined8 *)PTR_DAT_049c6ee8);
  lVar2 = *(long *)(param_1 + 0x1c8);
  *(int *)(param_1 + 0x1c0) = param_3;
  *(undefined8 *)(param_1 + 0x1b8) = uStack_38;
  *(undefined8 *)(param_1 + 0x1b0) = uStack_40;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Array__Clear_31229cc(lVar2,0,*(undefined4 *)(lVar2 + 0x18),0);
LAB_025c2728:
  if (*(long *)(param_1 + 0x1d0) == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_40,0x400,4,1,*(undefined8 *)PTR_DAT_049c6f50);
    *(undefined8 *)(param_1 + 0x1d8) = uStack_38;
    *(undefined8 *)(param_1 + 0x1d0) = uStack_40;
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_40,0x200,4,1,*(undefined8 *)PTR_DAT_049c6eb0);
    *(undefined8 *)(param_1 + 0x188) = uStack_38;
    *(undefined8 *)(param_1 + 0x180) = uStack_40;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    if (*(int *)(param_1 + 0x1e8) == param_4) {
      return;
    }
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              (param_1 + 0x1e0,*(undefined8 *)PTR_DAT_049c6f10);
  }
  uStack_40 = 0;
  uStack_38 = 0;
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
            (&uStack_40,param_4,4,1,*(undefined8 *)PTR_DAT_049c6ee0);
  *(undefined8 *)(param_1 + 0x1e8) = uStack_38;
  *(undefined8 *)(param_1 + 0x1e0) = uStack_40;
  return;
}

