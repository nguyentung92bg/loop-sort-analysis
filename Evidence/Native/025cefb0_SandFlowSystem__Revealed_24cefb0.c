/* IL2CPP: SandFlowSystem$$Revealed
float SandFlowSystem__Revealed (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$Revealed
   float SandFlowSystem__Revealed (SandFlowSystem_o* __this, Block_o* block, const MethodInfo*
   method); */

float SandFlowSystem__Revealed_24cefb0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_24;
  
  if ((bRam0000000004f4bbfd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7200);
    FUN_021f03f8(PTR_DAT_049c7308);
    bRam0000000004f4bbfd = 1;
  }
  fStack_24 = 0.0;
  if (*(long *)(param_1 + 0x238) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x238),param_2,&fStack_24,*(undefined8 *)PTR_DAT_049c7308
                      );
    fVar2 = 1.0;
    if ((uVar1 & 1) != 0) {
      fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0x3f800000,0);
      if (*(long *)(param_1 + 0x160) == 0) goto LAB_025cf088;
      fVar4 = *(float *)(*(long *)(param_1 + 0x160) + 0x164);
      fVar2 = _UNK_013aa688;
      if (_UNK_013aa688 <= fVar4) {
        fVar2 = fVar4;
      }
      fVar2 = (fVar3 - fStack_24) / fVar2;
      if (1.0 <= fVar2) {
        if (*(long *)(param_1 + 0x238) == 0) goto LAB_025cf088;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x238),param_2,*(undefined8 *)PTR_DAT_049c7200);
        fVar2 = 1.0;
      }
    }
    return fVar2;
  }
LAB_025cf088:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

