/* IL2CPP: PrefabModule$$Rent
UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o* original, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Rent
   UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o*
   original, const MethodInfo* method); */

long PrefabModule__Rent_2537380(long param_1,undefined8 param_2)

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
  long lStack_58;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* catch() { ... } // from try @ 0263735c with catch @ 026373b0 */
  if ((bRam0000000004f4bf64 & 1) == 0) {
                    /* try { // try from 026373b4 to 027373bb has its CatchHandler @ 026373c4 */
                    /* try { // try from 026373bc to 027373c7 has its CatchHandler @ 026370d8 */
    FUN_021f03f8(PTR_DAT_049ca248);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026373b4 with catch @ 026373c4
                        */
    FUN_021f03f8(PTR_DAT_049ca250);
    FUN_021f03f8(PTR_DAT_049bcb48);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bb338);
    FUN_021f03f8(PTR_DAT_049ca258);
    bRam0000000004f4bf64 = 1;
  }
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
    uVar10 = thunk_FUN_0222ca34();
    uVar11 = thunk_FUN_02256840(PTR_DAT_049ca260);
    System_ArgumentNullException___ctor_30655c4(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02256840(PTR_DAT_049ca268);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar10,uVar11);
  }
  lVar8 = PrefabModule__GetOrCreatePool_25375e0(param_1,param_2);
  puVar5 = PTR_DAT_049ca258;
  puVar4 = PTR_DAT_049ca250;
  puVar3 = PTR_DAT_049ca248;
  puVar2 = PTR_DAT_049bcb48;
  if (lVar8 != 0) {
    do {
      uVar7 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___TryPop_29a2c0c
                        (lVar8,&lStack_58,*(undefined8 *)puVar5);
      lVar9 = lStack_58;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lStack_58 = UnityEngine_Object__Instantiate_object__2695910(param_2,*(undefined8 *)puVar2);
        goto LAB_0263752c;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(lVar9,0,0);
    } while ((uVar7 & 1) == 0);
    if ((lStack_58 != 0) &&
       (lVar9 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_58,0), lVar9 != 0)) {
      UnityEngine_Transform__SetParent_3c2e01c(lVar9,0,0);
      lVar9 = lStack_58;
      uVar6 = PrefabModule__get_ActiveScene_2536e04();
      if (*(int *)(*(long *)PTR_DAT_049bb338 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049bb338);
      }
      UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene_3c341b8(lVar9,uVar6,0);
      if (lStack_58 != 0) {
        UnityEngine_GameObject__SetActive_3c1ce34(lStack_58,1,0);
LAB_0263752c:
        if (*(long *)(param_1 + 0x18) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (*(long *)(param_1 + 0x18),lStack_58,lVar8,*(undefined8 *)puVar4);
          uVar10 = PrefabModule__GetOrCreatePoolParent_25376c0(param_1,param_2);
          if (*(long *)(param_1 + 0x30) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                      (*(long *)(param_1 + 0x30),lStack_58,uVar10,*(undefined8 *)puVar3);
            PrefabModuleCallbackHelper__InvokeOnRent_25378a8(lStack_58);
            return lStack_58;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

