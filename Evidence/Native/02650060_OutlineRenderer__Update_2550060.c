/* IL2CPP: OutlineRenderer$$Update
void OutlineRenderer__Update (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineRenderer$$Update
   void OutlineRenderer__Update (OutlineRenderer_o* __this, const MethodInfo* method); */

void OutlineRenderer__Update_2550060(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_170 [72];
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar12 = OutlineRenderer__HasChanges_25500a4();
  if ((uVar12 & 1) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x38);
  OutlineRenderer__Remove_254fd28(param_1);
  if ((bRam0000000004f4c071 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cacc0);
    FUN_021f03f8(PTR_DAT_049cacc8);
    FUN_021f03f8(PTR_DAT_049cacd0);
    FUN_021f03f8(PTR_DAT_049c2478);
    FUN_021f03f8(PTR_DAT_049cacd8);
    FUN_021f03f8(PTR_DAT_049cac90);
    bRam0000000004f4c071 = 1;
  }
  puVar7 = PTR_DAT_049cacd0;
  puVar6 = PTR_DAT_049cacc8;
  puVar5 = PTR_DAT_049cacc0;
  puVar4 = PTR_DAT_049cac90;
  puVar3 = PTR_DAT_049c2478;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x58),&lStack_128,*(undefined8 *)PTR_DAT_049cacd8);
  uStack_70 = uStack_118;
  plStack_d8 = &lStack_80;
  uStack_78 = uStack_120;
  lStack_80 = lStack_128;
  uStack_e0 = 0;
  while( true ) {
    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&lStack_80,*(undefined8 *)puVar6);
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_80,*(undefined8 *)puVar5);
      return;
    }
    lVar13 = *(long *)puVar7;
    lVar8 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&lStack_80,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_128,uVar10,uVar1);
    lVar9 = lStack_128;
    if (lStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = **(long **)(*(long *)puVar4 + 0xb8);
    uVar10 = UnityEngine_Component__get_gameObject_3c187f4(lStack_128,0);
    uVar11 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(lVar9,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    OutlineModule__Add_254e9a4
              (&lStack_128,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54),lVar8,uVar10,uVar11,*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40));
    func_0x04608620(&uStack_d0,&lStack_128,0x48);
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 == 0) break;
    func_0x04608620(auStack_170,&uStack_d0,0x48);
    FUN_02333498(lVar9,auStack_170,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

