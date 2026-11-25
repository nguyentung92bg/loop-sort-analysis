/* IL2CPP: AreasMonitor$$CreateElement
void AreasMonitor__CreateElement (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, AreaSheet_Row_o* data, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$CreateElement
   void AreasMonitor__CreateElement (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, AreaSheet_Row_o* data, int32_t idx, const
   MethodInfo* method); */

void AreasMonitor__CreateElement_2435728(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_049c3b10;
  if ((bRam0000000004f4b7f7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c3b18);
    FUN_021f03f8(PTR_DAT_049c3b10);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b7f7 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_5c = 0;
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar7 + 0x10),param_1);
    plVar12 = (long *)(lVar7 + 0x18);
    *plVar12 = param_3;
    thunk_FUN_021f190c(plVar12,param_3);
    if (*plVar12 != 0) {
      uVar1 = *(undefined4 *)(*plVar12 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = Extensions__ToLocalizedName_24e8258(uVar1,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x8ac5d12b,uVar8,0);
      if ((*plVar12 != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
        uVar5 = Areas__TryGetBackground_256fb4c
                          (*(long *)(param_1 + 0xa0),*(undefined4 *)(*plVar12 + 0x20),
                           *(undefined1 *)(param_1 + 0xe0),&uStack_58,0);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                          (param_2,0x3b77286f,0);
        puVar3 = PTR_DAT_049b4540;
        if (lVar9 != 0) {
          UnityEngine_Behaviour__set_enabled_3c17eec(lVar9,uVar5 & 1,0);
          if ((uVar5 & 1) != 0) {
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                      (param_2,0x3b77286f,uStack_58,0);
          }
          cVar2 = *(char *)(param_1 + 0xe0);
          lVar9 = FUN_021f04e4(*(undefined8 *)puVar3,1);
          lVar11 = *plVar12;
          if (cVar2 == '\0') {
            if (lVar11 != 0) {
              uStack_5c = *(undefined4 *)(lVar11 + 0x24);
              uVar8 = System_Int32__ToString_30fbaa0(&uStack_5c,0);
              if (lVar9 != 0) {
                if (*(int *)(lVar9 + 0x18) == 0) goto LAB_02535a60;
                *(undefined8 *)(lVar9 + 0x20) = uVar8;
                thunk_FUN_021f190c();
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                          (param_2,0x9d9334f4,lVar9,0);
                puVar3 = PTR_DAT_049b5310;
                lVar7 = *(long *)PTR_DAT_049b5310;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar7 = *(long *)puVar3;
                }
                lVar7 = *(long *)(lVar7 + 0xb8);
                uStack_78 = *(undefined8 *)(lVar7 + 0x68);
                uStack_80 = *(undefined8 *)(lVar7 + 0x60);
                uStack_68 = *(undefined8 *)(lVar7 + 0x78);
                uStack_70 = *(undefined8 *)(lVar7 + 0x70);
                iVar6 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_80,0);
                if (*plVar12 != 0) {
                  uVar1 = 0x39740faf;
                  if (*(int *)(*plVar12 + 0x24) <= iVar6 + 1) {
                    uVar1 = 0xcbb1848a;
                  }
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                            (param_2,uVar1,0);
                  return;
                }
              }
            }
          }
          else if ((lVar11 != 0) &&
                  (uVar8 = AreaSheet_Row__get_LevelRange_2558608(lVar11,0),
                  puVar4 = PTR_DAT_049c3b18, puVar3 = PTR_DAT_049b8d80, lVar9 != 0)) {
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined8 *)(lVar9 + 0x20) = uVar8;
              thunk_FUN_021f190c();
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                        (param_2,0x9d9334f4,lVar9,0);
              uVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                                (param_2,0xb9b66303,0);
              uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
              UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,lVar7,*(undefined8 *)puVar4,0);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__ReplaceButtonListener_335173c
                        (uVar8,0xb9b66303,uVar10,0);
              AreasMonitor__CreateRewards_2435a6c(param_1,param_2,*(undefined8 *)(lVar7 + 0x18));
              AreasMonitor__RenderElement_243650c(param_1,param_2,0);
              return;
            }
LAB_02535a60:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

