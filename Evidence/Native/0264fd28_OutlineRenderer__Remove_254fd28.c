/* IL2CPP: OutlineRenderer$$Remove
void OutlineRenderer__Remove (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineRenderer$$Remove
   void OutlineRenderer__Remove (OutlineRenderer_o* __this, const MethodInfo* method); */

void OutlineRenderer__Remove_254fd28(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_1a0 [72];
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f4c072 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2460);
    FUN_021f03f8(PTR_DAT_049c2468);
    FUN_021f03f8(PTR_DAT_049c2470);
    FUN_021f03f8(PTR_DAT_049cac20);
    FUN_021f03f8(PTR_DAT_049c2480);
    FUN_021f03f8(PTR_DAT_049cac90);
    bRam0000000004f4c072 = 1;
  }
  puVar8 = PTR_DAT_049cac90;
  puVar7 = PTR_DAT_049cac20;
  puVar6 = PTR_DAT_049c2470;
  puVar5 = PTR_DAT_049c2468;
  puVar4 = PTR_DAT_049c2460;
  uStack_60 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x60),&uStack_158,*(undefined8 *)PTR_DAT_049c2480);
    func_0x04608620(&uStack_b0,&uStack_158,0x58);
    uStack_158 = 0;
    puStack_150 = &uStack_b0;
    while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_b0,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      lVar13 = *(long *)puVar6;
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar3 = *(ushort *)(lVar10 + 0x135);
      lVar11 = lVar10;
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_100,uVar12,uVar1);
      lVar11 = **(long **)(*(long *)puVar8 + 0xb8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      func_0x04608620(auStack_1a0,&uStack_100,0x48);
      OutlineModule__Remove_254ecd4(lVar11,auStack_1a0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_b0,*(undefined8 *)puVar4);
    lVar11 = *(long *)(param_1 + 0x60);
    if (lVar11 != 0) {
      lVar10 = *(long *)puVar7;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar9 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar11 + 0x10),0,iVar2,0);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

