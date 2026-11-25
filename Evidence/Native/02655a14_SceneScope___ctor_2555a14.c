/* IL2CPP: SceneScope$$.ctor
void SceneScope___ctor (SceneScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope$$.ctor
   void SceneScope___ctor (SceneScope_o* __this, const MethodInfo* method); */

void SceneScope___ctor_2555a14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049b68c8;
  puVar1 = PTR_DAT_049b68c0;
                    /* try { // try from 02655a24 to 02755a33 has its CatchHandler @ 02655a34 */
                    /* catch() { ... } // from try @ 026559bc with catch @ 02655a34
                       catch() { ... } // from try @ 02655a24 with catch @ 02655a34 */
                    /* try { // try from 02655a38 to 02755a3b has its CatchHandler @ 02655a44 */
                    /* try { // try from 02655a3c to 02755a47 has its CatchHandler @ 026552d0 */
  if ((bRam0000000004f4c09f & 1) == 0) {
                    /* catch() { ... } // from try @ 02655a38 with catch @ 02655a44 */
    FUN_021f03f8(PTR_DAT_049b68b8);
    FUN_021f03f8(PTR_DAT_049b68c0);
    FUN_021f03f8(PTR_DAT_049b68c8);
    FUN_021f03f8(PTR_DAT_049c8158);
    bRam0000000004f4c09f = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (lVar3,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_049c8158;
  puVar1 = PTR_DAT_049b68b8;
  if (lVar3 != 0) {
    uStack_28 = 0;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (lVar3,&uStack_28,*(undefined8 *)PTR_DAT_049b68b8);
    uStack_24 = 1;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (lVar3,&uStack_24,*(undefined8 *)puVar1);
    *(long *)(param_1 + 0x90) = lVar3;
    thunk_FUN_021f190c((long *)(param_1 + 0x90),lVar3);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    VContainer_Unity_LifetimeScope___ctor_3f2d4a8(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

