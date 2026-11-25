/* IL2CPP: GiftsModule$$ClaimGifts
Cysharp_Threading_Tasks_UniTask_bool__o GiftsModule__ClaimGifts (GiftsModule_o* __this, System_Collections_Generic_List_Gift__o* gifts, System_Action_Gift__o* grant, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GiftsModule$$ClaimGifts
   Cysharp_Threading_Tasks_UniTask_bool__o GiftsModule__ClaimGifts (GiftsModule_o* __this,
   System_Collections_Generic_List_Gift__o* gifts, System_Action_Gift__o* grant,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void GiftsModule__ClaimGifts_2543fd8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bff3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca6f8);
    bRam0000000004f4bff3 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca6f8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_02644074;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca6f8,1);
LAB_02644074:
                    /* WARNING: Could not recover jumptable at 0x02644094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,param_3,param_4,puVar1[1]);
  return;
}

