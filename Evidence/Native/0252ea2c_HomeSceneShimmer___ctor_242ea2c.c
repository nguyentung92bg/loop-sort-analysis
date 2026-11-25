/* IL2CPP: HomeSceneShimmer$$.ctor
void HomeSceneShimmer___ctor (HomeSceneShimmer_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneShimmer$$.ctor
   void HomeSceneShimmer___ctor (HomeSceneShimmer_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneShimmer___ctor_242ea2c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_049c3038;
  if ((bRam0000000004f4b7cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3038);
    bRam0000000004f4b7cb = 1;
  }
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = HomeSceneShimmer__Glint_242ebfc(0x41e00000,0x40400000,0x3f400000,0xb4,0x18);
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar4 = uVar3;
    thunk_FUN_021f190c(puVar4,uVar3);
    lVar2 = *(long *)puVar1;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = HomeSceneShimmer__Glint_242ebfc(0x41900000,0x40000000,_UNK_013aa958,0x78,0x1e);
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_021f190c(puVar4,uVar3);
  }
  if (param_2 != 0) {
    lVar2 = *(long *)puVar1;
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x94);
    uVar8 = *(undefined4 *)(param_2 + 0x98);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      lVar2 = *(long *)puVar1;
    }
    uVar3 = HomeSceneShimmer__Band_242ece4
                      (uVar5,uVar6,uVar7,uVar8,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8))
    ;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    thunk_FUN_021f190c();
    uVar3 = HomeSceneShimmer__Band_242ece4
                      (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),
                       *(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98),param_3,
                       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar3);
    uVar3 = _UNK_013a7860;
    *(ulong *)(param_1 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x94) >> 0x20) /
                  (float)((ulong)_UNK_013a86b8 >> 0x20),
                  (float)*(undefined8 *)(param_2 + 0x94) / (float)_UNK_013a86b8);
    *(ulong *)(param_1 + 0x28) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x94) >> 0x20) /
                  (float)((ulong)uVar3 >> 0x20),
                  (float)*(undefined8 *)(param_2 + 0x94) / (float)uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

