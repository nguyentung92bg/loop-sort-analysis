/* IL2CPP: AdsModule$$DisableNoAds
void AdsModule__DisableNoAds (AdsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$DisableNoAds
   void AdsModule__DisableNoAds (AdsModule_o* __this, const MethodInfo* method); */

void AdsModule__DisableNoAds_253d114(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bf93 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8070);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bf93 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  CloudPrefsBool__Set_24eb1bc(*(long *)(lVar2 + 0xb8) + 400,0,0);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0263d1e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c8070,1);
LAB_0263d1e8:
                    /* WARNING: Could not recover jumptable at 0x0263d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,puVar3[1]);
  return;
}

