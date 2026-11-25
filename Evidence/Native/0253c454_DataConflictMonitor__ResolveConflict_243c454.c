/* IL2CPP: DataConflictMonitor$$ResolveConflict
void DataConflictMonitor__ResolveConflict (DataConflictMonitor_o* __this, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataConflictMonitor$$ResolveConflict
   void DataConflictMonitor__ResolveConflict (DataConflictMonitor_o* __this, int32_t resolution,
   const MethodInfo* method); */

void DataConflictMonitor__ResolveConflict_243c454(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f4b824 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3db0);
    bRam0000000004f4b824 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Deactivate_object__2688964
              (*(long *)(param_1 + 0x30),0,*(undefined8 *)PTR_DAT_049c3db0);
    puVar1 = PTR_DAT_049b5048;
    lVar2 = *(long *)(param_1 + 0xa0);
    if (lVar2 != 0) {
      if ((bRam0000000004f4bcd0 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5048,param_2,0);
        bRam0000000004f4bcd0 = 1;
      }
      lVar3 = *(long *)puVar1;
      *(int *)(lVar2 + 0x14) = param_2;
      uVar4 = *(undefined8 *)(lVar3 + 0xb8);
      *(undefined1 *)(lVar2 + 0x10) = 1;
      *(bool *)uVar4 = param_2 == 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

