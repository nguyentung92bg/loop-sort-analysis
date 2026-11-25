/* IL2CPP: DataConflictMonitor$$CreateSaveElement
void DataConflictMonitor__CreateSaveElement (DataConflictMonitor_o* __this, DataConflictMonitor_SaveElementArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataConflictMonitor$$CreateSaveElement
   void DataConflictMonitor__CreateSaveElement (DataConflictMonitor_o* __this,
   DataConflictMonitor_SaveElementArgs_o args, const MethodInfo* method); */

void DataConflictMonitor__CreateSaveElement_243c078(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  int aiStack_70 [6];
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_049c3d98;
  if ((bRam0000000004f4b823 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c3da8);
    FUN_021f03f8(PTR_DAT_049c3d98);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049be840);
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4b823 = 1;
  }
  uStack_44 = 0;
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  puVar2 = PTR_DAT_049b6110;
  puVar1 = PTR_DAT_049b5310;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1;
    thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x10),param_1);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    *(undefined8 *)(lVar3 + 0x38) = param_2[4];
    *(undefined8 *)(lVar3 + 0x30) = uVar10;
    *(undefined8 *)(lVar3 + 0x28) = uVar9;
    *(undefined8 *)(lVar3 + 0x20) = uVar12;
    *(undefined8 *)(lVar3 + 0x18) = uVar7;
    thunk_FUN_021f190c(lVar3 + 0x18,0);
    lVar4 = *(long *)puVar1;
    uVar9 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_049b5050;
    uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    Extensions__GetPrefs_24e7680(aiStack_70,1,0,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar9,*(undefined4 *)(lVar3 + 0x38),0);
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = System_DateTimeOffset__op_Equality_30e4638(uVar7,uVar12,0,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = System_DateTimeOffset__ToString_30e35e8
                        ((undefined8 *)(lVar3 + 0x28),*(undefined8 *)PTR_DAT_049be840,0);
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_049b61a0;
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar9,0x8ac5d07a,uVar7,0);
    uVar7 = Phrase__get_Level_252ee24(0);
    puVar1 = PTR_DAT_049c3da0;
    plVar11 = *(long **)(lVar3 + 0x20);
    if (plVar11 != (long *)0x0) {
      lVar4 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c3da0) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_0253c2dc;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049c3da0,4);
LAB_0253c2dc:
      aiStack_70[0] = (*(code *)*puVar6)(plVar11,uVar10,puVar6[1]);
      aiStack_70[0] = aiStack_70[0] + 1;
      uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),aiStack_70);
      uVar10 = System_String__Format_2f73700(uVar7,uVar10,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar9,0x5f10bc4c,uVar10,0);
      plVar11 = *(long **)(lVar3 + 0x20);
      if (plVar11 != (long *)0x0) {
        lVar4 = *plVar11;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_0253c388;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar1,4);
LAB_0253c388:
        uStack_44 = (*(code *)*puVar6)(plVar11,uStack_58,puVar6[1]);
        uVar10 = System_Int32__ToString_30fbaa0(&uStack_44,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (uVar9,0x517db143,uVar10,0);
        lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                          (uVar9,0x8ac5d2c5,0);
        puVar2 = PTR_DAT_049c3da8;
        puVar1 = PTR_DAT_049b8d80;
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x100) != 0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar4 + 0x100),0);
          lVar4 = *(long *)(lVar4 + 0x100);
          uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
          UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,lVar3,*(undefined8 *)puVar2,0);
          if (lVar4 != 0) {
            UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar4,uVar9,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

