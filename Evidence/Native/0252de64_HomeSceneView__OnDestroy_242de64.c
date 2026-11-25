/* IL2CPP: HomeSceneView$$OnDestroy
void HomeSceneView__OnDestroy (HomeSceneView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$OnDestroy
   void HomeSceneView__OnDestroy (HomeSceneView_o* __this, const MethodInfo* method); */

void HomeSceneView__OnDestroy_242de64(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long *plStack_38;
  
  if ((bRam0000000004f4b7bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c36e0);
    FUN_021f03f8(PTR_DAT_049c36f8);
    FUN_021f03f8(PTR_DAT_049c3710);
    FUN_021f03f8(PTR_DAT_049c3730);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7bf = 1;
  }
  puVar6 = PTR_DAT_049c3710;
  puVar5 = PTR_DAT_049c36f8;
  puVar4 = PTR_DAT_049c36e0;
  puVar3 = PTR_DAT_049b3b98;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x30),&uStack_78,*(undefined8 *)PTR_DAT_049c3730);
    uStack_50 = uStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_60,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
      lVar12 = *(long *)puVar6;
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar8 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_38,uVar10,uVar1);
      if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      (**(code **)(*plStack_38 + 0x188))(plStack_38,*(undefined8 *)(*plStack_38 + 400));
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_60,*(undefined8 *)puVar4);
    lVar9 = *(long *)(param_1 + 0x70);
    if (lVar9 != 0) {
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar7 = 0;
        uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar10 = *(undefined8 *)(lVar9 + 0x20 + uVar7 * 8);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          UnityEngine_Object__Destroy_3c24380(uVar10,0);
          uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

