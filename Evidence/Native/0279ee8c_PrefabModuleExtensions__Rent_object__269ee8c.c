/* IL2CPP: PrefabModuleExtensions$$Rent<object>
Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo_269EE8C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModuleExtensions$$Rent<object>
   Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original,
   UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo_269EE8C*
   method); */

undefined8
PrefabModuleExtensions__Rent_object__269ee8c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
          long param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_58;
  
                    /* try { // try from 0279ee90 to 0289ee9b has its CatchHandler @ 0279f660 */
                    /* try { // try from 0279eea8 to 0289eeaf has its CatchHandler @ 0279f638 */
                    /* try { // try from 0279eeb0 to 0289eec3 has its CatchHandler @ 0279f630 */
                    /* try { // try from 0279eecc to 0289eed7 has its CatchHandler @ 0279f628 */
  if (*(long *)(param_10 + 0x38) == 0) {
    FUN_02229774(param_10);
  }
                    /* try { // try from 0279eef4 to 0289ef0f has its CatchHandler @ 0279f63c */
  if (((param_9 != 0) &&
      (uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_9,0), param_8 != 0)) &&
     (lVar2 = PrefabModule__Rent_2537de8
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1,0),
     lVar2 != 0)) {
                    /* try { // try from 0279ef24 to 0289ef27 has its CatchHandler @ 0279f61c */
                    /* try { // try from 0279ef28 to 0289ef33 has its CatchHandler @ 0279f674 */
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar2,&uStack_58,*(undefined8 *)(*(long *)(param_10 + 0x38) + 8));
                    /* try { // try from 0279ef40 to 0289ef5b has its CatchHandler @ 0279f684 */
    return uStack_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

