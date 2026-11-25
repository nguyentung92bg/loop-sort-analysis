/* IL2CPP: AreasMonitor$$PlaceJoints
void AreasMonitor__PlaceJoints (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, AreasMonitor_AreaView_o* areaView, bool isLast, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$PlaceJoints
   void AreasMonitor__PlaceJoints (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, AreasMonitor_AreaView_o* areaView, bool
   isLast, const MethodInfo* method); */

void AreasMonitor__PlaceJoints_2436e0c
               (undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long alStack_88 [3];
  
  if ((bRam0000000004f4b7fb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c24f8);
    FUN_021f03f8(PTR_DAT_049c27f8);
    FUN_021f03f8(PTR_DAT_049c3ae8);
    FUN_021f03f8(PTR_DAT_049c3af0);
    FUN_021f03f8(PTR_DAT_049c2800);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7fb = 1;
  }
  lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                    (param_2,0x5cac2686,0);
  if ((((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x20), lVar7 != 0)) &&
      (UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0), puVar6 = PTR_DAT_049c3bd8,
      puVar5 = PTR_DAT_049c3af0, puVar4 = PTR_DAT_049c2800, puVar3 = PTR_DAT_049c24f8,
      puVar2 = PTR_DAT_049b5480, puVar1 = PTR_DAT_049b3b98, param_3 != 0)) &&
     ((*(long *)(param_3 + 0x28) != 0 && (lVar12 = *(long *)(param_3 + 0x30), lVar12 != 0)))) {
    iVar10 = *(int *)(*(long *)(param_3 + 0x28) + 0x18) + ((param_4 ^ 0xffffffff) & 1);
    do {
      if (iVar10 <= *(int *)(lVar12 + 0x18)) {
        if (iVar10 < 1) goto LAB_02537070;
        iVar11 = 0;
        goto LAB_02536fa8;
      }
      lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lVar7,0);
      if (lVar8 == 0) break;
      uVar9 = UnityEngine_Transform__get_parent_3c2d470(lVar8,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      uVar9 = UnityEngine_Object__Instantiate_object__2695b80(lVar7,uVar9,*(undefined8 *)puVar6);
      FUN_02333498(lVar12,uVar9,*(undefined8 *)puVar3);
      lVar12 = *(long *)(param_3 + 0x30);
    } while (lVar12 != 0);
  }
  goto LAB_025370b0;
  while( true ) {
    if (iVar11 < *(int *)(lVar7 + 0x18)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar7,iVar11,alStack_88,*(undefined8 *)puVar5);
    }
    if ((*(long *)(param_3 + 0x30) == 0) ||
       (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_3 + 0x30),iVar11,alStack_88,*(undefined8 *)puVar4),
       lVar7 = alStack_88[0], alStack_88[0] == 0)) goto LAB_025370b0;
    UnityEngine_GameObject__SetActive_3c1ce34(alStack_88[0],1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar7 = Extensions__GetRectTransform_3f0c498(lVar7,0);
    if (lVar7 == 0) goto LAB_025370b0;
    UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar7,0);
    Extensions__WithY_3f0d014(0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar7,0);
    iVar11 = iVar11 + 1;
    if (iVar10 == iVar11) break;
LAB_02536fa8:
    lVar7 = *(long *)(param_3 + 0x28);
    if (lVar7 == 0) goto LAB_025370b0;
  }
  lVar12 = *(long *)(param_3 + 0x30);
  while (lVar12 != 0) {
LAB_02537070:
    if (*(int *)(lVar12 + 0x18) <= iVar10) {
      return;
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar12,iVar10,alStack_88,*(undefined8 *)puVar4);
    if (alStack_88[0] == 0) break;
    UnityEngine_GameObject__SetActive_3c1ce34(alStack_88[0],0,0);
    iVar10 = iVar10 + 1;
    lVar12 = *(long *)(param_3 + 0x30);
  }
LAB_025370b0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

