/* IL2CPP: BlockNextTransferSystem$$OnBlockTransferComplete
void BlockNextTransferSystem__OnBlockTransferComplete (BlockNextTransferSystem_o* __this, BlockTransferCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024e2210) */
/* WARNING: Removing unreachable block (ram,0x024e2204) */
/* IL2CPP: BlockNextTransferSystem$$OnBlockTransferComplete
   void BlockNextTransferSystem__OnBlockTransferComplete (BlockNextTransferSystem_o* __this,
   BlockTransferCompleteMessage_o m, const MethodInfo* method); */

void BlockNextTransferSystem__OnBlockTransferComplete_23e2b28(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  
  puVar3 = PTR_DAT_049c1700;
  if ((bRam0000000004f4b5e3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1708);
    FUN_021f03f8(PTR_DAT_049c1700);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c1718);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1720);
    FUN_021f03f8(PTR_DAT_049c1728);
    FUN_021f03f8(PTR_DAT_049c1730);
    FUN_021f03f8(PTR_DAT_049c1738);
    bRam0000000004f4b5e3 = 1;
  }
  puVar4 = PTR_DAT_049c1708;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_c0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_90 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_98,*(undefined8 *)puVar4);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = Carrier__IsTransferringOrAddingBlocks_23fad2c(param_2,0);
  if ((uVar9 & 1) == 0) {
    Carrier__FindNextTransferBlocks_23fb3d4(param_2,lStack_98,0);
  }
  if (*(long *)(param_2 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x1e0),&lStack_80,*(undefined8 *)PTR_DAT_049c14f0);
  puVar7 = PTR_DAT_049c1730;
  puVar6 = PTR_DAT_049c1718;
  puVar5 = PTR_DAT_049c1710;
  puVar4 = PTR_DAT_049c14e0;
  puVar3 = PTR_DAT_049c1410;
  uStack_a0 = uStack_70;
  lStack_a8 = lStack_78;
  lStack_b0 = lStack_80;
  do {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&lStack_b0,*(undefined8 *)puVar4);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_b0,*(undefined8 *)PTR_DAT_049c14d8);
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (auStack_90,*(undefined8 *)PTR_DAT_049c1720);
      return;
    }
    lVar16 = *(long *)PTR_DAT_049c14e8;
    lVar10 = *(long *)(lVar16 + 0x20);
    uVar2 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&lStack_b0,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_80,uVar12,uVar1);
    lVar11 = lStack_80;
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar8 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (lStack_98,lStack_80,*(undefined8 *)puVar5);
    lVar10 = *(long *)(param_1 + 0x60);
    if ((bVar8 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = FUN_024f5708(lVar10,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar7);
      if ((uVar9 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x60);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_024f581c(lVar10,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)PTR_DAT_049c1738);
      }
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = FUN_024f5708(lVar10,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar7);
      if ((uVar9 & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x60);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_024f5bd0(lVar10,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)PTR_DAT_049c1728);
      }
    }
    plVar17 = *(long **)(param_1 + 0x58);
    lStack_c0 = 0;
    uStack_b8 = 0;
    lStack_c8 = param_2;
    thunk_FUN_021f190c(&lStack_c8,param_2);
    lStack_c0 = lVar11;
    thunk_FUN_021f190c(&lStack_c0,lVar11);
    lVar10 = lStack_c0;
    lVar11 = lStack_c8;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,bVar8) & 0xffffffffffffff01;
    uVar9 = uStack_b8;
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar16 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_024e2160;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar6,0);
LAB_024e2160:
    lStack_78 = lVar10;
    lStack_80 = lVar11;
    uStack_70 = uVar9;
    (*(code *)*puVar13)(plVar17,&lStack_80,puVar13[1]);
  } while( true );
}

