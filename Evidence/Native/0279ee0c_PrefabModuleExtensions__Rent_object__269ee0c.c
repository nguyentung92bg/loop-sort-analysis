/* IL2CPP: PrefabModuleExtensions$$Rent<object>
Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original, UnityEngine_Transform_o* parent, const MethodInfo_269EE0C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModuleExtensions$$Rent<object>
   Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original,
   UnityEngine_Transform_o* parent, const MethodInfo_269EE0C* method); */

undefined8
PrefabModuleExtensions__Rent_object__269ee0c
          (long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
                    /* try { // try from 0279ee18 to 0289ee2b has its CatchHandler @ 0279f680 */
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02229774(param_4);
  }
                    /* try { // try from 0279ee40 to 0289ee4f has its CatchHandler @ 0279f648 */
  if (((param_2 != 0) &&
      (uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), param_1 != 0)) &&
     (lVar2 = PrefabModule__Rent_2537bc4(param_1,uVar1,param_3,0), lVar2 != 0)) {
                    /* try { // try from 0279ee68 to 0289ee6b has its CatchHandler @ 0279f620 */
                    /* try { // try from 0279ee6c to 0289ee77 has its CatchHandler @ 0279f678 */
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar2,&uStack_28,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
                    /* try { // try from 0279ee80 to 0289ee8f has its CatchHandler @ 0279f668 */
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

