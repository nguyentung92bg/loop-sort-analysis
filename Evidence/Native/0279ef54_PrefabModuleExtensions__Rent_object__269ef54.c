/* IL2CPP: PrefabModuleExtensions$$Rent<object>
Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o* parent, const MethodInfo_269EF54* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModuleExtensions$$Rent<object>
   Il2CppObject* PrefabModuleExtensions__Rent_object_ (PrefabModule_o* m, Il2CppObject* original,
   UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Transform_o*
   parent, const MethodInfo_269EF54* method); */

undefined8
PrefabModuleExtensions__Rent_object__269ef54
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
          undefined8 param_10,long param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_68;
  
                    /* try { // try from 0279ef5c to 0289ef6b has its CatchHandler @ 0279f65c */
                    /* try { // try from 0279ef78 to 0289ef7f has its CatchHandler @ 0279f654 */
                    /* try { // try from 0279ef80 to 0289ef97 has its CatchHandler @ 0279f650 */
                    /* try { // try from 0279efa0 to 0289efa7 has its CatchHandler @ 0279f64c */
  if (*(long *)(param_11 + 0x38) == 0) {
                    /* try { // try from 0279efa8 to 0289efdf has its CatchHandler @ 0279e73c */
    FUN_02229774(param_11);
  }
                    /* try { // try from 0279efe0 to 0289efef has its CatchHandler @ 0279f698 */
                    /* try { // try from 0279eff0 to 0289f01b has its CatchHandler @ 0279e73c */
  if (((param_9 != 0) &&
      (uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_9,0), param_8 != 0)) &&
     (lVar2 = PrefabModule__Rent_25380d0
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar1,
                         param_10,0), lVar2 != 0)) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar2,&uStack_68,*(undefined8 *)(*(long *)(param_11 + 0x38) + 8));
                    /* try { // try from 0279f01c to 0289f01f has its CatchHandler @ 0279f5f4 */
                    /* try { // try from 0279f020 to 0289f02b has its CatchHandler @ 0279f634 */
    return uStack_68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

