/* IL2CPP: LoadingMonitor.LoadingScope$$Dispose
void LoadingMonitor_LoadingScope__Dispose (LoadingMonitor_LoadingScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoadingMonitor.LoadingScope$$Dispose
   void LoadingMonitor_LoadingScope__Dispose (LoadingMonitor_LoadingScope_o* __this, const
   MethodInfo* method); */

void LoadingMonitor_LoadingScope__Dispose_244e418(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b8b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b8b5 = 1;
  }
  plVar3 = (long *)(param_1 + 0x10);
  lVar4 = *plVar3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0xa0) = *(int *)(lVar4 + 0xa0) + -1;
    LoadingMonitor__Deactivate_244e270(lVar4,param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)plVar3 >> 0xc & 0x3f),
                   ((ulong)plVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

