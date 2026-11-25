/* IL2CPP: AdsModule$$OnRewardedButtonShown
void AdsModule__OnRewardedButtonShown (AdsModule_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$OnRewardedButtonShown
   void AdsModule__OnRewardedButtonShown (AdsModule_o* __this, System_String_o* placement, const
   MethodInfo* method); */

void AdsModule__OnRewardedButtonShown_253d94c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bf99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8070);
    bRam0000000004f4bf99 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_0263d9e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c8070,6);
LAB_0263d9e8:
                    /* WARNING: Could not recover jumptable at 0x0263d9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

