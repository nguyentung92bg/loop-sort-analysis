/* IL2CPP: MonitorBase$$RemoveSubMonitor
void MonitorBase__RemoveSubMonitor (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$RemoveSubMonitor
   void MonitorBase__RemoveSubMonitor (MonitorBase_o* __this, const MethodInfo* method); */

void MonitorBase__RemoveSubMonitor_256d028(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c19e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c19e = 1;
  }
  plVar4 = (long *)(param_1 + 0x78);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__IsValid_3aaaf2c
                    (param_1 + 0x80,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Release_3a93fb0
              (param_1 + 0x80,0);
  }
  if (*plVar4 != 0) {
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(*plVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Object__Destroy_3c24380(uVar3,0);
    }
    *plVar4 = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                   ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

