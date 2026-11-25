/* IL2CPP: PrefabModuleExtensions$$Rent<object>
Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original, const MethodInfo_269ED94* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModuleExtensions$$Rent<object>
   Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original,
   const MethodInfo_269ED94* method); */

undefined8 PrefabModuleExtensions__Rent_object__269ed94(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
                    /* try { // try from 0279eda4 to 0289eda7 has its CatchHandler @ 0279f640 */
                    /* try { // try from 0279eda8 to 0289edb3 has its CatchHandler @ 0279f6b8 */
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02229774(param_3);
  }
                    /* try { // try from 0279edc4 to 0289edcf has its CatchHandler @ 0279f6a8 */
                    /* try { // try from 0279edd0 to 0289eddb has its CatchHandler @ 0279f69c */
  if (((param_2 != 0) &&
      (uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), param_1 != 0)) &&
     (lVar2 = PrefabModule__Rent_2537380(param_1,uVar1,0), lVar2 != 0)) {
                    /* try { // try from 0279ede8 to 0289edef has its CatchHandler @ 0279f67c */
                    /* try { // try from 0279edf0 to 0289ee03 has its CatchHandler @ 0279f670 */
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar2,&uStack_28,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

