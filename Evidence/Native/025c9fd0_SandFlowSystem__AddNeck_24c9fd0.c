/* IL2CPP: SandFlowSystem$$AddNeck
void SandFlowSystem__AddNeck (SandFlowSystem_o* __this, Carrier_o* carrier, float strength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$AddNeck
   void SandFlowSystem__AddNeck (SandFlowSystem_o* __this, Carrier_o* carrier, float strength, const
   MethodInfo* method); */

void SandFlowSystem__AddNeck_24c9fd0(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fStack_38;
  float fStack_34;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbf5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c72a8);
    FUN_021f03f8(PTR_DAT_049c72b0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbf5 = 1;
  }
  fStack_38 = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_3,0,0);
  if ((0.0 < param_1) && ((uVar2 & 1) == 0)) {
    lVar3 = *(long *)(param_2 + 0x1e8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar3,param_3,&fStack_38,*(undefined8 *)PTR_DAT_049c72a8);
    fStack_34 = fStack_38;
    if ((uVar2 & 1) == 0) {
      fStack_34 = 0.0;
    }
    if (fStack_34 <= param_1) {
      fStack_34 = param_1;
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,param_3,&fStack_34,*(undefined8 *)PTR_DAT_049c72b0);
  }
  return;
}

