/* IL2CPP: SceneModule$$get_SceneLoadToken
System_Threading_CancellationToken_o SceneModule__get_SceneLoadToken (SceneModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneModule$$get_SceneLoadToken
   System_Threading_CancellationToken_o SceneModule__get_SceneLoadToken (SceneModule_o* __this,
   const MethodInfo* method); */

long SceneModule__get_SceneLoadToken_25389e0(long param_1)

{
  long lVar1;
  long lStack_18;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    System_Threading_CancellationTokenSource__ThrowIfDisposed_31655f4(lVar1,0);
    lStack_18 = lVar1;
    thunk_FUN_021f190c(&lStack_18,lVar1);
    return lStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

