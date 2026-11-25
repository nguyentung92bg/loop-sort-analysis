/* IL2CPP: PrefabModule$$Rent
UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o* original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Rent
   UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o*
   original, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo*
   method); */

long PrefabModule__Rent_2537de8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
               undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_88;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf66 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca248);
    FUN_021f03f8(PTR_DAT_049ca250);
    FUN_021f03f8(PTR_DAT_049bde20);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bb338);
    FUN_021f03f8(PTR_DAT_049ca258);
    bRam0000000004f4bf66 = 1;
  }
  lStack_88 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(param_9,0,0);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
                    /* try { // try from 02638094 to 0273809b has its CatchHandler @ 026385a8 */
    uVar10 = thunk_FUN_0222ca34();
                    /* try { // try from 026380a4 to 027380af has its CatchHandler @ 026385a4 */
    uVar11 = thunk_FUN_02256840(PTR_DAT_049ca260);
    System_ArgumentNullException___ctor_30655c4(uVar10,uVar11,0);
                    /* try { // try from 026380bc to 027380c7 has its CatchHandler @ 0263857c */
    uVar11 = thunk_FUN_02256840(PTR_DAT_049ca2e8);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar10,uVar11);
  }
  lVar8 = PrefabModule__GetOrCreatePool_25375e0(param_8,param_9);
  puVar5 = PTR_DAT_049ca258;
  puVar4 = PTR_DAT_049ca250;
  puVar3 = PTR_DAT_049ca248;
  puVar2 = PTR_DAT_049bde20;
  if (lVar8 != 0) {
    do {
      uVar7 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___TryPop_29a2c0c
                        (lVar8,&lStack_88,*(undefined8 *)puVar5);
      lVar9 = lStack_88;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lStack_88 = UnityEngine_Object__Instantiate_object__2695cb4
                              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,
                               *(undefined8 *)puVar2);
        goto LAB_02638010;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(lVar9,0,0);
    } while ((uVar7 & 1) == 0);
    if ((lStack_88 != 0) &&
       (lVar9 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_88,0), lVar9 != 0)) {
      UnityEngine_Transform__SetParent_3c2e01c(lVar9,0,0);
      lVar9 = lStack_88;
      uVar6 = PrefabModule__get_ActiveScene_2536e04();
      if (*(int *)(*(long *)PTR_DAT_049bb338 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049bb338);
      }
      UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene_3c341b8(lVar9,uVar6,0);
      if (((lStack_88 != 0) &&
          (lVar9 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_88,0), lVar9 != 0)) &&
         (UnityEngine_Transform__SetPositionAndRotation_3c2e2a0
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar9,0),
         lStack_88 != 0)) {
                    /* try { // try from 02637fc4 to 02738093 has its CatchHandler @ 02637fc4
                       catch() { ... } // from try @ 02637fc4 with catch @ 02637fc4
                       catch() { ... } // from try @ 026384c8 with catch @ 02637fc4
                       catch() { ... } // from try @ 02638570 with catch @ 02637fc4
                       catch() { ... } // from try @ 026385fc with catch @ 02637fc4
                       catch() { ... } // from try @ 02638668 with catch @ 02637fc4 */
        UnityEngine_GameObject__SetActive_3c1ce34(lStack_88,1,0);
LAB_02638010:
        if (*(long *)(param_8 + 0x18) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (*(long *)(param_8 + 0x18),lStack_88,lVar8,*(undefined8 *)puVar4);
          uVar10 = PrefabModule__GetOrCreatePoolParent_25376c0(param_8,param_9);
          if (*(long *)(param_8 + 0x30) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                      (*(long *)(param_8 + 0x30),lStack_88,uVar10,*(undefined8 *)puVar3);
            PrefabModuleCallbackHelper__InvokeOnRent_25378a8(lStack_88);
            return lStack_88;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

