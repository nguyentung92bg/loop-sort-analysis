/* IL2CPP: SandFlowRenderer$$RefreshSplit
void SandFlowRenderer__RefreshSplit (SandFlowRenderer_o* __this, SandFlowPacket_array* packets, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$RefreshSplit
   void SandFlowRenderer__RefreshSplit (SandFlowRenderer_o* __this, SandFlowPacket_array* packets,
   int32_t count, const MethodInfo* method); */

void SandFlowRenderer__RefreshSplit_24c1360(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  
  if ((bRam0000000004f4bbce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f18);
    bRam0000000004f4bbce = 1;
  }
  SandFlowRenderer__EnsureSplit_24c1140(param_1);
  System_Array__Clear_31229cc(*(undefined8 *)(param_1 + 0x288),0,0x100,0);
  if (0 < (int)param_3) {
    if (param_2 == 0) goto LAB_025c1524;
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x4c);
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_025c1520;
      if (0.5 <= *pfVar7) {
        uVar3 = SandFlowRenderer__SplitSlotOf_24c0f28(param_1,pfVar7 + -0xb);
        if (-1 < (int)uVar3) {
          lVar5 = *(long *)(param_1 + 0x288);
          if (lVar5 == 0) goto LAB_025c1524;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_025c1520;
          *(undefined1 *)(lVar5 + (ulong)uVar3 + 0x20) = 1;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_025c1520;
        uVar3 = SandFlowRenderer__PreviousSlotOf_24c10a0(param_1,pfVar7 + -0xb);
        if (-1 < (int)uVar3) {
          lVar5 = *(long *)(param_1 + 0x288);
          if (lVar5 == 0) goto LAB_025c1524;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_025c1520;
          *(undefined1 *)(lVar5 + (ulong)uVar3 + 0x20) = 1;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 0x24;
    } while (param_3 != uVar6);
  }
  puVar2 = PTR_DAT_049c6f18;
  uVar6 = 0;
  while (lVar5 = *(long *)(param_1 + 0x288), lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_025c1520;
    if (*(char *)(lVar5 + uVar6 + 0x20) == '\0') {
      lVar5 = *(long *)(param_1 + 0x278);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_025c1520:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20) = 0;
    }
    lVar5 = *(long *)(param_1 + 0x280);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_025c1520;
    if (*(char *)(lVar5 + uVar6 + 0x20) != '\0') {
      lVar4 = *(long *)(param_1 + 0x2a0);
      *(undefined1 *)(lVar5 + uVar6 + 0x20) = 0;
      if (lVar4 == 0) break;
      iVar1 = *(int *)(param_1 + 0x2a8) * (int)uVar6;
      UnityEngine_ComputeBuffer__SetData___Il2CppFullySharedGenericStructType__25c3e6c
                (lVar4,*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),iVar1,iVar1
                 ,*(int *)(param_1 + 0x2a8),*(undefined8 *)puVar2);
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x100) {
      return;
    }
  }
LAB_025c1524:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

