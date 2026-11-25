/* IL2CPP: SandFlowSystem$$Dispose
void SandFlowSystem__Dispose (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Dispose
   void SandFlowSystem__Dispose (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__Dispose_24d0cc4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc07 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc07 = 1;
  }
  SandFlowSystem__Shutdown_24c6900(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x1b0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x1b0),0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    UnityEngine_Object__Destroy_3c24380(uVar7,0);
  }
  if ((bRam0000000004f4c0a8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8,0);
    bRam0000000004f4c0a8 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar6;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b3cc8) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02655f90;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b3cc8,0);
LAB_02655f90:
                    /* WARNING: Could not recover jumptable at 0x02655fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,puVar3[1]);
  return;
}

