/* IL2CPP: SandFlowSystem$$OnBoosterCompleted
void SandFlowSystem__OnBoosterCompleted (SandFlowSystem_o* __this, BoosterCompletedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$OnBoosterCompleted
   void SandFlowSystem__OnBoosterCompleted (SandFlowSystem_o* __this, BoosterCompletedMessage_o m,
   const MethodInfo* method); */

void SandFlowSystem__OnBoosterCompleted_24c7de8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((bRam0000000004f4bbe0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbe0 = 1;
  }
  puVar3 = PTR_DAT_049c2948;
  puVar2 = PTR_DAT_049c1818;
  puVar1 = PTR_DAT_049b3b98;
  if (((*(char *)(param_1 + 0x2c0) != '\0') && (param_2 == 5)) && (0 < *(int *)(param_1 + 0x188))) {
    lVar8 = 4;
    lVar7 = 0x4c;
    do {
      lVar5 = *(long *)(param_1 + 0xb0);
      if (lVar5 == 0) goto LAB_025c7f68;
      uVar9 = lVar8 - 4;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_025c7f6c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      if (ABS(*(float *)(lVar5 + lVar7) + -1.0) < 0.5) {
        lVar5 = *(long *)(param_1 + 0xb8);
        if (lVar5 == 0) goto LAB_025c7f68;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_025c7f6c;
        uVar6 = *(undefined8 *)(lVar5 + lVar8 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0xb8);
          if (lVar5 == 0) {
LAB_025c7f68:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_025c7f6c;
          lVar5 = *(long *)(lVar5 + lVar8 * 8);
          if (lVar5 == 0) goto LAB_025c7f68;
          if ((*(long **)(lVar5 + 0x100) != (long *)0x0) &&
             (**(long **)(lVar5 + 0x100) == *(long *)puVar2)) {
            if (*(long *)(param_1 + 0x128) == 0) goto LAB_025c7f68;
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                      (*(long *)(param_1 + 0x128),lVar5,*(undefined8 *)puVar3);
          }
        }
      }
      lVar5 = lVar8 + -3;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x90;
    } while (lVar5 < *(int *)(param_1 + 0x188));
  }
  return;
}

