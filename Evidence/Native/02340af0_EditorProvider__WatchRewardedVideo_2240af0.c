/* IL2CPP: EditorProvider$$WatchRewardedVideo
void EditorProvider__WatchRewardedVideo (EditorProvider_o* __this, System_String_o* placement, System_Action_bool__o* watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorProvider$$WatchRewardedVideo
   void EditorProvider__WatchRewardedVideo (EditorProvider_o* __this, System_String_o* placement,
   System_Action_bool__o* watched, const MethodInfo* method); */

void EditorProvider__WatchRewardedVideo_2240af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar2 = PTR_DAT_049b5338;
  if ((bRam0000000004f49b0e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b5340);
    FUN_021f03f8(PTR_DAT_049b5348);
    FUN_021f03f8(PTR_DAT_049b5338);
    bRam0000000004f49b0e = 1;
  }
  UnityEngine_Time__set_timeScale_3c29898(0,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_049b5230;
  puVar6 = *(undefined8 **)(lVar3 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (lVar7,uVar8,*(undefined8 *)PTR_DAT_049b5348,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar7;
    thunk_FUN_021f190c(plVar4,lVar7);
  }
  lVar3 = System_Delegate__Combine_3145640(param_3,lVar7,0);
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    uVar8 = *(undefined8 *)puVar1;
    lVar7 = thunk_FUN_0222c938(lVar3,uVar8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(lVar3,uVar8);
    }
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = Monitors__Get_object__26889d0
                        (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049b5340), lVar3 != 0)) {
    lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0,0);
    if (lVar5 != 0) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar5,1,0);
      UniTimer__CreateFromSeconds_3f0f2f4(0x40400000,0);
      auVar9 = UniTimer__SetUnscaled_3f0f260(&stack0xffffffffffffffd0,0);
      *(long *)(lVar3 + 0xa8) = lVar7;
      *(undefined1 (*) [16])(lVar3 + 0x98) = auVar9;
      thunk_FUN_021f190c((long *)(lVar3 + 0xa8),lVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

