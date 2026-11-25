/* IL2CPP: SandFlowSystem$$IsJellyMoving
bool SandFlowSystem__IsJellyMoving (SandFlowSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$IsJellyMoving
   bool SandFlowSystem__IsJellyMoving (SandFlowSystem_o* __this, Carrier_o* carrier,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

byte SandFlowSystem__IsJellyMoving_24cf08c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  if ((bRam0000000004f4bbf9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7250);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c58e0);
    FUN_021f03f8(PTR_DAT_049c1df0);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbf9 = 1;
  }
  lVar15 = *(long *)(param_4 + 0x208);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (lVar15 != 0) {
    lVar14 = *(long *)PTR_DAT_049c1df0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    uVar11 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(lVar15 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
      }
    }
    lVar15 = *(long *)(param_4 + 0x210);
    if (lVar15 != 0) {
      lVar14 = *(long *)PTR_DAT_049c58e0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      uVar11 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
      if ((uVar11 & 1) == 0) {
        *(undefined4 *)(lVar15 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar15 + 0x18);
        *(undefined4 *)(lVar15 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
        }
      }
      if ((param_5 != 0) &&
         (lVar15 = UnityEngine_Component__get_gameObject_3c187f4(param_5,0), lVar15 != 0)) {
        uVar11 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar15,0);
        if (((uVar11 & 1) == 0) ||
           (uVar11 = Carrier__IsGroupBlockEnabled_2409f20(param_5,0), (uVar11 & 1) != 0)) {
          bVar17 = 0;
        }
        else {
          if (param_6 == 0) goto LAB_025cf4c0;
          lVar15 = *(long *)(param_5 + 0xc0);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (param_6,&uStack_e8,*(undefined8 *)PTR_DAT_049c14f0);
          puVar9 = PTR_DAT_049c7250;
          puVar8 = PTR_DAT_049c7130;
          puVar7 = PTR_DAT_049c14e8;
          puVar6 = PTR_DAT_049c14e0;
          puVar5 = PTR_DAT_049bed58;
          fVar4 = _UNK_013aa548;
          uStack_c8 = puStack_e0;
          uStack_d0 = uStack_e8;
          uStack_c0 = uStack_d8;
          puStack_e0 = &uStack_d0;
          bVar17 = 0;
          uStack_e8 = 0;
          while (bVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&uStack_d0,*(undefined8 *)puVar6), (bVar10 & 1) != 0) {
            lVar16 = *(long *)puVar7;
            lVar12 = *(long *)(lVar16 + 0x20);
            uVar3 = *(ushort *)(lVar12 + 0x135);
            lVar14 = lVar12;
            if ((uVar3 & 1) == 0) {
              lVar14 = FUN_02229718();
              lVar12 = *(long *)(lVar16 + 0x20);
              uVar3 = *(ushort *)(lVar12 + 0x135);
            }
            uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
            if ((uVar3 & 1) == 0) {
              lVar12 = FUN_02229718();
            }
            uVar13 = thunk_FUN_0224e54c(&uStack_d0,
                                        *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&fStack_b0,uVar13,uVar2);
            lVar14 = CONCAT44(fStack_ac,fStack_b0);
            if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar11 = SandFlowSystem__IsShown_24ceef8(param_5,lVar14);
            if ((uVar11 & 1) != 0) {
              if (*(long *)(param_4 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                                 (*(long *)(param_4 + 0xf0),lVar14,*(undefined8 *)puVar9);
              if ((uVar11 & 1) != 0) break;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              if ((*(char *)(lVar14 + 0x158) != '\0') ||
                 ((uVar11 = SandFlowSystem__IsJelly_24c9cc8(param_4,lVar14), fVar21 = param_3,
                  (uVar11 & 1) == 0 &&
                  (uVar11 = SandFlowSystem__IsHiddenJelly_24cec6c(param_4,param_5,lVar14),
                  fVar21 = param_3, (uVar11 & 1) == 0)))) break;
              lVar12 = UnityEngine_Component__get_transform_3c18724(lVar14,0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              UnityEngine_Transform__get_position_3c2d540(lVar12,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              fVar18 = (float)UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar15,0);
              fVar22 = param_2;
              fVar20 = fVar21;
              auVar23 = Carrier__GetBlockCoordinate_2408c2c(param_5,lVar14,0);
              fVar19 = (float)Carrier__CoordinateToLocalPosition_2408cbc
                                        (param_5,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,0);
              if (*(long *)(param_4 + 0x208) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              param_3 = fVar20;
              FUN_02333498(*(long *)(param_4 + 0x208),lVar14,*(undefined8 *)PTR_DAT_049c1c80);
              if (*(long *)(param_4 + 0x210) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              fVar18 = fVar18 - fVar19;
              fVar22 = param_2 - fVar22;
              fVar21 = fVar21 - fVar20;
              fStack_b0 = fVar18;
              fStack_ac = fVar22;
              fStack_a8 = fVar21;
              FUN_02333498(*(long *)(param_4 + 0x210),&fStack_b0,*(undefined8 *)puVar5);
              param_2 = fVar21 * fVar21;
              bVar17 = bVar17 | fVar4 < param_2 + fVar18 * fVar18 + fVar22 * fVar22;
            }
          }
          bVar17 = (bVar10 ^ 1) & bVar17;
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
        }
        return bVar17;
      }
    }
  }
LAB_025cf4c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

