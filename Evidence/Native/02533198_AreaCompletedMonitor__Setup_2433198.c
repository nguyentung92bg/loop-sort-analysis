/* IL2CPP: AreaCompletedMonitor$$Setup
void AreaCompletedMonitor__Setup (AreaCompletedMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaCompletedMonitor$$Setup
   void AreaCompletedMonitor__Setup (AreaCompletedMonitor_o* __this, const MethodInfo* method); */

void AreaCompletedMonitor__Setup_2433198(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_049c39b8;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b7e8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39b8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b7e8 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x6bff1dde,0);
  puVar5 = (undefined8 *)(param_1 + 0xc0);
  *puVar5 = uVar3;
  thunk_FUN_021f190c(puVar5,uVar3);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar3,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xcbb1848a,uVar3,0);
  lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (*puVar5,0x99f4e89d,0);
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x100);
    uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (lVar4 != 0) {
      uVar3 = UnityEngine_Events_UnityEvent__GetDelegate_3c32a30(uVar3,uVar3,0);
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if ((bRam0000000004f58b7c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26d90);
        bRam0000000004f58b7c = 1;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        FUN_02333498(*(long *)(lVar4 + 0x18),uVar3,*(undefined8 *)PTR_DAT_04a26d90);
        *(undefined1 *)(lVar4 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

