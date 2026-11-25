/* IL2CPP: HomeSceneRays$$.ctor
void HomeSceneRays___ctor (HomeSceneRays_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneRays$$.ctor
   void HomeSceneRays___ctor (HomeSceneRays_o* __this, const MethodInfo* method); */

void HomeSceneRays___ctor_2429b28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  *(undefined4 *)(param_1 + 0xd8) = 0xc;
  puVar3 = PTR_DAT_04a389f0;
  puVar2 = PTR_DAT_049bcb90;
  puVar1 = PTR_DAT_049b8a28;
  if ((bRam0000000004f5bfde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a389f0,0);
    FUN_021f03f8(PTR_DAT_049bcb90);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f5bfde = 1;
  }
  uVar5 = *(undefined8 *)puVar3;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar5 = thunk_FUN_0222ca34(uVar5);
  UnityEngine_UI_MaskableGraphic_CullStateChangedEvent___ctor_3edc374(uVar5,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xc0),uVar5);
  uVar5 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 200) = 1;
  uVar5 = FUN_021f04e4(uVar5,4);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  thunk_FUN_021f190c();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((bRam0000000004f5a778 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a2b580,0);
    FUN_021f03f8(PTR_DAT_04a2b588);
    FUN_021f03f8(PTR_DAT_04a2b590);
    bRam0000000004f5a778 = 1;
  }
  auVar7 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  *(long *)(param_1 + 0x30) = auVar7._8_8_;
  *(long *)(param_1 + 0x28) = auVar7._0_8_;
  UnityEngine_EventSystems_UIBehaviour___ctor_3ef1f64(param_1,0);
  plVar6 = (long *)(param_1 + 0x98);
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a2b590);
    UnityEngine_UI_CoroutineTween_TweenRunner___Il2CppFullySharedGenericStructType____ctor_29dac2c
              (lVar4,*(undefined8 *)PTR_DAT_04a2b588);
    *plVar6 = lVar4;
    thunk_FUN_021f190c(plVar6,lVar4);
    lVar4 = *plVar6;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  *(long *)(lVar4 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar4 + 0x10),param_1);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}

