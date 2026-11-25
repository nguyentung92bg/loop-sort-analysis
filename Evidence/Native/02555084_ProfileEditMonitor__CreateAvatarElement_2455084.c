/* IL2CPP: ProfileEditMonitor$$CreateAvatarElement
void ProfileEditMonitor__CreateAvatarElement (ProfileEditMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$CreateAvatarElement
   void ProfileEditMonitor__CreateAvatarElement (ProfileEditMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, System_String_o* id, const MethodInfo*
   method); */

void ProfileEditMonitor__CreateAvatarElement_2455084
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_50 [2];
  
  puVar1 = PTR_DAT_049c49d0;
  if ((bRam0000000004f4b8eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49d8);
    FUN_021f03f8(PTR_DAT_049c49e0);
    FUN_021f03f8(PTR_DAT_049c49e8);
    FUN_021f03f8(PTR_DAT_049c49d0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b8eb = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar3 + 0x10),param_1);
    puVar6 = (undefined8 *)(lVar3 + 0x18);
    *puVar6 = param_3;
    thunk_FUN_021f190c(puVar6,param_3);
    puVar2 = PTR_DAT_049c49e8;
    puVar1 = PTR_DAT_049b8d80;
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18), lVar4 != 0)) {
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar4,*(undefined8 *)(lVar3 + 0x18),auStack_50,*(undefined8 *)PTR_DAT_049c49e0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                (param_2,0xbd13b84d,auStack_50[0],0);
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,lVar3,*(undefined8 *)puVar2,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                (param_2,0x854128ce,uVar5,0);
      if (*(long *)(param_1 + 0xe8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 0xe8),*puVar6,param_2,*(undefined8 *)PTR_DAT_049c49d8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

