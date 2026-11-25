/* IL2CPP: ProfileMonitor$$ShowProfile
void ProfileMonitor__ShowProfile (ProfileMonitor_o* __this, PlayerProfile_o profile, bool isLocalPlayer, System_String_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileMonitor$$ShowProfile
   void ProfileMonitor__ShowProfile (ProfileMonitor_o* __this, PlayerProfile_o profile, bool
   isLocalPlayer, System_String_o* level, const MethodInfo* method); */

void ProfileMonitor__ShowProfile_2456134
               (long param_1,undefined8 *param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_34 [4];
  
  if ((bRam0000000004f4b8f2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4a50);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b8f2 = 1;
  }
  *(byte *)(param_1 + 0xb0) = param_3 & 1;
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb8),param_4);
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    puVar1 = PTR_DAT_049c3958;
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      lVar2 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      auStack_34[0] = **(undefined1 **)(lVar2 + 0xb8);
      uVar4 = thunk_FUN_0222c66c(lVar2,auStack_34);
      if (lVar5 == 0) goto LAB_02556300;
      Monitors__Additive_object__26888e8(lVar5,uVar4,1,*(undefined8 *)PTR_DAT_049c4a50);
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
              (param_1,0x8ac5d12b,param_2[1],0);
    puVar1 = PTR_DAT_049b4540;
    if (*(long *)(param_1 + 0x98) != 0) {
      uStack_58 = param_2[1];
      uStack_60 = *param_2;
      uStack_50 = param_2[2];
      uVar4 = Avatars__GetProfileAvatar_256fe34(*(long *)(param_1 + 0x98),&uStack_60,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                (param_1,0xbd13b84d,uVar4,0);
      lVar2 = FUN_021f04e4(*(undefined8 *)puVar1,1);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined8 *)(lVar2 + 0x20) = param_4;
        thunk_FUN_021f190c((undefined8 *)(lVar2 + 0x20),param_4);
        StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                  (param_1,0x5f10bc4c,lVar2,0);
        lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                          (param_1,0x7e599452,0);
        if ((lVar2 != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar2,param_3 & 1,0);
          return;
        }
      }
    }
  }
LAB_02556300:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

