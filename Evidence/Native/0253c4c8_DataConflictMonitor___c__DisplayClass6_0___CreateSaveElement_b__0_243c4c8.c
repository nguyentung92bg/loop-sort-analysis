/* IL2CPP: DataConflictMonitor.<>c__DisplayClass6_0$$<CreateSaveElement>b__0
void DataConflictMonitor___c__DisplayClass6_0___CreateSaveElement_b__0 (DataConflictMonitor___c__DisplayClass6_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataConflictMonitor.<>c__DisplayClass6_0$$<CreateSaveElement>b__0
   void DataConflictMonitor___c__DisplayClass6_0___CreateSaveElement_b__0
   (DataConflictMonitor___c__DisplayClass6_0_o* __this, const MethodInfo* method); */

void DataConflictMonitor___c__DisplayClass6_0___CreateSaveElement_b__0_243c4c8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((bRam0000000004f4b824 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3db0);
    bRam0000000004f4b824 = 1;
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    Monitors__Deactivate_object__2688964(*(long *)(lVar3 + 0x30),0,*(undefined8 *)PTR_DAT_049c3db0);
    puVar2 = PTR_DAT_049b5048;
    lVar3 = *(long *)(lVar3 + 0xa0);
    if (lVar3 != 0) {
      if ((bRam0000000004f4bcd0 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5048,iVar1,0);
        bRam0000000004f4bcd0 = 1;
      }
      lVar4 = *(long *)puVar2;
      *(int *)(lVar3 + 0x14) = iVar1;
      uVar5 = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined1 *)(lVar3 + 0x10) = 1;
      *(bool *)uVar5 = iVar1 == 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

