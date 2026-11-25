/* IL2CPP: AreaSheet$$GetPreviousArea
AreaSheet_Row_o* AreaSheet__GetPreviousArea (AreaSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetPreviousArea
   AreaSheet_Row_o* AreaSheet__GetPreviousArea (AreaSheet_o* __this, const MethodInfo* method); */

undefined8 AreaSheet__GetPreviousArea_2558444(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((bRam0000000004f4c0bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb2f0);
    FUN_021f03f8(PTR_DAT_049c39c8);
    bRam0000000004f4c0bf = 1;
  }
  lVar3 = AreaSheet__GetCurrentArea_2557950(param_1);
  puVar2 = PTR_DAT_049c39c8;
  if (lVar3 != 0) {
    piVar4 = (int *)thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
    if (*piVar4 != 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      piVar4 = (int *)thunk_FUN_0224e54c(lVar3,*(long *)(**(long **)(*(long *)(*(long *)puVar2 +
                                                                              0x20) + 0xc0) + 0x80)
                                               + 0x20);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar3 = *plVar8;
      iVar1 = *piVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049cb2f0) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_02658558;
          }
          uVar7 = uVar7 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049cb2f0,0);
LAB_02658558:
                    /* WARNING: Could not recover jumptable at 0x0265856c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar5)(plVar8,iVar1 + -1,puVar5[1]);
      return uVar6;
    }
  }
  return 0;
}

