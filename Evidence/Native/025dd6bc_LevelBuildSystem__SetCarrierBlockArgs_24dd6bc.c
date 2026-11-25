/* IL2CPP: LevelBuildSystem$$SetCarrierBlockArgs
void LevelBuildSystem__SetCarrierBlockArgs (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025dda84) */
/* WARNING: Removing unreachable block (ram,0x025ddb18) */
/* IL2CPP: LevelBuildSystem$$SetCarrierBlockArgs
   void LevelBuildSystem__SetCarrierBlockArgs (LevelBuildSystem_o* __this, const MethodInfo*
   method); */

void LevelBuildSystem__SetCarrierBlockArgs_24dd6bc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined4 uStack_68;
  long lStack_48;
  
  if ((bRam0000000004f4bc56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c78c8);
    FUN_021f03f8(PTR_DAT_049c78d0);
    FUN_021f03f8(PTR_DAT_049c78d8);
    FUN_021f03f8(PTR_DAT_049c78e0);
    FUN_021f03f8(PTR_DAT_049c78e8);
    FUN_021f03f8(PTR_DAT_049c78f0);
    FUN_021f03f8(PTR_DAT_049c78f8);
    FUN_021f03f8(PTR_DAT_049c7900);
    bRam0000000004f4bc56 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  lStack_48 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x98) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x6c);
    bVar4 = *(byte *)(*(long *)(param_1 + 0x98) + 0x10);
    fVar16 = (float)Conveyor__get_ActiveLength_24b03a0(*(long *)(param_1 + 0x48),0);
    puVar6 = PTR_DAT_049c78c8;
    lVar12 = *(long *)(param_1 + 0x58);
    if (lVar12 != 0) {
      fVar18 = *(float *)(lVar12 + 0x3c);
      iVar2 = *(int *)(lVar12 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_049c78d0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                             (&lStack_48,*(undefined8 *)puVar6);
      puVar6 = PTR_DAT_049c78f0;
      puStack_a8 = auStack_80;
      lStack_b0 = 0;
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar2 = iVar2 << 2;
      uStack_d0 = 0x300000003;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)PTR_DAT_049c78f0);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x300000004;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x400000004;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x400000005;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x500000005;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x500000006;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x600000006;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_d0 = 0x600000007;
      puStack_c8._0_4_ = iVar2;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,iVar2);
      uStack_d0 = 0x700000007;
      FUN_02333498(lStack_48,&uStack_d0,*(undefined8 *)puVar6);
      if (cRam0000000004f4b729 == '\0') {
        FUN_021f03f8(PTR_DAT_049c1440);
        cRam0000000004f4b729 = '\x01';
      }
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = **(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8);
      uVar15 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8) + 1);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_48,&uStack_d0,*(undefined8 *)PTR_DAT_049c78f8);
      uStack_a0 = uStack_d0;
      puVar8 = PTR_DAT_049c78e8;
      puVar7 = PTR_DAT_049c78e0;
      puVar6 = PTR_DAT_049c78d8;
      iVar1 = iVar1 + (uint)bVar4;
      uStack_d0 = 0;
      uStack_98 = puStack_c8;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      fVar19 = 3.4028235e+38;
      puStack_c8 = &uStack_a0;
      while( true ) {
        uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_a0,*(undefined8 *)puVar7);
        if ((uVar9 & 1) == 0) break;
        lVar14 = *(long *)puVar8;
        lVar10 = *(long *)(lVar14 + 0x20);
        uVar5 = *(ushort *)(lVar10 + 0x135);
        lVar12 = lVar10;
        if ((uVar5 & 1) == 0) {
          lVar12 = FUN_02229718();
          lVar10 = *(long *)(lVar14 + 0x20);
          uVar5 = *(ushort *)(lVar10 + 0x135);
        }
        uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
        if ((uVar5 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&uStack_a0,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_70,uVar11,uVar3);
        if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar17 = ABS((float)((int)((ulong)uStack_70 >> 0x20) * (int)uStack_70 *
                            *(int *)(*(long *)(param_1 + 0x58) + 0x38)) -
                     (fVar16 / (float)iVar1) * fVar18);
        if (fVar17 <= fVar19) {
          uVar13 = uStack_70;
          uVar15 = uStack_68;
          fVar19 = fVar17;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_a0,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Conveyor__SetCarrierBlockArgs_24b14e4
                (*(long *)(param_1 + 0x48),uVar13,CONCAT44(iVar1,uVar15),0);
      lVar12 = lStack_b0;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_a8,*(undefined8 *)PTR_DAT_049c7900);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0698(lVar12);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

