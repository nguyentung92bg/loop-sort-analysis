/* IL2CPP: FulfillModule$$FulfillNoAds
void FulfillModule__FulfillNoAds (FulfillModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillNoAds
   void FulfillModule__FulfillNoAds (FulfillModule_o* __this, const MethodInfo* method); */

void FulfillModule__FulfillNoAds_2543c24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_049b5310;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bf92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8070,0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bf92 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  CloudPrefsBool__Set_24eb1bc(*(long *)(lVar2 + 0xb8) + 400,1,0);
  plVar7 = *(long **)(lVar4 + 0x10);
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0263d100;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c8070,0);
LAB_0263d100:
                    /* WARNING: Could not recover jumptable at 0x0263d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}

