/* IL2CPP: InteractionModule$$Start
void InteractionModule__Start (InteractionModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$Start
   void InteractionModule__Start (InteractionModule_o* __this, const MethodInfo* method); */

void InteractionModule__Start_2535674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_DAT_049b4540;
  if ((bRam0000000004f4bf55 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44e0);
    FUN_021f03f8(PTR_DAT_049ca180);
    FUN_021f03f8(PTR_DAT_049ca188);
    FUN_021f03f8(PTR_DAT_049ca190);
    FUN_021f03f8(PTR_DAT_049c44f0);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c8568);
    bRam0000000004f4bf55 = 1;
  }
  UnityEngine_Input__set_multiTouchEnabled_3c7b6e8(0,0);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar1,1);
  puVar5 = PTR_DAT_049ca190;
  puVar4 = PTR_DAT_049ca188;
  puVar3 = PTR_DAT_049ca180;
  puVar2 = PTR_DAT_049c44f0;
  puVar1 = PTR_DAT_049c44e0;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_049c8568;
    thunk_FUN_021f190c();
    uVar9 = UnityEngine_LayerMask__GetMask_3c1e998(lVar8,0);
    uVar7 = UnityEngine_LayerMask__op_Implicit_3c1e7e0(uVar9,0);
    uVar9 = *(undefined8 *)puVar1;
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
    uVar9 = thunk_FUN_0222ca34(uVar9);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar9,param_1,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Lean_Touch_LeanTouch__add_OnFingerDown_2e7b5c4(uVar9,0);
    uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar9,param_1,*(undefined8 *)puVar5,0);
    Lean_Touch_LeanTouch__add_OnFingerUpdate_2e7e820(uVar9,0);
    uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar9,param_1,*(undefined8 *)puVar4,0);
    puVar1 = PTR_DAT_049c44f0;
    if ((bRam0000000004f4e539 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c44e0,0);
      FUN_021f03f8(PTR_DAT_049c44f0);
      bRam0000000004f4e539 = 1;
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_049c44e0;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
    do {
      lVar10 = System_Delegate__Combine_3145640(lVar8,uVar9,0);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar2;
        lVar11 = thunk_FUN_0222c938(lVar10,uVar12);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar10,uVar12);
        }
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = FUN_022290c4(*(long *)(lVar10 + 0xb8) + 0x28,lVar11,lVar8);
      bVar6 = lVar10 != lVar8;
      lVar8 = lVar10;
    } while (bVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

