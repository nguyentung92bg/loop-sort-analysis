/* IL2CPP: SplineMeshAutoCount$$OnDestroy
void SplineMeshAutoCount__OnDestroy (SplineMeshAutoCount_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineMeshAutoCount$$OnDestroy
   void SplineMeshAutoCount__OnDestroy (SplineMeshAutoCount_o* __this, const MethodInfo* method); */

void SplineMeshAutoCount__OnDestroy_249f9b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_049c6520;
  puVar1 = PTR_DAT_049bdcc0;
  if ((bRam0000000004f4bae2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bdcc0);
    FUN_021f03f8(PTR_DAT_049c6520);
    bRam0000000004f4bae2 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  Dreamteck_Splines_EmptySplineHandler___ctor_2345e74(uVar6,param_1,*(undefined8 *)puVar2,0);
  if (lVar7 != 0) {
    Dreamteck_Splines_SplineComputer__remove_onRebuild_2346a4c(lVar7,uVar6,0);
    lVar7 = *(long *)(param_1 + 0x30);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    Dreamteck_Splines_EmptySplineHandler___ctor_2345e74(uVar6,param_1,*(undefined8 *)puVar2,0);
    if (lVar7 != 0) {
      if ((bRam0000000004f4a616 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bdcc0,uVar6,0);
        bRam0000000004f4a616 = 1;
      }
      puVar1 = PTR_DAT_049bdcc0;
      lVar8 = *(long *)(lVar7 + 0x1a8);
      while ((plVar4 = (long *)System_Delegate__Remove_314582c(lVar8,uVar6,0), plVar4 == (long *)0x0
             || (*plVar4 == *(long *)puVar1))) {
        lVar5 = FUN_022290c4(lVar7 + 0x1a8,plVar4,lVar8);
        bVar3 = lVar5 == lVar8;
        lVar8 = lVar5;
        if (bVar3) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

