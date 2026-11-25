/* IL2CPP: PrefabModule$$Rent
UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o* original, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$Rent
   UnityEngine_GameObject_o* PrefabModule__Rent (PrefabModule_o* __this, UnityEngine_GameObject_o*
   original, UnityEngine_Transform_o* parent, const MethodInfo* method); */

long PrefabModule__Rent_2537bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_58;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf65 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca248);
    FUN_021f03f8(PTR_DAT_049ca250);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049ca258);
    bRam0000000004f4bf65 = 1;
  }
  lStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
    uVar9 = thunk_FUN_0222ca34();
    uVar10 = thunk_FUN_02256840(PTR_DAT_049ca260);
    System_ArgumentNullException___ctor_30655c4(uVar9,uVar10,0);
    uVar10 = thunk_FUN_02256840(PTR_DAT_049ca2e0);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar9,uVar10);
  }
  lVar7 = PrefabModule__GetOrCreatePool_25375e0(param_1,param_2);
  puVar5 = PTR_DAT_049ca258;
  puVar4 = PTR_DAT_049ca250;
  puVar3 = PTR_DAT_049ca248;
  puVar2 = PTR_DAT_049c3bd8;
  if (lVar7 != 0) {
    do {
      uVar6 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___TryPop_29a2c0c
                        (lVar7,&lStack_58,*(undefined8 *)puVar5);
      lVar8 = lStack_58;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lStack_58 = UnityEngine_Object__Instantiate_object__2695b80
                              (param_2,param_3,*(undefined8 *)puVar2);
        goto LAB_02637d34;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(lVar8,0,0);
    } while ((uVar6 & 1) == 0);
    if (((lStack_58 != 0) &&
        (lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_58,0), lVar8 != 0)) &&
       (UnityEngine_Transform__SetParent_3c2e01c(lVar8,param_3,0), lStack_58 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lStack_58,1,0);
LAB_02637d34:
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (*(long *)(param_1 + 0x18),lStack_58,lVar7,*(undefined8 *)puVar4);
        uVar9 = PrefabModule__GetOrCreatePoolParent_25376c0(param_1,param_2);
        if (*(long *)(param_1 + 0x30) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (*(long *)(param_1 + 0x30),lStack_58,uVar9,*(undefined8 *)puVar3);
          PrefabModuleCallbackHelper__InvokeOnRent_25378a8(lStack_58);
          return lStack_58;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

