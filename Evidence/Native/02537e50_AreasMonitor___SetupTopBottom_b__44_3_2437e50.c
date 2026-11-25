/* IL2CPP: AreasMonitor$$<SetupTopBottom>b__44_3
void AreasMonitor___SetupTopBottom_b__44_3 (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor$$<SetupTopBottom>b__44_3
   void AreasMonitor___SetupTopBottom_b__44_3 (AreasMonitor_o* __this, const MethodInfo* method); */

undefined8 AreasMonitor___SetupTopBottom_b__44_3_2437e50(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_38;
  
  uVar1 = *(undefined4 *)(param_1 + 0x154);
  uVar5 = *(ulong *)(param_1 + 0x14c);
  uVar8 = (uint)uVar5;
  if (cRam0000000004f4b66a == '\0') {
    FUN_021f03f8(&DAT_04baabc0,uVar1,1,0);
    FUN_021f03f8(&DAT_04b77408);
    FUN_021f03f8(&DAT_04b88908);
    FUN_021f03f8(&DAT_04b8b0c8);
    cRam0000000004f4b66a = '\x01';
  }
  if (-1 < (int)uVar8) {
    if (cRam0000000004f4b661 == '\0') {
      FUN_021f03f8(&DAT_04b8b0c8);
      cRam0000000004f4b661 = '\x01';
    }
    plVar9 = *(long **)(_DAT_04b8b0c8 + 0xb8);
    if ((int)uVar8 < (int)plVar9[2]) {
      if (*(int *)(_DAT_04b77408 + 0xe4) == 0) {
        FUN_021f0574();
        plVar9 = *(long **)(_DAT_04b8b0c8 + 0xb8);
      }
      lVar2 = *(long *)(_DAT_04baabc0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02229718();
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        if (*(uint *)(plVar9 + 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        func_0x04608620(&plStack_38,
                        (long)plVar9 +
                        (uVar5 & 0xffffffff) * (ulong)*(uint *)(*plVar9 + 0x104) + 0x20,
                        *(undefined4 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x28) + 0xfc));
        if (plStack_38 != (long *)0x0) {
          lVar2 = *plStack_38;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c22a0) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_024f7758;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)PTR_DAT_049c22a0,2);
LAB_024f7758:
                    /* WARNING: Could not recover jumptable at 0x024f777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)*puVar3)(plStack_38,uVar5,uVar1,1,puVar3[1]);
          return uVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return 0;
}

