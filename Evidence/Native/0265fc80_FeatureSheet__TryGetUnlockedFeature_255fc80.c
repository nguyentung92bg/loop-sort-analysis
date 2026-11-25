/* IL2CPP: FeatureSheet$$TryGetUnlockedFeature
bool FeatureSheet__TryGetUnlockedFeature (FeatureSheet_o* __this, int32_t level, int32_t* unlockedFeature, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FeatureSheet$$TryGetUnlockedFeature
   bool FeatureSheet__TryGetUnlockedFeature (FeatureSheet_o* __this, int32_t level, int32_t*
   unlockedFeature, const MethodInfo* method); */

undefined8 FeatureSheet__TryGetUnlockedFeature_255fc80(long param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4c10d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb8d8);
    FUN_021f03f8(PTR_DAT_049cb8e0);
    FUN_021f03f8(PTR_DAT_049cb8e8);
    FUN_021f03f8(PTR_DAT_049cb8f0);
    FUN_021f03f8(PTR_DAT_049c2eb0);
    bRam0000000004f4c10d = 1;
  }
  puVar5 = PTR_DAT_049cb8e8;
  puVar4 = PTR_DAT_049cb8e0;
  puVar3 = PTR_DAT_049cb8d8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x48),&uStack_58,*(undefined8 *)PTR_DAT_049cb8f0);
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_58,*(undefined8 *)puVar4);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_58,*(undefined8 *)puVar3);
        *param_3 = 0;
        return 0;
      }
      lVar11 = *(long *)puVar5;
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_58,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_38,uVar9,uVar1);
      lVar8 = CONCAT44(uStack_34,uStack_38);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x1c) == param_2) {
        plVar10 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2eb0 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar10[1] + 0xfc);
        uVar9 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar10 + 0x80));
        func_0x04608620(&uStack_38,uVar9,uVar1);
        *param_3 = uStack_38;
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_58,*(undefined8 *)puVar3);
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

