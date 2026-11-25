/* IL2CPP: SceneScope.<>c$$<HandleSceneComponents>b__9_2
bool SceneScope___c___HandleSceneComponents_b__9_2 (SceneScope___c_o* __this, System_Linq_IGrouping_Type__Component__o* g, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope.<>c$$<HandleSceneComponents>b__9_2
   bool SceneScope___c___HandleSceneComponents_b__9_2 (SceneScope___c_o* __this,
   System_Linq_IGrouping_Type__Component__o* g, const MethodInfo* method); */

bool SceneScope___c___HandleSceneComponents_b__9_2_2555bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_049cb128;
  if ((bRam0000000004f4c0a1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb128);
    bRam0000000004f4c0a1 = 1;
  }
  iVar2 = System_Linq_Enumerable__Count___Il2CppFullySharedGenericType__25db51c
                    (param_2,*(undefined8 *)puVar1);
  return iVar2 == 1;
}

