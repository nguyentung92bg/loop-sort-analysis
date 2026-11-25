/* IL2CPP: TutorialMonitor$$Awake
void TutorialMonitor__Awake (TutorialMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TutorialMonitor$$Awake
   void TutorialMonitor__Awake (TutorialMonitor_o* __this, const MethodInfo* method); */

void TutorialMonitor__Awake_2468444(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4b970 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    FUN_021f03f8(PTR_DAT_049c5398);
    FUN_021f03f8(PTR_DAT_049c53a0);
    bRam0000000004f4b970 = 1;
  }
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0xb4ce0c4e,0);
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x8ac5d02c,0)
  ;
  if (lVar1 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar1,&uStack_18,*(undefined8 *)PTR_DAT_049c5398);
    *(undefined8 *)(param_1 + 0x98) = uStack_18;
    thunk_FUN_021f190c();
    lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_1,0x2d6d4683,0);
    if (lVar1 != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (lVar1,&uStack_18,*(undefined8 *)PTR_DAT_049c2ef0);
      *(undefined8 *)(param_1 + 0xb8) = uStack_18;
      thunk_FUN_021f190c();
      lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_1,0x8ac5d02c,0);
      if (lVar1 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar1,&uStack_18,*(undefined8 *)PTR_DAT_049c53a0);
        *(undefined8 *)(param_1 + 0xa0) = uStack_18;
        thunk_FUN_021f190c();
        lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                          (param_1,0x993134c1,0);
        if (lVar1 != 0) {
          *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar1 + 0x38);
          thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

