/* IL2CPP: HeartContainer$$Update
void HeartContainer__Update (HeartContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HeartContainer$$Update
   void HeartContainer__Update (HeartContainer_o* __this, const MethodInfo* method); */

void HeartContainer__Update_256be84(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  if ((bRam0000000004f4c197 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbea8);
    FUN_021f03f8(PTR_DAT_049cbeb0);
    FUN_021f03f8(PTR_DAT_049cbeb8);
    FUN_021f03f8(PTR_DAT_049cbec0);
    FUN_021f03f8(PTR_DAT_049cbec8);
    FUN_021f03f8(PTR_DAT_049cbed0);
    bRam0000000004f4c197 = 1;
  }
  puVar7 = PTR_DAT_049cbed0;
  puVar6 = PTR_DAT_049cbeb8;
  puVar5 = PTR_DAT_049cbeb0;
  puVar4 = PTR_DAT_049cbea8;
  lVar9 = *(long *)(param_1 + 0x28);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar9 + 0x18) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar9,&uStack_a8,*(undefined8 *)PTR_DAT_049cbec0);
    uVar3 = _UNK_013aa810;
    uStack_80 = uStack_98;
    uStack_88 = puStack_a0;
    uStack_90 = uStack_a8;
    uStack_a8 = 0;
    puStack_a0 = &uStack_90;
    while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_90,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
      lVar13 = *(long *)puVar6;
      lVar11 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar9 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar11 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_78,uVar12,uVar1);
      plVar8 = plStack_78;
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar16 = 1.0;
      fVar19 = 1.0;
      fVar20 = 1.0;
      fVar14 = (float)StatefulUI_Runtime_Core_StatefulUiUtils__ChangeA_3350154
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,uVar3,0);
      fVar15 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar17 = (float)(int)(fVar15 * 1.5 * 0.5);
      fVar17 = fVar15 * 1.5 - (fVar17 + fVar17);
      fVar15 = 2.0;
      if (fVar17 <= 2.0) {
        fVar15 = fVar17;
      }
      fVar18 = -1.0;
      if (0.0 <= fVar17) {
        fVar18 = fVar15 + -1.0;
      }
      fVar17 = 1.0 - ABS(fVar18);
      fVar15 = 1.0;
      if (fVar17 <= 1.0) {
        fVar15 = fVar17;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar17) {
        fVar18 = fVar15;
      }
      (**(code **)(*plVar8 + 0x2a8))
                ((fVar14 + -1.0) * fVar18 + 1.0,(fVar16 + -1.0) * fVar18 + 1.0,
                 (fVar19 + -1.0) * fVar18 + 1.0,(fVar20 + -1.0) * fVar18 + 1.0,plVar8,
                 *(undefined8 *)(*plVar8 + 0x2b0));
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)puVar4);
  }
  return;
}

