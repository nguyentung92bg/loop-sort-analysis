/* IL2CPP: HomeSceneQuad$$.ctor
void HomeSceneQuad___ctor (HomeSceneQuad_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneQuad$$.ctor
   void HomeSceneQuad___ctor (HomeSceneQuad_o* __this, const MethodInfo* method); */

void HomeSceneQuad___ctor_242a0d4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = _UNK_013a8978;
  uVar6 = _UNK_013a8970;
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  *(undefined8 *)(param_1 + 0xd8) = uVar8;
  puVar4 = PTR_DAT_04a389f0;
  puVar3 = PTR_DAT_049bcb90;
  puVar2 = PTR_DAT_049b8a28;
  if ((bRam0000000004f5bfde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a389f0,0);
    FUN_021f03f8(PTR_DAT_049bcb90);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f5bfde = 1;
  }
  uVar6 = *(undefined8 *)puVar4;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar6 = thunk_FUN_0222ca34(uVar6);
  UnityEngine_UI_MaskableGraphic_CullStateChangedEvent___ctor_3edc374(uVar6,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0),uVar6);
  uVar6 = *(undefined8 *)puVar2;
  *(undefined1 *)(param_1 + 200) = 1;
  uVar6 = FUN_021f04e4(uVar6,4);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  thunk_FUN_021f190c();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((bRam0000000004f5a778 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a2b580,0);
    FUN_021f03f8(PTR_DAT_04a2b588);
    FUN_021f03f8(PTR_DAT_04a2b590);
    bRam0000000004f5a778 = 1;
  }
  auVar9 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  *(long *)(param_1 + 0x30) = auVar9._8_8_;
  *(long *)(param_1 + 0x28) = auVar9._0_8_;
  UnityEngine_EventSystems_UIBehaviour___ctor_3ef1f64(param_1,0);
  plVar7 = (long *)(param_1 + 0x98);
  lVar5 = *plVar7;
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a2b590);
    UnityEngine_UI_CoroutineTween_TweenRunner___Il2CppFullySharedGenericStructType____ctor_29dac2c
              (lVar5,*(undefined8 *)PTR_DAT_04a2b588);
    *plVar7 = lVar5;
    thunk_FUN_021f190c(plVar7,lVar5);
    lVar5 = *plVar7;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  *(long *)(lVar5 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}

