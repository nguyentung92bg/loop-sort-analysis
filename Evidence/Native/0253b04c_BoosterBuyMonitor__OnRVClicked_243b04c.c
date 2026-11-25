/* IL2CPP: BoosterBuyMonitor$$OnRVClicked
void BoosterBuyMonitor__OnRVClicked (BoosterBuyMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBuyMonitor$$OnRVClicked
   void BoosterBuyMonitor__OnRVClicked (BoosterBuyMonitor_o* __this, const MethodInfo* method); */

void BoosterBuyMonitor__OnRVClicked_243b04c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar2 = PTR_DAT_049c3cf8;
  puVar1 = PTR_DAT_049b5230;
  if ((bRam0000000004f4b814 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049c3cf8);
    FUN_021f03f8(PTR_DAT_049c3d00);
    bRam0000000004f4b814 = 1;
  }
  lVar10 = *(long *)(param_1 + 0xb0);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar1 = PTR_DAT_049ca428;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar6 = *(undefined8 *)PTR_DAT_049c3d00;
  if ((bRam0000000004f4bf94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230,uVar6,uVar3,0);
    FUN_021f03f8(PTR_DAT_049c8070);
    FUN_021f03f8(PTR_DAT_049ca430);
    FUN_021f03f8(PTR_DAT_049ca428);
    bRam0000000004f4bf94 = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  AdsModule___c__DisplayClass11_0___ctor_253de5c(lVar4,0);
  puVar2 = PTR_DAT_049ca430;
  puVar1 = PTR_DAT_049b5230;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(long *)(lVar4 + 0x10) = lVar10;
  thunk_FUN_021f190c((long *)(lVar4 + 0x10),lVar10);
  puVar11 = (undefined8 *)(lVar4 + 0x18);
  *puVar11 = uVar6;
  thunk_FUN_021f190c(puVar11,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38(uVar6,lVar4,*(undefined8 *)puVar2,0);
  lVar4 = System_Delegate__Combine_3145640(uVar3,uVar6,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_0222c938(lVar4,uVar3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(lVar4,uVar3);
    }
  }
  plVar9 = *(long **)(lVar10 + 0x10);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar10 = *plVar9;
  uVar3 = *puVar11;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar11 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_0263d380;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c8070,2);
LAB_0263d380:
                    /* WARNING: Could not recover jumptable at 0x0263d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar11)(plVar9,uVar3,lVar5,puVar11[1]);
  return;
}

