/* IL2CPP: EconomyMonitor$$OnShopClicked
void EconomyMonitor__OnShopClicked (EconomyMonitor_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$OnShopClicked
   void EconomyMonitor__OnShopClicked (EconomyMonitor_o* __this, System_String_o* placement, const
   MethodInfo* method); */

void EconomyMonitor__OnShopClicked_243cc34
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4b82a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3cf0);
    bRam0000000004f4b82a = 1;
  }
  if ((*(long *)(param_3 + 0x30) == 0) ||
     (plVar2 = (long *)Monitors__Get_object__26889d0
                                 (*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0),
     puVar1 = PTR_DAT_049b5480, plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4b94d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480,param_4,0);
    FUN_021f03f8(PTR_DAT_049c4d20);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b94d = 1;
  }
  *(undefined1 *)(plVar2 + 0x22) = 1;
  plVar2[0x23] = param_4;
  thunk_FUN_021f190c(plVar2 + 0x23,param_4);
  uVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(plVar2,0x8ac5d2f7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  lVar4 = Extensions__GetRectTransform_3f0c498(uVar3,0);
  puVar1 = PTR_DAT_049c3958;
  if (lVar4 != 0) {
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar4,0);
    lVar4 = *(long *)puVar1;
    *(undefined4 *)(plVar2 + 0x21) = uVar6;
    lVar5 = plVar2[6];
    *(undefined4 *)((long)plVar2 + 0x10c) = param_2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    auStack_24[0] = **(undefined1 **)(lVar4 + 0xb8);
    uVar3 = thunk_FUN_0222c66c(lVar4,auStack_24);
    if (lVar5 != 0) {
      Monitors__Additive_object__26888e8(lVar5,uVar3,1,*(undefined8 *)PTR_DAT_049c4d20);
      (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(plVar2,0x35030410,0);
      plVar2[0x23] = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      thunk_FUN_021f190c(plVar2 + 0x23);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

