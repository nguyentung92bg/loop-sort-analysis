/* IL2CPP: HomeSceneSpawnerRunner$$CreateLayer
UnityEngine_RectTransform_o* HomeSceneSpawnerRunner__CreateLayer (UnityEngine_RectTransform_o* parent, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$CreateLayer
   UnityEngine_RectTransform_o* HomeSceneSpawnerRunner__CreateLayer (UnityEngine_RectTransform_o*
   parent, System_String_o* name, const MethodInfo* method); */

long HomeSceneSpawnerRunner__CreateLayer_242af70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7b5 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = HomeSceneView__CreateNode_2426d00(param_2,param_1);
  HomeSceneView__Stretch_242881c();
  if (lVar2 != 0) {
    UnityEngine_RectTransform__set_pivot_3c2c28c(0,0x3f800000,lVar2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

