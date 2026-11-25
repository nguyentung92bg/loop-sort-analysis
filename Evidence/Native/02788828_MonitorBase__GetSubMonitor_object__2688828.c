/* IL2CPP: MonitorBase$$GetSubMonitor<object>
Il2CppObject* MonitorBase__GetSubMonitor_object_ (MonitorBase_o* __this, const MethodInfo_2688828* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$GetSubMonitor<object>
   Il2CppObject* MonitorBase__GetSubMonitor_object_ (MonitorBase_o* __this, const
   MethodInfo_2688828* method); */

long * MonitorBase__GetSubMonitor_object__2688828(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  plVar4 = *(long **)(param_2 + 0x38);
  if (plVar4 == (long *)0x0) {
    FUN_02229774(param_2);
    plVar4 = *(long **)(param_2 + 0x38);
  }
  lVar3 = *plVar4;
  plVar4 = *(long **)(param_1 + 0x78);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar2 = FUN_022524d4(lVar3,lVar5);
    if ((uVar2 & 1) == 0) {
      if ((*(ushort *)(lVar5 + 0x135) >> 0xc & 1) == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(lVar3 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar3 + 0x2a) == '\x1e')) ||
            (*(char *)(lVar3 + 0x2a) == '\x13')) &&
           ((*(long *)(lVar3 + 0x70) != 0 &&
            (lVar5 = *(long *)(*(long *)(lVar3 + 0x70) + 0x28), lVar5 != 0)))) {
          plStack_28 = (long *)FUN_0223c3e0(plVar4,lVar5);
          if (plStack_28 != (long *)0x0) {
            return plVar4;
          }
          iVar1 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar5,&plStack_28);
          if (-1 < iVar1) {
            uVar2 = FUN_0223c470(plVar4,lVar5,plStack_28);
            if ((uVar2 & 1) == 0) {
              (**(code **)(*plStack_28 + 0x10))();
              plStack_28 = (long *)FUN_0223c3e0(plVar4,lVar5);
            }
            if (plStack_28 != (long *)0x0) {
              return plVar4;
            }
          }
        }
        if (lRam0000000004f61810 != lVar3) {
          plVar4 = (long *)0x0;
        }
      }
    }
  }
  return plVar4;
}

