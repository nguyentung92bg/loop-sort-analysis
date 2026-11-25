/* IL2CPP: ShopMonitor$$ShowPopup
void ShopMonitor__ShowPopup (ShopMonitor_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$ShowPopup
   void ShopMonitor__ShowPopup (ShopMonitor_o* __this, System_String_o* placement, const MethodInfo*
   method); */

void ShopMonitor__ShowPopup_245c378
               (undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b5480;
  if ((bRam0000000004f4b94d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c4d20);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b94d = 1;
  }
  *(undefined1 *)(param_3 + 0x22) = 1;
  param_3[0x23] = param_4;
  thunk_FUN_021f190c(param_3 + 0x23,param_4);
  uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_3,0x8ac5d2f7,0)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  lVar3 = Extensions__GetRectTransform_3f0c498(uVar2,0);
  puVar1 = PTR_DAT_049c3958;
  if (lVar3 != 0) {
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar3,0);
    lVar3 = *(long *)puVar1;
    *(undefined4 *)(param_3 + 0x21) = uVar5;
    lVar4 = param_3[6];
    *(undefined4 *)((long)param_3 + 0x10c) = param_2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    auStack_24[0] = **(undefined1 **)(lVar3 + 0xb8);
    uVar2 = thunk_FUN_0222c66c(lVar3,auStack_24);
    if (lVar4 != 0) {
      Monitors__Additive_object__26888e8(lVar4,uVar2,1,*(undefined8 *)PTR_DAT_049c4d20);
      (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_3,0x35030410,0);
      param_3[0x23] = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      thunk_FUN_021f190c(param_3 + 0x23);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

