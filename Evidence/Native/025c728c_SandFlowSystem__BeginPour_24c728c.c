/* IL2CPP: SandFlowSystem$$BeginPour
void SandFlowSystem__BeginPour (SandFlowSystem_o* __this, SandFlowSystem_Pour_o pour, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$BeginPour
   void SandFlowSystem__BeginPour (SandFlowSystem_o* __this, SandFlowSystem_Pour_o pour, const
   MethodInfo* method); */

void SandFlowSystem__BeginPour_24c728c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  uint uStack_44;
  
  if ((bRam0000000004f4bbdf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2508);
    FUN_021f03f8(PTR_DAT_049c1710);
    bRam0000000004f4bbdf = 1;
  }
  uStack_44 = 0;
  if (*(long *)(param_1 + 0x108) == 0) {
LAB_025c73a4:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = *param_2;
  uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                    (*(long *)(param_1 + 0x108),uVar3,*(undefined8 *)PTR_DAT_049c1710);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_025c73a4;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0xf0),uVar3,&uStack_44,*(undefined8 *)PTR_DAT_049c2508);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb0);
      if (lVar2 == 0) goto LAB_025c73a4;
      if (*(uint *)(lVar2 + 0x18) <= uStack_44) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      if (0.5 < *(float *)(lVar2 + (long)(int)uStack_44 * 0x90 + 0x4c)) {
        return;
      }
      SandFlowSystem__RemoveAt_24c73ac(param_1);
    }
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined4 *)((long)param_2 + 0xc);
    uVar7 = *(undefined4 *)(param_2 + 2);
    fVar8 = *(float *)((long)param_2 + 0x14);
    fVar9 = *(float *)(param_2 + 3);
    fVar4 = (float)UnityEngine_Time__get_time_3c295c8(0);
    SandFlowSystem__StartPour_24c7624(uVar5,uVar6,uVar7,(fVar8 + fVar9) - fVar4,param_1,uVar3);
  }
  return;
}

