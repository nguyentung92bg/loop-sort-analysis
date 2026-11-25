/* IL2CPP: SceneScope$$<HandleSceneComponents>b__9_0
bool SceneScope___HandleSceneComponents_b__9_0 (SceneScope_o* __this, UnityEngine_Component_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$<HandleSceneComponents>b__9_0
   bool SceneScope___HandleSceneComponents_b__9_0 (SceneScope_o* __this, UnityEngine_Component_o* x,
   const MethodInfo* method); */

bool SceneScope___HandleSceneComponents_b__9_0_2555b0c(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 02655b20 to 02755b97 has its CatchHandler @ 02655b20
                       catch() { ... } // from try @ 02655b20 with catch @ 02655b20
                       catch() { ... } // from try @ 02655d94 with catch @ 02655b20
                       catch() { ... } // from try @ 02655e20 with catch @ 02655b20
                       catch() { ... } // from try @ 02655e7c with catch @ 02655b20
                       catch() { ... } // from try @ 02655eb4 with catch @ 02655b20
                       catch() { ... } // from try @ 02655f1c with catch @ 02655b20 */
  if ((param_2 != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), lVar3 != 0)) {
    iVar1 = UnityEngine_GameObject__get_scene_3c1e648(lVar3,0);
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar3 != 0) {
      iVar2 = UnityEngine_GameObject__get_scene_3c1e648(lVar3,0);
      return iVar1 != iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

