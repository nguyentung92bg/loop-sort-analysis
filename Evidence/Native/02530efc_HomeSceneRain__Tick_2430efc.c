/* IL2CPP: HomeSceneRain$$Tick
void HomeSceneRain__Tick (HomeSceneRain_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneRain$$Tick
   void HomeSceneRain__Tick (HomeSceneRain_o* __this, float t, const MethodInfo* method); */

void HomeSceneRain__Tick_2430efc(float param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *plStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000004f4b7d9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3898);
    FUN_021f03f8(PTR_DAT_049c38a0);
    FUN_021f03f8(PTR_DAT_049c38a8);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c38b0);
    bRam0000000004f4b7d9 = 1;
  }
  puVar7 = PTR_DAT_049c38a8;
  puVar6 = PTR_DAT_049c38a0;
  puVar5 = PTR_DAT_049c3898;
  puVar4 = PTR_DAT_049c3110;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_2 + 0x10),&plStack_128,*(undefined8 *)PTR_DAT_049c38b0);
    func_0x04608620(&uStack_e0,&plStack_128,0x48);
    fVar3 = _UNK_013aa8d8;
    while( true ) {
      uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_e0,*(undefined8 *)puVar6);
      if ((uVar14 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_e0,*(undefined8 *)puVar5);
        return;
      }
      lVar18 = *(long *)puVar7;
      lVar15 = *(long *)(lVar18 + 0x20);
      uVar2 = *(ushort *)(lVar15 + 0x135);
      lVar16 = lVar15;
      if ((uVar2 & 1) == 0) {
        lVar16 = FUN_02229718();
        lVar15 = *(long *)(lVar18 + 0x20);
        uVar2 = *(ushort *)(lVar15 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
      uVar17 = thunk_FUN_0224e54c(&uStack_e0,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_128,uVar17,uVar1);
      fVar13 = fStack_f4;
      fVar12 = fStack_f8;
      uVar11 = uStack_fc;
      fVar21 = fStack_100;
      fVar20 = fStack_104;
      fVar22 = fStack_108;
      uVar10 = uStack_10c;
      uVar9 = uStack_110;
      uVar1 = uStack_118;
      uVar17 = uStack_120;
      plVar8 = plStack_128;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (plVar8 == (long *)0x0) break;
      fVar19 = fVar3;
      if (fVar3 <= fVar22) {
        fVar19 = fVar22;
      }
      fVar19 = (param_1 - fVar20) / fVar19;
      fVar19 = fVar19 - (float)(int)fVar19;
      fVar22 = 1.0;
      if (fVar19 <= 1.0) {
        fVar22 = fVar19;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar19) {
        fVar20 = fVar22;
      }
      HomeSceneQuad__SetTexture_2429bd4(uVar1,fVar20,uVar9,uVar10,plVar8,uVar17);
      fVar20 = (float)HomeSceneView__Alternate_24280f0
                                (param_1,uVar11,fVar21 * 0.5,
                                 *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10));
      fVar22 = 1.0;
      if (fVar20 <= 1.0) {
        fVar22 = fVar20;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar20) {
        fVar21 = fVar22;
      }
      (**(code **)(*plVar8 + 0x2a8))
                (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined4 *)(param_2 + 0x20),fVar12 + (fVar13 - fVar12) * fVar21,plVar8,
                 *(undefined8 *)(*plVar8 + 0x2b0));
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

