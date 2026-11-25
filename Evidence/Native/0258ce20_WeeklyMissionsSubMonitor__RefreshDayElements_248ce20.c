/* IL2CPP: WeeklyMissionsSubMonitor$$RefreshDayElements
void WeeklyMissionsSubMonitor__RefreshDayElements (WeeklyMissionsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$RefreshDayElements
   void WeeklyMissionsSubMonitor__RefreshDayElements (WeeklyMissionsSubMonitor_o* __this, const
   MethodInfo* method); */

void WeeklyMissionsSubMonitor__RefreshDayElements_248ce20(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lStack_58;
  
  if ((bRam0000000004f4ba53 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a30);
    FUN_021f03f8(PTR_DAT_049c27f8);
    FUN_021f03f8(PTR_DAT_049c2800);
    bRam0000000004f4ba53 = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x297c94cc,0);
  puVar3 = PTR_DAT_049c3a30;
  puVar2 = PTR_DAT_049c2800;
  if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x30), lVar6 != 0)) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar8) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar6,iVar8,&lStack_58,*(undefined8 *)puVar2);
      if (lStack_58 == 0) break;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lStack_58,&lStack_58,*(undefined8 *)puVar3);
      lVar6 = lStack_58;
      if (*(long *)(param_1 + 0x58) == 0) break;
      iVar4 = WeeklyMissions__GetCurrentDay_252c638(*(long *)(param_1 + 0x58),0);
      uVar1 = 0xcbb1848a;
      if (iVar4 <= iVar8) {
        uVar1 = 0x39740faf;
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (lVar6,uVar1,0);
      if (iVar8 + 1 == *(int *)(param_1 + 0xc0)) {
        uVar1 = 0xf7b703e5;
LAB_0258cf30:
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (lVar6,uVar1,0);
      }
      else if (iVar8 < iVar4) {
        if (*(long *)(param_1 + 0x58) == 0) break;
        uVar7 = WeeklyMissions__HasClaimableMission_252d3e8(*(long *)(param_1 + 0x58),iVar8 + 1,0);
        if ((uVar7 & 1) != 0) {
          uVar1 = 0xe3ae513d;
          goto LAB_0258cf30;
        }
      }
      if (iVar8 == 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (lVar6,0xdedfd100,0);
      }
      if (*(long *)(lVar5 + 0x30) == 0) break;
      if (iVar8 == *(int *)(*(long *)(lVar5 + 0x30) + 0x18) + -1) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (lVar6,0x2f5fc6a,0);
      }
      lVar6 = *(long *)(lVar5 + 0x30);
      iVar8 = iVar8 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

