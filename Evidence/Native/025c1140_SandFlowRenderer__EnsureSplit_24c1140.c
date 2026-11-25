/* IL2CPP: SandFlowRenderer$$EnsureSplit
void SandFlowRenderer__EnsureSplit (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$EnsureSplit
   void SandFlowRenderer__EnsureSplit (SandFlowRenderer_o* __this, const MethodInfo* method); */

void SandFlowRenderer__EnsureSplit_24c1140(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bbcd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f08);
    FUN_021f03f8(PTR_DAT_049c6e18);
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bbcd = 1;
  }
  iVar2 = *(int *)(param_1 + 0x324);
  if (iVar2 < 0x21) {
    iVar2 = 0x20;
  }
  if ((*(long *)(param_1 + 0x290) == 0) || (*(int *)(param_1 + 0x2a8) != iVar2)) {
    SandFlowRenderer__CompleteDeposit_24bef9c(param_1,1);
    *(int *)(param_1 + 0x2a8) = iVar2;
    System_Array__Clear_31229cc(*(undefined8 *)(param_1 + 0x278),0,0x100,0);
    System_Array__Clear_31229cc(*(undefined8 *)(param_1 + 0x280),0,0x100,0);
    if (*(long *)(param_1 + 0x290) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                (param_1 + 0x290,*(undefined8 *)PTR_DAT_049c6f10);
    }
    if (*(long *)(param_1 + 600) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((undefined8 *)(param_1 + 600),*(undefined8 *)PTR_DAT_049c6f10);
    }
    puVar4 = PTR_DAT_049c6ee0;
    if (*(long *)(param_1 + 0x268) != 0) {
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
                ((undefined8 *)(param_1 + 0x268),*(undefined8 *)PTR_DAT_049c6f10);
    }
    puVar3 = PTR_DAT_049c6e18;
    uStack_50 = 0;
    uStack_48 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_50,iVar2 << 8,4,1,*(undefined8 *)puVar4);
    uVar6 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x298) = uStack_48;
    *(undefined8 *)(param_1 + 0x290) = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_60,iVar2,4,1,uVar6);
    uVar6 = *(undefined8 *)puVar4;
    *(undefined8 *)(param_1 + 0x260) = uStack_58;
    *(undefined8 *)(param_1 + 600) = uStack_60;
    uStack_70 = 0;
    uStack_68 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_70,iVar2,4,1,uVar6);
    plVar1 = (long *)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x270) = uStack_68;
    *(undefined8 *)(param_1 + 0x268) = uStack_70;
    if (*(long *)(param_1 + 0x2a0) != 0) {
      UnityEngine_ComputeBuffer__Release_3c26e90(*(long *)(param_1 + 0x2a0),0);
    }
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    UnityEngine_ComputeBuffer___ctor_3c26e60(lVar5,iVar2 << 8,4,0x10,0);
    *plVar1 = lVar5;
    thunk_FUN_021f190c(plVar1,lVar5);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_ComputeBuffer__SetData___Il2CppFullySharedGenericStructType__25c3dd4
              (*plVar1,*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),
               *(undefined8 *)PTR_DAT_049c6f08);
  }
  return;
}

