/* IL2CPP: BoosterContainer$$OnCancelClicked
void BoosterContainer__OnCancelClicked (BoosterContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$OnCancelClicked
   void BoosterContainer__OnCancelClicked (BoosterContainer_o* __this, const MethodInfo* method); */

undefined8 BoosterContainer__OnCancelClicked_256bc10(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_1 + 0x78);
                    /* try { // try from 0266bc14 to 0276bc9b has its CatchHandler @ 0266c340 */
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bc80 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7b30,0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc80 = 1;
  }
  if (*(int *)(lVar5 + 0x90) == 0) {
    return 1;
  }
  plVar8 = (long *)(lVar5 + 0x88);
  plVar2 = (long *)*plVar8;
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    puVar1 = PTR_DAT_049b3b98;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x88);
    *(undefined4 *)(lVar5 + 0x90) = 0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      if (*plVar8 == 0) goto LAB_025e5aac;
      uVar9 = UnityEngine_Component__get_gameObject_3c187f4(*plVar8,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
      }
      UnityEngine_Object__Destroy_3c24380(uVar9,0);
    }
    *(undefined8 *)(lVar5 + 0x88) = 0;
    thunk_FUN_021f190c(plVar8,0);
    if (*(long *)(lVar5 + 0x48) != 0) {
      InteractionModule__ClearTouchInterceptor_2535e84(*(long *)(lVar5 + 0x48),0);
      plVar2 = *(long **)(lVar5 + 0x70);
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7b30) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_025e5a88;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049c7b30,0);
LAB_025e5a88:
        (*(code *)*puVar4)(plVar2,0,puVar4[1]);
        return 1;
      }
    }
  }
LAB_025e5aac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

