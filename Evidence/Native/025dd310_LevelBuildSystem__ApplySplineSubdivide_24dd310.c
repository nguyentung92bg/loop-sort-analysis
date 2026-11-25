/* IL2CPP: LevelBuildSystem$$ApplySplineSubdivide
void LevelBuildSystem__ApplySplineSubdivide (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$ApplySplineSubdivide
   void LevelBuildSystem__ApplySplineSubdivide (LevelBuildSystem_o* __this, const MethodInfo*
   method); */

void LevelBuildSystem__ApplySplineSubdivide_24dd310(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auStack_1bc [76];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  puVar2 = PTR_DAT_049be5d0;
  puVar1 = PTR_DAT_049be5b0;
  if ((bRam0000000004f4bc54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c78c0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049be590);
    FUN_021f03f8(PTR_DAT_049be5a0);
    FUN_021f03f8(PTR_DAT_049be5b0);
    FUN_021f03f8(PTR_DAT_049be5d0);
    bRam0000000004f4bc54 = 1;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar4,*(undefined8 *)puVar1);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar5 = Dreamteck_Splines_SplineComputer__GetPoints_2345f98(*(long *)(param_1 + 0x38),0,0),
     puVar3 = PTR_DAT_049c78c0, puVar2 = PTR_DAT_049be590, puVar1 = PTR_DAT_049b5480, lVar5 != 0)) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar7 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      puVar8 = (undefined8 *)(lVar5 + 0x34);
      do {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uStack_168 = puVar8[1];
        uStack_170 = *puVar8;
        uVar11 = *(undefined8 *)((long)puVar8 + -0xc);
        fVar10 = *(float *)((long)puVar8 + -4);
        uStack_158 = puVar8[3];
        uStack_160 = puVar8[2];
        uStack_148 = puVar8[5];
        uStack_150 = puVar8[4];
        uStack_140 = puVar8[6];
        if (lVar4 == 0) goto LAB_025dd590;
        uStack_120 = *(undefined8 *)((long)puVar8 + -0x14);
        uStack_118 = uVar11;
        fStack_110 = fVar10;
        uStack_10c = uStack_170;
        uStack_104 = uStack_168;
        uStack_fc = uStack_160;
        uStack_f4 = uStack_158;
        uStack_ec = uStack_150;
        uStack_e4 = uStack_148;
        uStack_dc = uStack_140;
        FUN_02333498(lVar4,&uStack_120,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_025dd590;
        if ((*(char *)(*(long *)(param_1 + 0x90) + 0x24) == '\0') &&
           (uVar7 == *(int *)(lVar5 + 0x18) - 1)) goto LAB_025dd538;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar7 = uVar7 + 1;
        Extensions__GetWrapped___Il2CppFullySharedGenericType__25f014c
                  (lVar5,uVar7 & 0xffffffff,&uStack_170,*(undefined8 *)puVar3);
        fVar9 = ((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uStack_168 >> 0x20)) * 0.5;
        Dreamteck_Splines_SplinePoint___ctor_2368f48
                  (CONCAT44(fVar9,((float)uVar11 + (float)uStack_168) * 0.5),fVar9,
                   (fVar10 + (float)uStack_160) * 0.5,&uStack_d0,0);
        func_0x04608620(auStack_1bc,&uStack_d0,0x4c);
        FUN_02333498(lVar4,auStack_1bc,*(undefined8 *)puVar2);
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        puVar8 = (undefined8 *)((long)puVar8 + 0x4c);
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if (lVar4 != 0) {
LAB_025dd538:
      lVar5 = *(long *)(param_1 + 0x38);
      uVar11 = System_Collections_Generic_List___Il2CppFullySharedGenericType___ToArray_28d0b00
                         (lVar4,*(undefined8 *)PTR_DAT_049be5a0);
      if (lVar5 != 0) {
        Dreamteck_Splines_SplineComputer__SetPoints_2346174(lVar5,uVar11,0,0);
        return;
      }
    }
  }
LAB_025dd590:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

