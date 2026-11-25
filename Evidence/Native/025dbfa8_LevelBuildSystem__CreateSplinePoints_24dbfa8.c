/* IL2CPP: LevelBuildSystem$$CreateSplinePoints
void LevelBuildSystem__CreateSplinePoints (LevelBuildSystem_o* __this, System_Collections_Generic_List_SplineSheet_Cell__o* cells, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$CreateSplinePoints
   void LevelBuildSystem__CreateSplinePoints (LevelBuildSystem_o* __this,
   System_Collections_Generic_List_SplineSheet_Cell__o* cells, const MethodInfo* method); */

void LevelBuildSystem__CreateSplinePoints_24dbfa8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  short sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bc4f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7870);
    FUN_021f03f8(PTR_DAT_049c7878);
    FUN_021f03f8(PTR_DAT_049c7880);
    FUN_021f03f8(PTR_DAT_049c7888);
    bRam0000000004f4bc4f = 1;
  }
  puVar6 = PTR_DAT_049c7880;
  puVar5 = PTR_DAT_049c7878;
  puVar4 = PTR_DAT_049c7870;
  uStack_48 = 0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&lStack_90,*(undefined8 *)PTR_DAT_049c7888);
  alStack_70[0] = lStack_90;
  alStack_70[3] = uStack_78;
  alStack_70[2] = uStack_80;
  do {
    do {
      do {
        do {
          do {
            uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (alStack_70,*(undefined8 *)puVar5);
            if ((uVar9 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (alStack_70,*(undefined8 *)puVar4);
              return;
            }
            lVar14 = *(long *)puVar6;
            lVar10 = *(long *)(lVar14 + 0x20);
            uVar3 = *(ushort *)(lVar10 + 0x135);
            lVar11 = lVar10;
            if ((uVar3 & 1) == 0) {
              lVar11 = FUN_02229718();
              lVar10 = *(long *)(lVar14 + 0x20);
              uVar3 = *(ushort *)(lVar10 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
            if ((uVar3 & 1) == 0) {
              lVar10 = FUN_02229718();
            }
            uVar12 = thunk_FUN_0224e54c(alStack_70,
                                        *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_90,uVar12,uVar1);
            uVar7 = uStack_84;
            uVar1 = uStack_88;
            lVar11 = lStack_90;
            uVar9 = System_String__IsNullOrEmpty_2f7c924(lStack_90,0);
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
        uVar9 = System_Int32__TryParse_30fc1b4
                          (*(undefined8 *)(lVar10 + 0x20),(long)&uStack_48 + 4,0);
      } while ((uVar9 & 1) == 0);
      uVar2 = *(uint *)(lVar11 + 0x18);
      uStack_48 = uStack_48 & 0xffffffff;
    } while ((int)uVar2 < 1);
    uVar13 = 0;
    do {
      if (uVar2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar10 = *(long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = System_String__Split_2f802dc(lVar10,0x2d,0,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      uVar9 = System_Int32__TryParse_30fc1b4(*(undefined8 *)(lVar10 + 0x20),&uStack_48,0);
      if ((uVar9 & 1) != 0) {
        if (1 < *(int *)(lVar10 + 0x18)) {
          LevelBuildSystem__ParseFloat_24dc300(0,uVar9,*(undefined8 *)(lVar10 + 0x28));
        }
        LevelBuildSystem__CreateSplinePoint_24dc368(param_1,(int)uStack_48 + -1,uVar1,uVar7);
      }
      uVar2 = *(uint *)(lVar11 + 0x18);
      uVar13 = uStack_48._4_4_ + 1;
      uStack_48 = CONCAT44(uVar13,(int)uStack_48);
    } while ((int)uVar13 < (int)uVar2);
  } while( true );
}

