/* IL2CPP: BlockPhysicsSystem$$OnLevelBuildComplete
void BlockPhysicsSystem__OnLevelBuildComplete (BlockPhysicsSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockPhysicsSystem$$OnLevelBuildComplete
   void BlockPhysicsSystem__OnLevelBuildComplete (BlockPhysicsSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void BlockPhysicsSystem__OnLevelBuildComplete_23e3f6c(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  double dVar17;
  undefined4 uVar18;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  puVar4 = PTR_DAT_049b8a28;
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* try { // try from 024e3f7c to 025e3f7f has its CatchHandler @ 024e4054 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024e3f80 to 025e3f83 has its CatchHandler @ 024e4050 */
    FUN_021f06a0();
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x7c);
  uVar10 = (ulong)uVar3;
  if ((bRam0000000004f4b5ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c18d0);
    FUN_021f03f8(PTR_DAT_049c18d8);
    FUN_021f03f8(PTR_DAT_049c18e0);
    FUN_021f03f8(PTR_DAT_049c18e8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049c18f0);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f4b5ef = 1;
  }
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar7 = FUN_021f04e4(*(undefined8 *)puVar4,uVar10);
  plVar12 = (long *)(param_1 + 0x70);
  *plVar12 = lVar7;
  thunk_FUN_021f190c(plVar12,lVar7);
  lVar7 = FUN_021f04e4(*(undefined8 *)puVar4,uVar10);
  plVar13 = (long *)(param_1 + 0x78);
  *plVar13 = lVar7;
  thunk_FUN_021f190c(plVar13,lVar7);
  lVar7 = FUN_021f04e4(*(undefined8 *)puVar4,uVar10);
  plVar14 = (long *)(param_1 + 0x80);
  *plVar14 = lVar7;
  thunk_FUN_021f190c(plVar14,lVar7);
  lVar7 = FUN_021f04e4(*(undefined8 *)puVar4,uVar10);
  plVar15 = (long *)(param_1 + 0x88);
  *plVar15 = lVar7;
  thunk_FUN_021f190c(plVar15,lVar7);
  puVar4 = PTR_DAT_049b6110;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < (int)uVar3) {
    uVar16 = 0;
    lVar7 = 0x20;
    do {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_024e43a0;
      dVar17 = (double)(int)uVar16 / (double)(int)(uVar3 - 1);
      Dreamteck_Splines_SplineComputer__Evaluate_234929c
                (dVar17,*(long *)(param_1 + 0x38),&uStack_c0,0);
      lVar11 = *plVar12;
      if (lVar11 == 0) goto LAB_024e43a0;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_024e43a4;
      *(undefined8 *)(lVar11 + lVar7) = uStack_c0;
      *(undefined4 *)((undefined8 *)(lVar11 + lVar7) + 1) = uStack_b8;
      lVar11 = *plVar14;
      if (lVar11 == 0) goto LAB_024e43a0;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_024e43a4;
      *(undefined8 *)(lVar11 + lVar7) = uStack_a8;
      *(undefined4 *)((undefined8 *)(lVar11 + lVar7) + 1) = (undefined4)uStack_a0;
      lVar11 = *plVar15;
      if (lVar11 == 0) goto LAB_024e43a0;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_024e43a4;
      *(undefined8 *)(lVar11 + lVar7) = CONCAT44(uStack_b0,uStack_b4);
      *(undefined4 *)((undefined8 *)(lVar11 + lVar7) + 1) = uStack_ac;
      if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_024e43a0;
      uVar18 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x78);
      uVar8 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0(*(long *)(param_1 + 0x38),0);
      lVar11 = *(long *)(param_1 + 0x38);
      if ((uVar8 & 1) == 0) {
        if (lVar11 == 0) goto LAB_024e43a0;
        Dreamteck_Splines_SplineComputer__Travel_2349410(dVar17,uVar18,lVar11,1,0);
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Extensions__TravelUnclamped_24e666c(dVar17,uVar18,lVar11,1,0);
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_024e43a0;
      Dreamteck_Splines_SplineComputer__Evaluate_234929c(*(long *)(param_1 + 0x38),&uStack_c0,0);
      lVar11 = *plVar13;
      if (lVar11 == 0) goto LAB_024e43a0;
      if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_024e43a4;
      uVar16 = uVar16 + 1;
      puVar1 = (undefined8 *)(lVar11 + lVar7);
      lVar7 = lVar7 + 0xc;
      *puVar1 = uStack_c0;
      *(undefined4 *)(puVar1 + 1) = uStack_b8;
    } while (uVar10 != uVar16);
  }
  puVar4 = PTR_DAT_049c18d8;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar9 = *(undefined8 *)PTR_DAT_049c18e8;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x80);
    lVar7 = thunk_FUN_0222ca34(uVar9);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0fc
              (lVar7,uVar3 << 1,*(undefined8 *)puVar4);
    plVar13 = (long *)(param_1 + 0x90);
    *plVar13 = lVar7;
    thunk_FUN_021f190c(plVar13,lVar7);
    puVar6 = PTR_DAT_049c18e0;
    puVar5 = PTR_DAT_049c18d0;
    puVar4 = PTR_DAT_049be138;
    if (0 < (int)uVar3) {
      uVar16 = 0;
      lVar7 = 0x20;
      do {
        lVar11 = *plVar12;
        if (lVar11 == 0) goto LAB_024e43a0;
        if (*(uint *)(lVar11 + 0x18) <= uVar16) {
LAB_024e43a4:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        puVar2 = (undefined4 *)(lVar11 + lVar7);
        uVar9 = BlockPhysicsSystem__HashPosition_23e49d8(*puVar2,puVar2[1],puVar2[2],param_1);
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_024e43a0;
        uStack_78 = uVar9;
        uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (*(long *)(param_1 + 0x90),&uStack_78,&lStack_c8,*(undefined8 *)puVar5);
        if ((uVar8 & 1) == 0) {
          lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049be168);
          System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
                    (lVar11,4,*(undefined8 *)PTR_DAT_049c18f0);
          lStack_c8 = lVar11;
          if (*plVar13 == 0) goto LAB_024e43a0;
          uStack_78 = uVar9;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*plVar13,&uStack_78,lVar11,*(undefined8 *)puVar6);
        }
        if (lStack_c8 == 0) goto LAB_024e43a0;
        uStack_78 = CONCAT44(uStack_78._4_4_,(int)uVar16);
        FUN_02333498(lStack_c8,&uStack_78,*(undefined8 *)puVar4);
        uVar16 = uVar16 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar10 != uVar16);
    }
    return;
  }
LAB_024e43a0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

