/* IL2CPP: HomeSceneView$$GradeOf
UnityEngine_Material_o* HomeSceneView__GradeOf (HomeSceneView_o* __this, HomeSceneSprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$GradeOf
   UnityEngine_Material_o* HomeSceneView__GradeOf (HomeSceneView_o* __this, HomeSceneSprite_o*
   sprite, const MethodInfo* method); */

undefined8 HomeSceneView__GradeOf_242dd08(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x44);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x70);
      if (lVar2 == 0) goto LAB_0252dd44;
      if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
        return *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
      }
    }
    return 0;
  }
LAB_0252dd44:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

