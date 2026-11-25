/* IL2CPP: HomeMonitor$$SetArea
void HomeMonitor__SetArea (HomeMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$SetArea
   void HomeMonitor__SetArea (HomeMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo*
   method); */

void HomeMonitor__SetArea_24476a4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_44 [4];
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b873 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c27f8);
    FUN_021f03f8(PTR_DAT_049c2800);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c39c8);
    bRam0000000004f4b873 = 1;
  }
  auStack_44[0] = 0;
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0x3b77286f,0);
  if (param_2 == 0) goto LAB_02547a38;
  piVar5 = (int *)thunk_FUN_0224e54c(param_2,*(long *)(**(long **)(*(long *)(*(long *)
                                                  PTR_DAT_049c39c8 + 0x20) + 0xc0) + 0x80) + 0x20);
  puVar3 = PTR_DAT_049b3b98;
  iVar1 = *piVar5;
  if (*(int *)(param_1 + 0x150) != iVar1) {
    uVar9 = *(undefined8 *)(param_1 + 0x158);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x158);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Object__Destroy_3c24380(uVar9,0);
    }
    HomeMonitor__ReleaseHomeScene_24453ac(param_1);
    if (lVar4 == 0) goto LAB_02547a38;
    UnityEngine_Behaviour__set_enabled_3c17eec(lVar4,1,0);
    iVar2 = *(int *)(param_2 + 0x20) + -1;
    uVar6 = HomeMonitor__HasHomeScene_2447cbc(param_1,iVar2);
    if ((uVar6 & 1) != 0) {
      UnityEngine_Behaviour__set_enabled_3c17eec(lVar4,0,0);
      auStack_44[0] =
           HomeMonitor__LoadHomeScene_2447da8(param_1,iVar2,*(undefined4 *)(param_2 + 0x20));
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_44,0);
      goto LAB_02547a14;
    }
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_02547a38;
    if (*(char *)(*(long *)(param_1 + 0x1a0) + 0x10) != '\0') {
      if ((*(long *)(param_1 + 0xe0) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0xe0) + 0x20), lVar7 == 0)) {
LAB_02547a38:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (iVar1 < *(int *)(lVar7 + 0x18)) {
        UnityEngine_UI_Image__set_sprite_3cee6e8(lVar4,0,0);
        if ((*(long *)(param_1 + 0xe0) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0xe0) + 0x20), lVar7 != 0)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar7,iVar1,&uStack_38,*(undefined8 *)PTR_DAT_049c2800);
          uVar9 = UnityEngine_Component__get_transform_3c18724(lVar4,0);
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_021f0574(lVar4);
          }
          uVar9 = UnityEngine_Object__Instantiate_object__2695b80
                            (uStack_38,uVar9,*(undefined8 *)PTR_DAT_049c3bd8);
          if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
            FUN_021f0574(*(long *)PTR_DAT_049b5480);
          }
          lVar4 = Extensions__GetRectTransform_3f0c498(uVar9,0);
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a190 = '\x01';
          }
          if (lVar4 != 0) {
            lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            UnityEngine_Transform__set_localScale_3c2ddfc
                      (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                       *(undefined4 *)(lVar7 + 0x14),lVar4,0);
            if (cRam0000000004f49d57 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8a18);
              cRam0000000004f49d57 = '\x01';
            }
            puVar3 = PTR_DAT_049b8a18;
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                      (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar4,0);
            if (cRam0000000004f49d57 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8a18);
              cRam0000000004f49d57 = '\x01';
            }
            puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(*puVar8,puVar8[1],lVar4,0);
            if (cRam0000000004f4a194 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8a18);
              cRam0000000004f4a194 = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            UnityEngine_RectTransform__set_anchorMax_3c2bdd0
                      (*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0xc),lVar4,0);
            *(undefined8 *)(param_1 + 0x158) = uVar9;
            thunk_FUN_021f190c(param_1 + 0x158,uVar9);
            goto LAB_02547a14;
          }
        }
        goto LAB_02547a38;
      }
    }
    HomeMonitor__SetAreaBackground_2447e50(param_1,*(undefined4 *)(param_2 + 0x20));
  }
LAB_02547a14:
  *(int *)(param_1 + 0x150) = iVar1;
  HomeMonitor__RefreshAreaAnimation_2447eb4(param_1);
  return;
}

