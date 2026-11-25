/* IL2CPP: HighlightModule$$Tick
void HighlightModule__Tick (HighlightModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightModule$$Tick
   void HighlightModule__Tick (HighlightModule_o* __this, const MethodInfo* method); */

void HighlightModule__Tick_254db10
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined4 param_4,long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 in_x7;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
                    /* try { // try from 0264db34 to 0274db47 has its CatchHandler @ 0264dd08 */
  if ((bRam0000000004f4c059 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2378);
    FUN_021f03f8(PTR_DAT_049c2380);
                    /* try { // try from 0264db64 to 0274db6f has its CatchHandler @ 0264dd04 */
    FUN_021f03f8(PTR_DAT_049c2388);
    FUN_021f03f8(PTR_DAT_049bcf68);
    FUN_021f03f8(PTR_DAT_049c2398);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c059 = 1;
  }
                    /* try { // try from 0264db9c to 0274dbdb has its CatchHandler @ 0264dd24 */
  puVar6 = PTR_DAT_049c2388;
  puVar5 = PTR_DAT_049c2380;
  puVar4 = PTR_DAT_049c2378;
  puVar3 = PTR_DAT_049bcf68;
  puVar2 = PTR_DAT_049b3b98;
  uStack_b0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  if (*(char *)(param_5 + 0x24) != '\0') {
    if (*(long *)(param_5 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0264dbec to 0274dbf7 has its CatchHandler @ 0264dd1c */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_5 + 0x38),&uStack_160,*(undefined8 *)PTR_DAT_049c2398);
                    /* try { // try from 0264dbfc to 0274dc0f has its CatchHandler @ 0264dd18 */
    uStack_b0 = uStack_140;
    puStack_118 = &uStack_d0;
    lStack_c8 = lStack_158;
    uStack_d0 = uStack_160;
    uStack_b8 = uStack_148;
    lStack_c0 = lStack_150;
    uStack_120 = 0;
    lVar12 = lStack_150;
                    /* try { // try from 0264dc20 to 0274dc57 has its CatchHandler @ 0264dd2c */
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_d0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
      lVar13 = *(long *)puVar6;
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x135);
      }
      uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 0264dc60 to 0274dc6b has its CatchHandler @ 0264dd30 */
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
                    /* try { // try from 0264dc6c to 0274dcb7 has its CatchHandler @ 0264d9b0 */
      uVar11 = thunk_FUN_0224e54c(&uStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_160,uVar11,uVar18);
      lVar9 = lStack_150;
      lVar10 = lStack_158;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar10,0,0);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 0264dcb8 to 0274dcc3 has its CatchHandler @ 0264dcfc */
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar8 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar10,0);
        uVar20 = (undefined4)param_3;
        uVar18 = (undefined4)lVar12;
        if ((uVar8 & 1) != 0) {
                    /* try { // try from 0264dcd0 to 0274dcdf has its CatchHandler @ 0264dcf8 */
          lVar12 = UnityEngine_GameObject__get_transform_3c1ca74(lVar10,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 0264dce4 to 0274dce7 has its CatchHandler @ 0264dd20 */
                    /* try { // try from 0264dce8 to 0274dceb has its CatchHandler @ 0264dd30 */
          uVar15 = UnityEngine_Transform__get_position_3c2d540(lVar12,0);
          uVar19 = uVar18;
          uVar21 = uVar20;
                    /* try { // try from 0264dcec to 0274dcef has its CatchHandler @ 0264dd10 */
                    /* try { // try from 0264dcf0 to 0274dcf3 has its CatchHandler @ 0264dd14 */
                    /* try { // try from 0264dcf4 to 0274dcf7 has its CatchHandler @ 0264dd28 */
                    /* catch() { ... } // from try @ 0264dcd0 with catch @ 0264dcf8
                       try { // try from 0264dcf8 to 0274dd47 has its CatchHandler @ 0264d9b0 */
                    /* catch() { ... } // from try @ 0264dcb8 with catch @ 0264dcfc */
                    /* catch() { ... } // from try @ 0264daf8 with catch @ 0264dd00 */
          uVar16 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar12,0);
          uVar22 = uVar21;
                    /* catch() { ... } // from try @ 0264db64 with catch @ 0264dd04 */
                    /* catch() { ... } // from try @ 0264db34 with catch @ 0264dd08 */
                    /* catch() { ... } // from try @ 0264dac4 with catch @ 0264dd0c */
                    /* catch() { ... } // from try @ 0264dcec with catch @ 0264dd10 */
                    /* catch() { ... } // from try @ 0264dab4 with catch @ 0264dd14
                       catch() { ... } // from try @ 0264dcf0 with catch @ 0264dd14 */
                    /* catch() { ... } // from try @ 0264dbfc with catch @ 0264dd18 */
                    /* catch() { ... } // from try @ 0264dbec with catch @ 0264dd1c */
          uVar17 = UnityEngine_Transform__get_lossyScale_3c2f4f0(lVar12,0);
                    /* catch() { ... } // from try @ 0264dce4 with catch @ 0264dd20 */
                    /* catch() { ... } // from try @ 0264db9c with catch @ 0264dd24 */
                    /* catch() { ... } // from try @ 0264db0c with catch @ 0264dd28
                       catch() { ... } // from try @ 0264dcf4 with catch @ 0264dd28 */
                    /* catch() { ... } // from try @ 0264dc20 with catch @ 0264dd2c */
                    /* catch() { ... } // from try @ 0264dc60 with catch @ 0264dd30
                       catch() { ... } // from try @ 0264dce8 with catch @ 0264dd30 */
                    /* try { // try from 0264dd48 to 0274dd5f has its CatchHandler @ 0264ddcc */
          UnityEngine_Matrix4x4__TRS_3c06ad0
                    (&uStack_160,uVar15,uVar18,uVar20,uVar16,uVar19,uVar21,param_4,0);
          lStack_108 = lStack_158;
          uStack_110 = uStack_160;
          uStack_f8 = uStack_148;
          lStack_100 = lStack_150;
                    /* try { // try from 0264dd60 to 0274ddbb has its CatchHandler @ 0264d9b0 */
          uStack_e8 = uStack_138;
          uStack_f0 = uStack_140;
          uStack_d8 = uStack_128;
          uStack_e0 = uStack_130;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          iVar7 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(lVar9,0);
          uVar14 = *(undefined8 *)(param_5 + 0x30);
          uVar11 = *(undefined8 *)(param_5 + 0x10);
          param_4 = uVar16;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
            param_4 = uVar16;
          }
          lStack_198 = lStack_108;
          uStack_1a0 = uStack_110;
          uStack_188 = uStack_f8;
          lStack_190 = lStack_100;
          uStack_178 = uStack_e8;
          uStack_180 = uStack_f0;
          uStack_168 = uStack_d8;
          uStack_170 = uStack_e0;
          lVar12 = lStack_100;
          param_3 = uStack_e0;
                    /* try { // try from 0264ddbc to 0274ddcb has its CatchHandler @ 0264ddcc */
          UnityEngine_Graphics__DrawMesh_3bd952c
                    (lVar9,&uStack_1a0,uVar14,0,uVar11,iVar7 + -1,0,in_x7,uVar17,uVar22);
        }
      }
    }
                    /* catch() { ... } // from try @ 0264dd48 with catch @ 0264ddcc
                       catch() { ... } // from try @ 0264ddbc with catch @ 0264ddcc */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_d0,*(undefined8 *)puVar4);
  }
                    /* try { // try from 0264ddd0 to 0274ddd3 has its CatchHandler @ 0264dddc */
                    /* try { // try from 0264ddd4 to 0274dddf has its CatchHandler @ 0264d9b0 */
                    /* catch() { ... } // from try @ 0264ddd0 with catch @ 0264dddc */
  return;
}

