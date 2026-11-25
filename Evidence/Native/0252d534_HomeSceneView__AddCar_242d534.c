/* IL2CPP: HomeSceneView$$AddCar
void HomeSceneView__AddCar (HomeSceneView_o* __this, HomeSceneCar_o* car, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$AddCar
   void HomeSceneView__AddCar (HomeSceneView_o* __this, HomeSceneCar_o* car, const MethodInfo*
   method); */

void HomeSceneView__AddCar_242d534(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f4b7bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c36b8);
    FUN_021f03f8(PTR_DAT_049c36c0);
    FUN_021f03f8(PTR_DAT_049c36c8);
    FUN_021f03f8(PTR_DAT_049c36d0);
    bRam0000000004f4b7bc = 1;
  }
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar1 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        fVar9 = *(float *)(param_2 + 0x30);
        fVar8 = *(float *)(param_2 + 0x34);
        fVar6 = *(float *)(*(long *)(param_1 + 0x40) + 0x20);
        fVar7 = *(float *)(param_2 + 0x3c);
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c36b8,uVar5);
        if (*(long *)(param_1 + 0x40) != 0) {
          fVar6 = _UNK_013aa504 / fVar6;
          fVar7 = (fVar7 / fVar6) / (fVar8 - fVar9);
          HomeSceneView__Place_2427788
                    (*(float *)(*(long *)(param_1 + 0x40) + 0x1c) * 0.5 -
                     fVar7 * (*(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x34)) * 0.5,
                     _UNK_013aa720 / fVar6 - fVar7 * *(float *)(param_2 + 0x38),
                     fVar7 * *(float *)(param_2 + 0x28),fVar7 * *(float *)(param_2 + 0x2c));
          uVar2 = HomeSceneView__AddCarImage_242dd48
                            (uVar5,*(undefined8 *)PTR_DAT_049c36c0,*(undefined8 *)(param_2 + 0x10));
          *(undefined8 *)(param_1 + 0x58) = uVar2;
          thunk_FUN_021f190c();
          HomeSceneView__AddCarImage_242dd48
                    (uVar5,*(undefined8 *)PTR_DAT_049c36d0,*(undefined8 *)(param_2 + 0x18));
          lVar3 = HomeSceneView__AddCarImage_242dd48
                            (uVar5,*(undefined8 *)PTR_DAT_049c36c8,*(undefined8 *)(param_2 + 0x20));
          if (lVar3 != 0) {
            lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0);
            plVar4 = (long *)(param_1 + 0x50);
            *plVar4 = lVar3;
            thunk_FUN_021f190c(plVar4,lVar3);
            if (*plVar4 != 0) {
              UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0,*plVar4,0);
              *(float *)(param_1 + 0x60) = 3.0 / fVar6;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

