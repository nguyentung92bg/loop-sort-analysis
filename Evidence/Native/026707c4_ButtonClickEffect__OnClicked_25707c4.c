/* IL2CPP: ButtonClickEffect$$OnClicked
void ButtonClickEffect__OnClicked (ButtonClickEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ButtonClickEffect$$OnClicked
   void ButtonClickEffect__OnClicked (ButtonClickEffect_o* __this, const MethodInfo* method); */

void ButtonClickEffect__OnClicked_25707c4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c1d6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049cc158);
    FUN_021f03f8(PTR_DAT_049cc178);
    FUN_021f03f8(PTR_DAT_049cc180);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4c1d6 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar2 = UnityEngine_Behaviour__get_enabled_3c17e38(param_1,0);
  puVar1 = PTR_DAT_049cc158;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02670998;
  if (*(char *)(*(long *)(param_1 + 0x28) + 0xd8) == '\0') {
    return;
  }
  lVar3 = **(long **)(*(long *)PTR_DAT_049cc158 + 0xb8);
  if ((lVar3 == 0) || ((*(long **)(*(long *)PTR_DAT_049cc158 + 0xb8))[1] == 0)) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar3 == 0) goto LAB_02670998;
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    FUN_0235c744(uVar4,&uStack_60,*(undefined8 *)PTR_DAT_049cc180);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_60;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
    FUN_0235c744(uVar4,&uStack_60,*(undefined8 *)PTR_DAT_049cc178);
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uStack_60;
    thunk_FUN_021f190c();
    lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar3 == 0) goto LAB_02670998;
  }
  HapticModule__PlaySoft_2535438(lVar3,0);
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar3 != 0) {
    AudioModule__GetPlayer_2530858(&uStack_60,lVar3,0);
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
        FUN_021f0574();
      }
      AudioPlayer__Play_2530c98(&uStack_40,uVar4,0);
      return;
    }
  }
LAB_02670998:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

