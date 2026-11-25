/* IL2CPP: HomeSceneFxRunner.Rays$$Tick
void HomeSceneFxRunner_Rays__Tick (HomeSceneFxRunner_Rays_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Rays$$Tick
   void HomeSceneFxRunner_Rays__Tick (HomeSceneFxRunner_Rays_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Rays__Tick_2422af0(undefined4 param_1,long param_2)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f4b77f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b77f = 1;
  }
  puVar2 = PTR_DAT_049c3110;
  fVar1 = _UNK_013aa948;
  lVar5 = 0;
  while (lVar3 = *(long *)(param_2 + 0x18), lVar3 != 0) {
    uVar4 = (uint)lVar5;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02522c00:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    uVar8 = *(undefined4 *)(lVar3 + lVar5 * 4 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar6 = (float)HomeSceneView__Phase_24280b4(param_1,0,uVar8,0);
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02522c00;
    lVar3 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
    fVar7 = -(fVar6 * 360.0);
    if (uVar4 != 0) {
      fVar7 = fVar6 * 360.0;
    }
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar7 * fVar1,0);
    if (lVar3 == 0) break;
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
    lVar5 = lVar5 + 1;
    if ((int)lVar5 == 2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

