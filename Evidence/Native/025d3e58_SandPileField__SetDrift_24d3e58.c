/* IL2CPP: SandPileField$$SetDrift
void SandPileField__SetDrift (SandPileField_o* __this, System_Single_array* drift, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$SetDrift
   void SandPileField__SetDrift (SandPileField_o* __this, System_Single_array* drift, int32_t count,
   const MethodInfo* method); */

void SandPileField__SetDrift_24d3e58(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bc2b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7698);
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bc2b = 1;
  }
  puVar1 = PTR_DAT_049c7698;
  if (param_2 == 0) {
    param_3 = 0;
    goto LAB_025d3f44;
  }
  plVar2 = (long *)(param_1 + 0x88);
  if (*plVar2 == 0) {
LAB_025d3ef4:
    lStack_40 = 0;
    uStack_38 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&lStack_40,*(undefined4 *)(param_2 + 0x18),4,1,*(undefined8 *)PTR_DAT_049c6ee0);
    *(undefined8 *)(param_1 + 0x90) = uStack_38;
    *plVar2 = lStack_40;
  }
  else if (*(int *)(param_1 + 0x90) != *(int *)(param_2 + 0x18)) {
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              (plVar2,*(undefined8 *)PTR_DAT_049c6f10);
    goto LAB_025d3ef4;
  }
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___CopyFrom_28f498c
            (plVar2,param_2,*(undefined8 *)puVar1);
  if (*(int *)(param_2 + 0x18) <= param_3) {
    param_3 = *(int *)(param_2 + 0x18);
  }
LAB_025d3f44:
  *(int *)(param_1 + 0xb8) = param_3;
  return;
}

