/* IL2CPP: AdsModule.<>c__DisplayClass11_0$$<WatchRewardedVideo>b__0
void AdsModule___c__DisplayClass11_0___WatchRewardedVideo_b__0 (AdsModule___c__DisplayClass11_0_o* __this, bool result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule.<>c__DisplayClass11_0$$<WatchRewardedVideo>b__0
   void AdsModule___c__DisplayClass11_0___WatchRewardedVideo_b__0
   (AdsModule___c__DisplayClass11_0_o* __this, bool result, const MethodInfo* method); */

void AdsModule___c__DisplayClass11_0___WatchRewardedVideo_b__0_253de64
               (long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uStack_30;
  ulong uStack_28;
  
  if ((bRam0000000004f4bf9e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca458);
    bRam0000000004f4bf9e = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x18);
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x40);
    uStack_28 = 0;
    thunk_FUN_021f190c(&uStack_30);
    uVar1 = uStack_30;
    uStack_28 = CONCAT71(uStack_28._1_7_,param_2) & 0xffffffffffffff01;
    uVar2 = uStack_28;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049ca458) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0263df1c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049ca458,0);
LAB_0263df1c:
      (*(code *)*puVar3)(plVar7,uVar1,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

