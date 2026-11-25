/* IL2CPP: RemoteConfigModule$$Fetch
Cysharp_Threading_Tasks_UniTask_o RemoteConfigModule__Fetch (RemoteConfigModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RemoteConfigModule$$Fetch
   Cysharp_Threading_Tasks_UniTask_o RemoteConfigModule__Fetch (RemoteConfigModule_o* __this, const
   MethodInfo* method); */

void RemoteConfigModule__Fetch_25536ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4c08f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf00);
    bRam0000000004f4c08f = 1;
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
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049caf00) {
                    /* try { // try from 0265376c to 0275378b has its CatchHandler @ 0265397c */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02653774;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049caf00,0);
LAB_02653774:
                    /* WARNING: Could not recover jumptable at 0x02653784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

