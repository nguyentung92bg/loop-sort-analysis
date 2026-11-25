/* IL2CPP: PrefabModule$$GetOrCreatePoolParent
UnityEngine_Transform_o* PrefabModule__GetOrCreatePoolParent (PrefabModule_o* __this, UnityEngine_GameObject_o* original, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$GetOrCreatePoolParent
   UnityEngine_Transform_o* PrefabModule__GetOrCreatePoolParent (PrefabModule_o* __this,
   UnityEngine_GameObject_o* original, const MethodInfo* method); */

long PrefabModule__GetOrCreatePoolParent_25376c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lStack_38;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf6b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca248);
    FUN_021f03f8(PTR_DAT_049ca280);
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049ca288);
    FUN_021f03f8(PTR_DAT_049ca290);
    bRam0000000004f4bf6b = 1;
  }
  lStack_38 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x20);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3b90;
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar7,0,0);
  puVar3 = PTR_DAT_049ca288;
  if ((uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_3c1db70(lVar5,*(undefined8 *)puVar3,0);
    if (lVar5 == 0) goto LAB_026378a4;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Object__DontDestroyOnLoad_3c246bc(lVar5,0);
    uVar7 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0);
    *puVar6 = uVar7;
    thunk_FUN_021f190c(puVar6,uVar7);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x28),param_2,&lStack_38,*(undefined8 *)PTR_DAT_049ca280)
    ;
    if ((uVar4 & 1) != 0) {
      return lStack_38;
    }
    if (param_2 != 0) {
      uVar7 = UnityEngine_Object__get_name_3c232a8(param_2,0);
      uVar7 = System_String__Concat_2f72b28(uVar7,*(undefined8 *)PTR_DAT_049ca290,0);
      lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      UnityEngine_GameObject___ctor_3c1db70(lVar5,uVar7,0);
      if ((lVar5 != 0) &&
         (lStack_38 = UnityEngine_GameObject__get_transform_3c1ca74(lVar5,0), lStack_38 != 0)) {
        UnityEngine_Transform__SetParent_3c2e01c(lStack_38,*(undefined8 *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x28) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                    (*(long *)(param_1 + 0x28),param_2,lStack_38,*(undefined8 *)PTR_DAT_049ca248);
          return lStack_38;
        }
      }
    }
  }
LAB_026378a4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

