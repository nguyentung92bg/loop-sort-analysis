/* IL2CPP: ChooseOneSubMonitor$$Setup
void ChooseOneSubMonitor__Setup (ChooseOneSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ChooseOneSubMonitor$$Setup
   void ChooseOneSubMonitor__Setup (ChooseOneSubMonitor_o* __this, const MethodInfo* method); */

void ChooseOneSubMonitor__Setup_246ffd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_049c5578;
  puVar6 = PTR_DAT_049c5570;
  puVar5 = PTR_DAT_049c5568;
  puVar4 = PTR_DAT_049c5560;
  puVar3 = PTR_DAT_049c5558;
  puVar2 = PTR_DAT_049c2f50;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b99c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5578);
    FUN_021f03f8(PTR_DAT_049c5558);
    FUN_021f03f8(PTR_DAT_049c5560);
    FUN_021f03f8(PTR_DAT_049c5568);
    FUN_021f03f8(PTR_DAT_049c5570);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b99c = 1;
  }
  SubMonitorBase__Setup_2481334(param_1,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x5a43c28f,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x74077b2d,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x1440f01c,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xfc374d55,uVar8,0);
  ChooseOneSubMonitor__UpdatePrice_247020c(param_1,0x5a43c28f,*(undefined8 *)(param_1 + 0x40));
  ChooseOneSubMonitor__UpdatePrice_247020c(param_1,0x74077b2d,*(undefined8 *)(param_1 + 0x48));
  ChooseOneSubMonitor__UpdatePrice_247020c(param_1,0x1440f01c,*(undefined8 *)(param_1 + 0x50));
  ChooseOneSubMonitor__UpdatePrice_247020c(param_1,0xfc374d55,*(undefined8 *)(param_1 + 0x58));
  lVar12 = *(long *)(param_1 + 0x60);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar7,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c02d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,10,uVar8,0);
    FUN_021f03f8(PTR_DAT_049ca940);
    FUN_021f03f8(PTR_DAT_049ca910);
    FUN_021f03f8(PTR_DAT_049ca948);
    FUN_021f03f8(PTR_DAT_049ca950);
    bRam0000000004f4c02d = 1;
  }
  if (*(long *)(lVar12 + 0x58) != 0) {
    uVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(lVar12 + 0x58),&stack0xffffffffffffffc8,&stack0xffffffffffffffc0,
                       *(undefined8 *)PTR_DAT_049ca910);
    lVar12 = *(long *)(lVar12 + 0x58);
    if ((uVar9 & 1) == 0) {
      if (lVar12 == 0) goto LAB_0264a76c;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar12,&stack0xffffffffffffffc8,uVar8,*(undefined8 *)PTR_DAT_049ca940);
    }
    else {
      if (lVar12 == 0) goto LAB_0264a76c;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar12,&stack0xffffffffffffffdc,&stack0xffffffffffffffc8,
                 *(undefined8 *)PTR_DAT_049ca948);
      lVar10 = System_Delegate__Combine_3145640(10,uVar8,0);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar8 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar11 = thunk_FUN_0222c938(lVar10,uVar8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar10,uVar8);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar12,&stack0xffffffffffffffc8,lVar11,*(undefined8 *)PTR_DAT_049ca950);
    }
    return;
  }
LAB_0264a76c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

