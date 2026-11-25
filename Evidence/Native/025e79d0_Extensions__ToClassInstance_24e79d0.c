/* IL2CPP: Extensions$$ToClassInstance
LiveOpsBase_o* Extensions__ToClassInstance (int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToClassInstance
   LiveOpsBase_o* Extensions__ToClassInstance (int32_t liveOps, const MethodInfo* method); */

void Extensions__ToClassInstance_24e79d0(undefined4 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bc9d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c7d68);
    bRam0000000004f4bc9d = 1;
  }
  puVar3 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    plVar9 = *(long **)(lVar4 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b6110);
    }
    uVar5 = Extensions__ToClassType_24e7b3c(param_1);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b6750) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_025e7ae0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b6750,3);
LAB_025e7ae0:
      plVar9 = (long *)(*(code *)*puVar6)(plVar9,uVar5,puVar6[1]);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_049c7d68 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_049c7d68
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

