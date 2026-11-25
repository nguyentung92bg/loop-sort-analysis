/* IL2CPP: EconomyMonitor$$AddItemView
void EconomyMonitor__AddItemView (EconomyMonitor_o* __this, int32_t item, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$AddItemView
   void EconomyMonitor__AddItemView (EconomyMonitor_o* __this, int32_t item,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, System_String_o* placement, const MethodInfo*
   method); */

void EconomyMonitor__AddItemView_243c7e8
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_48;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049c3e28;
  if ((bRam0000000004f4b828 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e30);
    FUN_021f03f8(PTR_DAT_049c3e38);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c3e48);
    FUN_021f03f8(PTR_DAT_049c3e50);
    FUN_021f03f8(PTR_DAT_049c3e58);
    FUN_021f03f8(PTR_DAT_049c3e60);
    FUN_021f03f8(PTR_DAT_049c3e28);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b828 = 1;
  }
  lStack_48 = 0;
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar2 + 0x10),param_1);
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    thunk_FUN_021f190c((undefined8 *)(lVar2 + 0x18),param_4);
    if (*(long *)(param_1 + 200) != 0) {
      uStack_34 = param_2;
      uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_1 + 200),&uStack_34,&lStack_48,
                         *(undefined8 *)PTR_DAT_049c3e30);
      if ((uVar3 & 1) == 0) {
        lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3e58);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar4,*(undefined8 *)PTR_DAT_049c3e50);
        lStack_48 = lVar4;
        if (*(long *)(param_1 + 200) == 0) goto LAB_0253c9ec;
        uStack_34 = param_2;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 200),&uStack_34,lVar4,*(undefined8 *)PTR_DAT_049c3e38);
      }
      if (lStack_48 != 0) {
        uVar3 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                          (lStack_48,param_3,*(undefined8 *)PTR_DAT_049c3e48);
        if ((uVar3 & 1) == 0) {
          if (lStack_48 == 0) goto LAB_0253c9ec;
          FUN_02333498(lStack_48,param_3,*(undefined8 *)PTR_DAT_049c3e40);
          uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
          UnityEngine_Events_UnityAction___ctor_3c32934
                    (uVar5,lVar2,*(undefined8 *)PTR_DAT_049c3e60,0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                    (param_3,0x854128ce,uVar5,0);
          EconomyMonitor__UpdateView_243c9f8(param_1,param_2,param_3);
        }
        return;
      }
    }
  }
LAB_0253c9ec:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

