/* IL2CPP: MonitorBase$$Render
void MonitorBase__Render (MonitorBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$Render
   void MonitorBase__Render (MonitorBase_o* __this, const MethodInfo* method); */

void MonitorBase__Render_256c914(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) goto LAB_0266c9f0;
        plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
        if (plVar2 == (long *)0x0) goto LAB_0266c9ec;
        (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
LAB_0266c9f0:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
          if (plVar2 == (long *)0x0) goto LAB_0266c9ec;
          (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_0266c9ec:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

