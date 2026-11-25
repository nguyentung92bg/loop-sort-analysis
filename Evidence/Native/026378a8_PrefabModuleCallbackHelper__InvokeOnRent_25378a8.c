/* IL2CPP: PrefabModuleCallbackHelper$$InvokeOnRent
void PrefabModuleCallbackHelper__InvokeOnRent (UnityEngine_GameObject_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02637b30) */
/* IL2CPP: PrefabModuleCallbackHelper$$InvokeOnRent
   void PrefabModuleCallbackHelper__InvokeOnRent (UnityEngine_GameObject_o* obj, const MethodInfo*
   method); */

void PrefabModuleCallbackHelper__InvokeOnRent_25378a8(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  puVar3 = PTR_DAT_049ca298;
  if ((bRam0000000004f4bf6e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca2a0);
    FUN_021f03f8(PTR_DAT_049ca298);
    FUN_021f03f8(PTR_DAT_049ca2a8);
    FUN_021f03f8(PTR_DAT_049ca2b0);
    FUN_021f03f8(PTR_DAT_049ca2b8);
    FUN_021f03f8(PTR_DAT_049ca2c0);
    FUN_021f03f8(PTR_DAT_049ca2c8);
    FUN_021f03f8(PTR_DAT_049ca2d0);
    FUN_021f03f8(PTR_DAT_049ca2d8);
    bRam0000000004f4bf6e = 1;
  }
  puVar4 = PTR_DAT_049ca2a0;
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_48 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_50,*(undefined8 *)puVar4);
  puStack_78 = auStack_48;
  lStack_80 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__GetComponents___Il2CppFullySharedGenericType__261aebc
            (param_1,lStack_50,*(undefined8 *)PTR_DAT_049ca2c0);
  if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049ca2d0);
  puVar6 = PTR_DAT_049ca2c8;
  puVar5 = PTR_DAT_049ca2b8;
  puVar4 = PTR_DAT_049ca2b0;
  puVar3 = PTR_DAT_049ca2a8;
  uStack_68 = puStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  puStack_90 = &uStack_70;
  uStack_98 = 0;
  do {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar3);
      lVar10 = lStack_80;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_78,*(undefined8 *)PTR_DAT_049ca2d8);
      if (lVar10 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar10);
    }
    lVar14 = *(long *)puVar5;
    lVar9 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_38,uVar11,uVar1);
    plVar7 = plStack_38;
    if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *plStack_38;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02637ac8;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)puVar6,0);
LAB_02637ac8:
    (*(code *)*puVar12)(plVar7,puVar12[1]);
  } while( true );
}

