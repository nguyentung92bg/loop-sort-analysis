/* IL2CPP: SplineMeshAutoCount$$Refresh
void SplineMeshAutoCount__Refresh (SplineMeshAutoCount_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineMeshAutoCount$$Refresh
   void SplineMeshAutoCount__Refresh (SplineMeshAutoCount_o* __this, const MethodInfo* method); */

void SplineMeshAutoCount__Refresh_249f608(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000004f4bae3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c64f8);
    FUN_021f03f8(PTR_DAT_049c6500);
    FUN_021f03f8(PTR_DAT_049c6508);
    FUN_021f03f8(PTR_DAT_049c6510);
    bRam0000000004f4bae3 = 1;
  }
  puVar7 = PTR_DAT_049c6508;
  puVar6 = PTR_DAT_049c6500;
  puVar5 = PTR_DAT_049c64f8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x20),&uStack_a8,*(undefined8 *)PTR_DAT_049c6510);
  puVar4 = PTR_DAT_049b8758;
  uStack_88 = puStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  uStack_a8 = 0;
  puStack_a0 = &uStack_90;
  while( true ) {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_90,*(undefined8 *)puVar6);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar5);
      return;
    }
    lVar13 = *(long *)puVar7;
    lVar10 = *(long *)(lVar13 + 0x20);
    uVar3 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar3 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar3 = *(ushort *)(lVar10 + 0x135);
    }
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&fStack_58,uVar12,uVar2);
    uVar2 = uStack_54;
    fVar8 = fStack_58;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar14 = (float)Dreamteck_Splines_SplineComputer__CalculateLength_2349594
                              (0,*(undefined8 *)(param_1 + 0x38),*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = Dreamteck_Splines_SplineMesh__GetChannel_234e16c(*(long *)(param_1 + 0x30),uVar2,0);
    if (cRam0000000004f4b79c == '\0') {
      FUN_021f03f8(puVar4);
      cRam0000000004f4b79c = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar11 == 0) break;
    iVar1 = -0x80000000;
    if ((float)(int)(fVar14 * fVar8) != INFINITY) {
      iVar1 = (int)(fVar14 * fVar8);
    }
    Dreamteck_Splines_SplineMesh_Channel__set_count_234eb34(lVar11,iVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

