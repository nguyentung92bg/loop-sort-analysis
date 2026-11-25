/* IL2CPP: HomeSceneVeil$$.ctor
void HomeSceneVeil___ctor (HomeSceneVeil_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneVeil$$.ctor
   void HomeSceneVeil___ctor (HomeSceneVeil_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneVeil___ctor_24325a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar2 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7e1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049bc298);
    FUN_021f03f8(PTR_DAT_049c3920);
    bRam0000000004f4b7e1 = 1;
  }
  puVar3 = PTR_DAT_049c3920;
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar3,param_3);
  if ((((param_2 != 0) &&
       (HomeSceneView__Place_2427788
                  (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),
                   *(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98)), lVar4 != 0)) &&
      (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0), lVar4 != 0)) &&
     (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                 (lVar4,*(undefined8 *)PTR_DAT_049c32d0), puVar2 = PTR_DAT_049bc298,
     plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
    lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,3);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 != 0) {
        *(undefined8 *)(lVar4 + 0x20) = _UNK_013a78c8;
        if (uVar1 != 1) {
          *(undefined8 *)(lVar4 + 0x28) = _UNK_013a7870;
          if (2 < uVar1) {
            *(undefined8 *)(lVar4 + 0x30) = _UNK_013a78d8;
            plVar5[0x1d] = lVar4;
            thunk_FUN_021f190c();
            uVar8 = _UNK_013aa3f4;
            uVar9 = _UNK_013aa6cc;
            uVar6 = HomeSceneFx__ColorOr_241f57c
                              (_UNK_013aa4c4,_UNK_013aa3f4,_UNK_013aa6cc,0x3f800000,param_2,0);
            uVar7 = HomeSceneFx__OpacityOr_241f53c(_UNK_013aa8fc,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x02532778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x2a8))
                      (uVar6,uVar8,uVar9,uVar7,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

