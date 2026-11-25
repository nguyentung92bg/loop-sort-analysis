/* IL2CPP: RateUsMonitor$$Setup
void RateUsMonitor__Setup (RateUsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$Setup
   void RateUsMonitor__Setup (RateUsMonitor_o* __this, const MethodInfo* method); */

void RateUsMonitor__Setup_245abd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar4 = PTR_DAT_049c4c30;
  puVar3 = PTR_DAT_049c4c28;
  puVar2 = PTR_DAT_049c4c20;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b90d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4c38);
    FUN_021f03f8(PTR_DAT_049c4c40);
    FUN_021f03f8(PTR_DAT_049c4c30);
    FUN_021f03f8(PTR_DAT_049c4c28);
    FUN_021f03f8(PTR_DAT_049c4c20);
    FUN_021f03f8(PTR_DAT_049c4c48);
    FUN_021f03f8(PTR_DAT_049c4c50);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b90d = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x8ac5d2a8,uVar5,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x68aedbd2,uVar5,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar5,0);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0xaa652f73,0)
  ;
  puVar2 = PTR_DAT_049c4c40;
  if (lVar6 != 0) {
    lVar7 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType__261af38
                      (lVar6,*(undefined8 *)PTR_DAT_049c4c38);
    plVar9 = (long *)(param_1 + 0xa0);
    *plVar9 = lVar7;
    thunk_FUN_021f190c(plVar9,lVar7);
    uVar5 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType__261af38
                      (lVar6,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    thunk_FUN_021f190c();
    puVar3 = PTR_DAT_049c4c50;
    puVar2 = PTR_DAT_049c4c48;
    lVar6 = *plVar9;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        uVar10 = (uint)lVar7;
        if (*(int *)(lVar6 + 0x18) <= (int)uVar10) {
          return;
        }
        lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        System_Object___ctor_3142338(lVar6,0);
        if (lVar6 == 0) break;
        *(long *)(lVar6 + 0x18) = param_1;
        thunk_FUN_021f190c((long *)(lVar6 + 0x18),param_1);
        lVar8 = *(long *)(param_1 + 0xa0);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(uint *)(lVar6 + 0x10) = uVar10 + 1;
        lVar8 = *(long *)(lVar8 + lVar7 * 8 + 0x20);
        if (lVar8 == 0) break;
        lVar8 = *(long *)(lVar8 + 0x100);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,lVar6,*(undefined8 *)puVar2,0);
        if (lVar8 == 0) break;
        UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar8,uVar5,0);
        lVar6 = *plVar9;
        lVar7 = lVar7 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

