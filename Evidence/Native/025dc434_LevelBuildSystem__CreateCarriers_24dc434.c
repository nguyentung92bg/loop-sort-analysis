/* IL2CPP: LevelBuildSystem$$CreateCarriers
void LevelBuildSystem__CreateCarriers (LevelBuildSystem_o* __this, System_Collections_Generic_List_SplineSheet_Cell__o* cells, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelBuildSystem$$CreateCarriers
   void LevelBuildSystem__CreateCarriers (LevelBuildSystem_o* __this,
   System_Collections_Generic_List_SplineSheet_Cell__o* cells, const MethodInfo* method); */

void LevelBuildSystem__CreateCarriers_24dc434(long param_1,long param_2)

{
  ushort uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [4];
  
  if ((bRam0000000004f4bc50 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6710);
    FUN_021f03f8(PTR_DAT_049c7870);
    FUN_021f03f8(PTR_DAT_049c7878);
    FUN_021f03f8(PTR_DAT_049c7880);
    FUN_021f03f8(PTR_DAT_049c7888);
    bRam0000000004f4bc50 = 1;
  }
  puVar7 = PTR_DAT_049c7880;
  puVar6 = PTR_DAT_049c7878;
  puVar5 = PTR_DAT_049c6710;
  uStack_c8 = 0;
  alStack_c0[1] = 0;
  alStack_c0[0] = 0;
  alStack_c0[3] = 0;
  alStack_c0[2] = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&lStack_e8,*(undefined8 *)PTR_DAT_049c7888);
  puVar4 = PTR_DAT_049bbf90;
  puVar3 = PTR_DAT_049b3bd0;
  fVar2 = _UNK_013aa834;
  alStack_c0[0] = lStack_e8;
  alStack_c0[3] = uStack_d0;
  alStack_c0[2] = uStack_d8;
  while( true ) {
    do {
      do {
        do {
          do {
            uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (alStack_c0,*(undefined8 *)puVar6);
            if ((uVar9 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (alStack_c0,*(undefined8 *)PTR_DAT_049c7870);
                    /* try { // try from 025dc7fc to 026dc847 has its CatchHandler @ 025dc8b0 */
              return;
            }
            lVar13 = *(long *)puVar7;
            lVar10 = *(long *)(lVar13 + 0x20);
            uVar1 = *(ushort *)(lVar10 + 0x135);
            lVar11 = lVar10;
            if ((uVar1 & 1) == 0) {
              lVar11 = FUN_02229718();
              lVar10 = *(long *)(lVar13 + 0x20);
              uVar1 = *(ushort *)(lVar10 + 0x135);
            }
            uVar15 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_02229718();
            }
            uVar12 = thunk_FUN_0224e54c(alStack_c0,
                                        *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_e8,uVar12,uVar15);
            uVar17 = uStack_dc;
            uVar15 = uStack_e0;
            lVar11 = lStack_e8;
            uVar9 = System_String__IsNullOrEmpty_2f7c924(lStack_e8,0);
          } while ((uVar9 & 1) != 0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          sVar8 = System_String__get_Chars_2f7736c(lVar11,0,0);
        } while (sVar8 == 0x2d);
        lVar11 = System_String__Split_2f802dc(lVar11,10,0,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar10 = System_String__Split_2f802dc(*(long *)(lVar11 + 0x20),0x2d,0,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        uVar9 = System_Int32__TryParse_30fc1b4(uVar12,&uStack_c8,0);
      } while ((uVar9 & 1) != 0);
      uVar14 = 0;
      if (1 < *(int *)(lVar11 + 0x18)) {
        uVar14 = LevelBuildSystem__ParseFloat_24dc300(uVar9,*(undefined8 *)(lVar11 + 0x28));
      }
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(puVar4);
        cRam0000000004f4a55e = '\x01';
      }
      lVar10 = *(long *)(*(long *)puVar4 + 0xb8);
      fVar19 = *(float *)(lVar10 + 0x18);
      fVar22 = *(float *)(lVar10 + 0x1c);
      uVar24 = *(undefined4 *)(lVar10 + 0x20);
      uVar14 = UnityEngine_Quaternion__AngleAxis_3c0a0a8(uVar14,fVar19,fVar22,uVar24,0);
      fVar23 = fVar22;
      fVar20 = fVar19;
      uVar15 = LevelBuildSystem__ParseWorldOffset_24dc950(param_1,lVar11,uVar15,uVar17);
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                        (uVar12,1,(long)&uStack_c8 + 4,*(undefined8 *)puVar5);
    } while ((uVar9 & 1) == 0);
    lVar11 = LevelBuildSystem__CreateCarrier_24dca7c(param_1,uStack_c8._4_4_);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025dc848 to 026dc867 has its CatchHandler @ 025dc720 */
      FUN_021f06a0();
    }
    lVar10 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025dc720 to 026dc7d7 has its CatchHandler @ 025dc720
                       catch() { ... } // from try @ 025dc720 with catch @ 025dc720
                       catch() { ... } // from try @ 025dc848 with catch @ 025dc720
                       catch() { ... } // from try @ 025dc870 with catch @ 025dc720
                       catch() { ... } // from try @ 025dc8a0 with catch @ 025dc720
                       catch() { ... } // from try @ 025dc8d0 with catch @ 025dc720
                       catch() { ... } // from try @ 025dc8fc with catch @ 025dc720 */
    UnityEngine_Transform__set_position_3c2d61c
              (uVar15,fVar20 - (*(float *)(*(long *)(param_1 + 0x50) + 0x1c) + fVar2),fVar23,lVar10,
               0);
    UnityEngine_Transform__set_rotation_3c2d86c(uVar14,fVar19,fVar22,uVar24,lVar10,0);
    fVar16 = (float)UnityEngine_Transform__get_position_3c2d540(lVar10,0);
    fVar23 = fVar22;
    fVar20 = fVar19;
    uVar15 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar10,0);
    if (*(long *)(lVar11 + 0x110) == 0) break;
    fVar18 = fVar23;
    fVar21 = fVar20;
    uVar17 = UnityEngine_Transform__get_localPosition_3c2c388(*(long *)(lVar11 + 0x110),0);
    fVar18 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8
                              (uVar15,fVar20,fVar23,uVar24,uVar17,fVar21,fVar18,0);
    UnityEngine_Transform__set_position_3c2d61c
              (fVar16 - fVar18,fVar19 - fVar20,fVar22 - fVar23,lVar10,0);
                    /* try { // try from 025dc7d8 to 026dc7df has its CatchHandler @ 025dc8ac */
    LevelBuildSystem__CreateElevatorCarriers_24dcf04(param_1,uStack_c8._4_4_,lVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

