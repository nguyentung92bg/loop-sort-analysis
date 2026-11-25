/* IL2CPP: CollectionBar$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o CollectionBar__ApplyHomeAction (CollectionBar_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o CollectionBar__ApplyHomeAction (CollectionBar_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void CollectionBar__ApplyHomeAction_2511e00(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bdf5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9278);
    bRam0000000004f4bdf5 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c9278) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_02611e90;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c9278,1);
LAB_02611e90:
                    /* WARNING: Could not recover jumptable at 0x02611ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,0,param_2,puVar1[1]);
  return;
}

