/* IL2CPP: OutlineRenderer$$OnEnable
void OutlineRenderer__OnEnable (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineRenderer$$OnEnable
   void OutlineRenderer__OnEnable (OutlineRenderer_o* __this, const MethodInfo* method); */

void OutlineRenderer__OnEnable_254fa74(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&lStack_80,*(undefined8 *)puVar6);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_80,*(undefined8 *)puVar5);
      return;
    }
    lVar13 = *(long *)puVar7;
    lVar9 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&lStack_80,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_128,uVar11,uVar1);
    lVar10 = lStack_128;
    if (lStack_128 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
    uVar11 = UnityEngine_Component__get_gameObject_3c187f4(lStack_128,0);
    uVar12 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(lVar10,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    OutlineModule__Add_254e9a4
              (&lStack_128,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54),lVar9,uVar11,uVar12,*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40));
    func_0x04608620(&uStack_d0,&lStack_128,0x48);
    lVar10 = *(long *)(param_1 + 0x60);
    if (lVar10 == 0) break;
    func_0x04608620(auStack_170,&uStack_d0,0x48);
    FUN_02333498(lVar10,auStack_170,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

