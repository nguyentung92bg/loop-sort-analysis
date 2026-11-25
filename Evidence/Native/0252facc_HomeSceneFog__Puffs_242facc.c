/* IL2CPP: HomeSceneFog$$Puffs
UnityEngine_Texture2D_o* HomeSceneFog__Puffs (System_Random_o* random, float tile, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFog$$Puffs
   UnityEngine_Texture2D_o* HomeSceneFog__Puffs (System_Random_o* random, float tile, float height,
   const MethodInfo* method); */

void HomeSceneFog__Puffs_242facc(float param_1,float param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  puVar6 = PTR_DAT_049c3830;
  puVar5 = PTR_DAT_049c3828;
  if ((bRam0000000004f4b7d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33b8);
    FUN_021f03f8(PTR_DAT_049c3838);
    FUN_021f03f8(PTR_DAT_049c3828);
    FUN_021f03f8(PTR_DAT_049c3830);
    FUN_021f03f8(PTR_DAT_049c3840);
    bRam0000000004f4b7d3 = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Object___ctor_3142338(lVar7,0);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar6,5);
  if (lVar7 != 0) {
    plVar12 = (long *)(lVar7 + 0x10);
    *plVar12 = lVar8;
    thunk_FUN_021f190c(plVar12,lVar8);
    puVar4 = PTR_DAT_049c3840;
    puVar6 = PTR_DAT_049c3838;
    puVar5 = PTR_DAT_049c33b8;
    uVar3 = _UNK_013aa734;
    uVar2 = _UNK_013aa6a4;
    lVar8 = *plVar12;
    if (lVar8 != 0) {
      uVar13 = 0;
      do {
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar13) {
          if (cRam0000000004f4a004 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a004 = '\x01';
          }
          puVar4 = PTR_DAT_049b8758;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          dVar19 = (double)(param_1 * 0.25);
          dVar17 = (double)FUN_04608690(dVar19,&dStack_a0);
          if (0.0 <= param_1 * 0.25) {
            if (dVar17 == 0.5) {
              dVar17 = 1.0;
              goto LAB_0252fd08;
            }
            dVar19 = (double)(long)(dVar19 + 0.5);
          }
          else if (dVar17 == -0.5) {
            dVar17 = -1.0;
LAB_0252fd08:
            dVar19 = dStack_a0;
            if (((long)dStack_a0 & 1U) != 0) {
              dVar19 = dStack_a0 + dVar17;
            }
          }
          else {
            dVar19 = (double)(long)(dVar19 + -0.5);
          }
          if (cRam0000000004f4a004 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a004 = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          dVar18 = (double)(param_2 * 0.25);
          dVar17 = (double)FUN_04608690(dVar18,&dStack_a0);
          if (0.0 <= param_2 * 0.25) {
            if (dVar17 != 0.5) {
              dVar17 = (double)(long)(dVar18 + 0.5);
              goto LAB_0252fdd0;
            }
            dVar18 = 1.0;
          }
          else {
            if (dVar17 != -0.5) {
              dVar17 = (double)(long)(dVar18 + -0.5);
              goto LAB_0252fdd0;
            }
                    /* try { // try from 0252fd8c to 0262fe57 has its CatchHandler @ 0252fd8c
                       catch() { ... } // from try @ 0252fd8c with catch @ 0252fd8c
                       catch() { ... } // from try @ 0252ff34 with catch @ 0252fd8c
                       catch() { ... } // from try @ 02530014 with catch @ 0252fd8c
                       catch() { ... } // from try @ 02530094 with catch @ 0252fd8c
                       catch() { ... } // from try @ 02530208 with catch @ 0252fd8c
                       catch() { ... } // from try @ 02530228 with catch @ 0252fd8c
                       catch() { ... } // from try @ 02530270 with catch @ 0252fd8c
                       catch() { ... } // from try @ 025302b0 with catch @ 0252fd8c */
            dVar18 = -1.0;
          }
          dVar17 = dStack_a0;
          if (((long)dStack_a0 & 1U) != 0) {
            dVar17 = dStack_a0 + dVar18;
          }
LAB_0252fdd0:
          iVar10 = (int)dVar19;
          iVar11 = (int)dVar17;
          if (iVar10 < 0x11) {
            iVar10 = 0x10;
          }
          iVar1 = 0x10;
          if (dVar19 != INFINITY) {
            iVar1 = iVar10;
          }
          if (iVar11 < 9) {
            iVar11 = 8;
          }
          iVar10 = 8;
          if (dVar17 != INFINITY) {
            iVar10 = iVar11;
          }
          uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
          System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
                    (uVar9,lVar7,*(undefined8 *)puVar6,0);
          HomeSceneShapes__Make_2428b8c(iVar1,iVar10,uVar9,0);
                    /* try { // try from 0252fe58 to 0262fe5b has its CatchHandler @ 0253004c */
                    /* try { // try from 0252fe60 to 0262fe6b has its CatchHandler @ 02530028 */
          return;
        }
        uVar14 = HomeSceneFxRunner__Rand_2422750(0,0x3f800000,param_3,0);
        uVar15 = HomeSceneFxRunner__Rand_2422750(uVar3,uVar2,param_3,0);
        uVar16 = HomeSceneFxRunner__Rand_2422750(0x3e800000,0x3f000000,param_3,0);
        uStack_90 = HomeSceneFxRunner__Rand_2422750(uVar3,0x3f000000,param_3,0);
        dStack_a0 = 0.0;
        uStack_98 = 0;
        uStack_8c = uVar16;
        uStack_88 = uVar15;
        uStack_84 = uVar14;
        System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a0950c
                  (&dStack_a0,&uStack_84,&uStack_88,&uStack_8c,&uStack_90,*(undefined8 *)puVar4);
        if (*(uint *)(lVar8 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar8 = lVar8 + uVar13 * 0x10;
        uVar13 = uVar13 + 1;
        *(undefined8 *)(lVar8 + 0x28) = uStack_98;
        *(double *)(lVar8 + 0x20) = dStack_a0;
        lVar8 = *plVar12;
      } while (lVar8 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

