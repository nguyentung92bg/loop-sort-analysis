/* IL2CPP: MonitorBase$$OnActivated
void MonitorBase__OnActivated (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$OnActivated
   void MonitorBase__OnActivated (MonitorBase_o* __this, const MethodInfo* method); */

void MonitorBase__OnActivated_256c9f4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
  }
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
        if (plVar2 == (long *)0x0) goto LAB_0266ca7c;
        (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    return;
  }
LAB_0266ca7c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

