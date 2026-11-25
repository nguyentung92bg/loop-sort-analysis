/* IL2CPP: PlayingMonitor$$SetupDebug
void PlayingMonitor__SetupDebug (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$SetupDebug
   void PlayingMonitor__SetupDebug (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__SetupDebug_244f7a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar9 = PTR_DAT_049c4828;
  puVar8 = PTR_DAT_049c4820;
  puVar7 = PTR_DAT_049c4818;
  puVar6 = PTR_DAT_049c4810;
  puVar5 = PTR_DAT_049c4808;
  puVar4 = PTR_DAT_049c4800;
  puVar3 = PTR_DAT_049c47f8;
  puVar2 = PTR_DAT_049c47f0;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b8d2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c47f0);
    FUN_021f03f8(PTR_DAT_049c4818);
    FUN_021f03f8(PTR_DAT_049c4830);
    FUN_021f03f8(PTR_DAT_049c4828);
    FUN_021f03f8(PTR_DAT_049c4800);
    FUN_021f03f8(PTR_DAT_049c47f8);
    FUN_021f03f8(PTR_DAT_049c4808);
    FUN_021f03f8(PTR_DAT_049c4810);
    FUN_021f03f8(PTR_DAT_049c4820);
    FUN_021f03f8(PTR_DAT_049c3f60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3f68);
    bRam0000000004f4b8d2 = 1;
  }
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x34994e0d,uVar10,0);
  uVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                     (param_1,0x34994e0d,0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  thunk_FUN_021f190c(param_1 + 0x1c8,uVar10);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0x6ec4bc8b,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0xb5c65869,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0x768632bc,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0xbf689929,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar7,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0x2eb0be8b,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar8,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0x1440f1d8,uVar10,0);
  uVar12 = *(undefined8 *)(param_1 + 0x1c8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar9,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar12,0x544baf45,uVar10,0);
  lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetTextInput_3351034
                     (*(undefined8 *)(param_1 + 0x1c8),0x5f10bc4c,0);
  puVar1 = PTR_DAT_049c4830;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x20) != 0)) {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x20) + 0x1a8);
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3f60);
    UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
              (uVar10,param_1,*(undefined8 *)puVar1,0);
    if (lVar11 != 0) {
      uVar10 = UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___GetDelegate_29e5908
                         (uVar10,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)PTR_DAT_049c3f68 + 0x20) + 0xc0) +
                                  0x10));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 != 0) {
        if ((bRam0000000004f58b7c & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26d90);
          bRam0000000004f58b7c = 1;
        }
        if (*(long *)(lVar11 + 0x18) != 0) {
          FUN_02333498(*(long *)(lVar11 + 0x18),uVar10,*(undefined8 *)PTR_DAT_04a26d90);
          *(undefined1 *)(lVar11 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,uVar10,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

