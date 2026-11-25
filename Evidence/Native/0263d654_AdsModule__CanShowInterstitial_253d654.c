/* IL2CPP: AdsModule$$CanShowInterstitial
bool AdsModule__CanShowInterstitial (AdsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$CanShowInterstitial
   bool AdsModule__CanShowInterstitial (AdsModule_o* __this, const MethodInfo* method); */

undefined8 AdsModule__CanShowInterstitial_253d654(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f4bf97 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8070);
    bRam0000000004f4bf97 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_0263d6f0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c8070,4);
LAB_0263d6f0:
                    /* try { // try from 0263d6fc to 0273d703 has its CatchHandler @ 0263d8bc */
                    /* WARNING: Could not recover jumptable at 0x0263d700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}

