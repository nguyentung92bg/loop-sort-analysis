/* IL2CPP: CloseElement$$OnPointerClick
void CloseElement__OnPointerClick (CloseElement_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloseElement$$OnPointerClick
   void CloseElement__OnPointerClick (CloseElement_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void CloseElement__OnPointerClick_2413d70(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2bf8;
  if ((bRam0000000004f4b737 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2bf8);
    bRam0000000004f4b737 = 1;
  }
  UnityEngine_Component__GetComponentInParent___Il2CppFullySharedGenericType__25c1f2c
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (uStack_28,0xb4ce0c4e,0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x100) != 0)) {
    UnityEngine_Events_UnityEvent__Invoke_3c32ba4(*(long *)(lVar2 + 0x100),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

