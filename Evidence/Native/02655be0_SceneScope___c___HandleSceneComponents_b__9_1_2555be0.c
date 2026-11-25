/* IL2CPP: SceneScope.<>c$$<HandleSceneComponents>b__9_1
System_Type_o* SceneScope___c___HandleSceneComponents_b__9_1 (SceneScope___c_o* __this, UnityEngine_Component_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope.<>c$$<HandleSceneComponents>b__9_1
   System_Type_o* SceneScope___c___HandleSceneComponents_b__9_1 (SceneScope___c_o* __this,
   UnityEngine_Component_o* x, const MethodInfo* method); */

undefined8 SceneScope___c___HandleSceneComponents_b__9_1_2555be0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_20;
  long lStack_18;
  
                    /* try { // try from 02655be0 to 02755caf has its CatchHandler @ 02655e3c */
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lStack_18 = *param_2 + 0x20;
  uStack_20 = 0;
  uVar2 = FUN_0222f228(uRam0000000004f61468,&lStack_18,&uStack_20);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_0222ca34(uRam0000000004f619a0);
    uVar1 = uRam0000000004f61468;
    *(long *)(lVar3 + 0x10) = lStack_18;
    uStack_20 = FUN_0222f32c(uVar1,&lStack_18);
  }
  return uStack_20;
}

