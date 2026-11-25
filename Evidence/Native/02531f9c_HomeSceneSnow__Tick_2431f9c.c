/* IL2CPP: HomeSceneSnow$$Tick
void HomeSceneSnow__Tick (HomeSceneSnow_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSnow$$Tick
   void HomeSceneSnow__Tick (HomeSceneSnow_o* __this, float t, const MethodInfo* method); */

void HomeSceneSnow__Tick_2431f9c(float param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long lStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f4b7de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c38f0);
    FUN_021f03f8(PTR_DAT_049c38f8);
    FUN_021f03f8(PTR_DAT_049c3900);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3908);
    bRam0000000004f4b7de = 1;
  }
  puVar7 = PTR_DAT_049c3900;
  puVar6 = PTR_DAT_049c38f8;
  puVar5 = PTR_DAT_049c38f0;
  puVar4 = PTR_DAT_049c3110;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_2 + 0x10),&uStack_c0,*(undefined8 *)PTR_DAT_049c3908);
    fVar3 = _UNK_013aa8d8;
    uStack_d0 = 0;
    puStack_c8 = &uStack_c0;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_c0,*(undefined8 *)puVar6);
      if ((uVar11 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_c0,*(undefined8 *)puVar5);
        return;
      }
      lVar15 = *(long *)puVar7;
      lVar12 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_c0,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_100,uVar14,uVar1);
      fVar10 = fStack_d8;
      fVar18 = fStack_dc;
      fVar17 = fStack_e0;
      uVar9 = uStack_e4;
      uVar1 = uStack_e8;
      fVar8 = fStack_f0;
      uVar14 = uStack_f8;
      lVar13 = lStack_100;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar13 == 0) break;
      fVar16 = fVar3;
      if (fVar3 <= fVar17) {
        fVar16 = fVar17;
      }
      fVar16 = (param_1 - fVar18) / fVar16;
      fVar16 = fVar16 - (float)(int)fVar16;
      fVar17 = 1.0;
      if (fVar16 <= 1.0) {
        fVar17 = fVar16;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar16) {
        fVar18 = fVar17;
      }
      HomeSceneQuad__SetTexture_2429bd4(fVar8 - fVar10 * fVar18,fVar18,uVar1,uVar9,lVar13,uVar14);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

