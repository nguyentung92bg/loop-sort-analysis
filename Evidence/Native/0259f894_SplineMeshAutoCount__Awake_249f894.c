/* IL2CPP: SplineMeshAutoCount$$Awake
void SplineMeshAutoCount__Awake (SplineMeshAutoCount_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineMeshAutoCount$$Awake
   void SplineMeshAutoCount__Awake (SplineMeshAutoCount_o* __this, const MethodInfo* method); */

void SplineMeshAutoCount__Awake_249f894(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_38;
  
  puVar1 = PTR_DAT_049c6518;
  if ((bRam0000000004f4bae1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6518);
    FUN_021f03f8(PTR_DAT_049bdcc0);
    FUN_021f03f8(PTR_DAT_049c6520);
    bRam0000000004f4bae1 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&lStack_38,*(undefined8 *)puVar1);
  plVar4 = (long *)(param_1 + 0x30);
  *plVar4 = lStack_38;
  thunk_FUN_021f190c(plVar4);
  puVar2 = PTR_DAT_049c6520;
  puVar1 = PTR_DAT_049bdcc0;
  if (*plVar4 != 0) {
    plVar5 = (long *)(param_1 + 0x28);
    *plVar5 = *(long *)(*plVar4 + 0x28);
    thunk_FUN_021f190c(plVar5);
    lVar6 = *plVar5;
    uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    Dreamteck_Splines_EmptySplineHandler___ctor_2345e74(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (lVar6 != 0) {
      Dreamteck_Splines_SplineComputer__add_onRebuild_23469b0(lVar6,uVar3,0);
      lVar6 = *(long *)(param_1 + 0x30);
      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      Dreamteck_Splines_EmptySplineHandler___ctor_2345e74(uVar3,param_1,*(undefined8 *)puVar2,0);
      if (lVar6 != 0) {
        Dreamteck_Splines_SplineUser__add_onPostBuild_235ae28(lVar6,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

