/* IL2CPP: AdsModule$$WatchRewardedVideo
void AdsModule__WatchRewardedVideo (AdsModule_o* __this, System_String_o* placement, System_Action_bool__o* watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule$$WatchRewardedVideo
   void AdsModule__WatchRewardedVideo (AdsModule_o* __this, System_String_o* placement,
   System_Action_bool__o* watched, const MethodInfo* method); */

void AdsModule__WatchRewardedVideo_253d1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar1 = PTR_DAT_049ca428;
  if ((bRam0000000004f4bf94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049c8070);
    FUN_021f03f8(PTR_DAT_049ca430);
    FUN_021f03f8(PTR_DAT_049ca428);
    bRam0000000004f4bf94 = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  AdsModule___c__DisplayClass11_0___ctor_253de5c(lVar3,0);
  puVar2 = PTR_DAT_049ca430;
  puVar1 = PTR_DAT_049b5230;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(long *)(lVar3 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar3 + 0x10),param_1);
  puVar9 = (undefined8 *)(lVar3 + 0x18);
  *puVar9 = param_2;
  thunk_FUN_021f190c(puVar9,param_2);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38(uVar4,lVar3,*(undefined8 *)puVar2,0);
  lVar3 = System_Delegate__Combine_3145640(param_3,uVar4,0);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_0222c938(lVar3,uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(lVar3,uVar4);
    }
  }
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar8;
  uVar4 = *puVar9;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c8070) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_0263d380;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c8070,2);
LAB_0263d380:
                    /* WARNING: Could not recover jumptable at 0x0263d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar8,uVar4,lVar5,puVar9[1]);
  return;
}

