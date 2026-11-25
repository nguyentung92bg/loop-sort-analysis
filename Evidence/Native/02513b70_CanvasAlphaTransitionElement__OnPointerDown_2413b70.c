/* IL2CPP: CanvasAlphaTransitionElement$$OnPointerDown
void CanvasAlphaTransitionElement__OnPointerDown (CanvasAlphaTransitionElement_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CanvasAlphaTransitionElement$$OnPointerDown
   void CanvasAlphaTransitionElement__OnPointerDown (CanvasAlphaTransitionElement_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void CanvasAlphaTransitionElement__OnPointerDown_2413b70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4b735 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b735 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  FUN_024f75b8(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),1,0);
  puVar3 = PTR_DAT_049c2bf0;
  puVar2 = PTR_DAT_049c2be8;
  puVar1 = PTR_DAT_049c2288;
  if (*(long *)(param_1 + 0x20) != 0) {
    auVar5 = UnityEngine_CanvasGroup__get_alpha_3ec2acc(*(long *)(param_1 + 0x20),0);
    auStack_40 = LitMotion_LMotion__Create_2ea9f9c(auVar5,0,_UNK_013aa62c,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    auVar5 = FUN_02526574(auStack_40,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60),
                          *(undefined8 *)puVar3);
    auVar6 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                       (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)puVar2);
    *(undefined1 (*) [12])(param_1 + 0x28) = auVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

