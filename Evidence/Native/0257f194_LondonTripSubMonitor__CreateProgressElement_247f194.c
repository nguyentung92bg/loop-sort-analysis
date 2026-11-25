/* IL2CPP: LondonTripSubMonitor$$CreateProgressElement
void LondonTripSubMonitor__CreateProgressElement (LondonTripSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, LondonTripSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSubMonitor$$CreateProgressElement
   void LondonTripSubMonitor__CreateProgressElement (LondonTripSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, LondonTripSheet_Row_o* data, const MethodInfo*
   method); */

void LondonTripSubMonitor__CreateProgressElement_247f194
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uStack_b4;
  long alStack_b0 [5];
  undefined8 uStack_88;
  long lStack_58;
  
  puVar3 = PTR_DAT_049c59f8;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4b9f4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c57c8);
    FUN_021f03f8(PTR_DAT_049c57d0);
    FUN_021f03f8(PTR_DAT_049c57d8);
    FUN_021f03f8(PTR_DAT_049c5a00);
    FUN_021f03f8(PTR_DAT_049c59f8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b9f4 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
    plVar9 = (long *)(lVar5 + 0x18);
    *plVar9 = param_3;
    thunk_FUN_021f190c(plVar9,param_3);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                      (param_2,0x89a31dce,0);
    if (lVar6 != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (lVar6,alStack_b0,*(undefined8 *)PTR_DAT_049c57c8);
      lVar6 = alStack_b0[0];
      lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                        (param_2,0x8bf4b3bd,0);
      if (((lVar7 != 0) && (*plVar9 != 0)) && (lVar6 != 0)) {
        iVar1 = *(int *)(*plVar9 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x38);
        UnityEngine_Behaviour__set_enabled_3c17eec(lVar6,0 < iVar1,0);
        if (iVar1 < 1) {
          uStack_88 = Phrase__get_FreeUpper_252e6e0(0);
joined_r0x0257f338:
          if (lVar7 != 0) {
            TMPro_TMP_Text__SetText_3b0f78c(lVar7,uStack_88,0);
            puVar4 = PTR_DAT_049c5a00;
            puVar3 = PTR_DAT_049b8d80;
            if (*(long *)(param_1 + 0x88) != 0) {
              System_Collections_Generic_Queue___Il2CppFullySharedGenericType___Enqueue_291fb90
                        (*(long *)(param_1 + 0x88),param_2,*(undefined8 *)PTR_DAT_049c57d8);
              LondonTripSubMonitor__FillItemElements_247f4b4
                        (param_1,param_2,*(undefined8 *)(lVar5 + 0x18));
              uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
              UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,lVar5,*(undefined8 *)puVar4,0);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                        (param_2,0x89a31dce,uVar8,0);
              if (*(long *)(lVar2 + 0x28) == lStack_58) {
                return;
              }
              goto LAB_0257f3fc;
            }
          }
        }
        else if ((*plVar9 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
          uStack_b4 = *(undefined4 *)(*plVar9 + 0x20);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                    (*(long *)(param_1 + 0x90),&uStack_b4,alStack_b0,*(undefined8 *)PTR_DAT_049c57d0
                    );
          if (*(long *)(param_1 + 0x58) != 0) {
            PurchasingModule__GetProductMetadata_2549880
                      (alStack_b0,*(long *)(param_1 + 0x58),alStack_b0[0],0);
            goto joined_r0x0257f338;
          }
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0257f3fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

