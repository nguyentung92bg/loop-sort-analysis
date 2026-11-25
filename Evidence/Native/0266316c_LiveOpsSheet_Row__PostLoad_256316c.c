/* IL2CPP: LiveOpsSheet.Row$$PostLoad
void LiveOpsSheet_Row__PostLoad (LiveOpsSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$PostLoad
   void LiveOpsSheet_Row__PostLoad (LiveOpsSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void LiveOpsSheet_Row__PostLoad_256316c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar8 = PTR_DAT_049cbaa8;
  puVar7 = PTR_DAT_049cbaa0;
  puVar6 = PTR_DAT_049c7e70;
  puVar5 = PTR_DAT_049c4360;
  puVar3 = PTR_DAT_049b5fe8;
  if ((bRam0000000004f4c13b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fe0);
    FUN_021f03f8(PTR_DAT_049b5fe8);
                    /* try { // try from 026631e0 to 027631f7 has its CatchHandler @ 02663428 */
    FUN_021f03f8(PTR_DAT_049cbab0);
    FUN_021f03f8(PTR_DAT_049cbab8);
    FUN_021f03f8(PTR_DAT_049cbac0);
    FUN_021f03f8(PTR_DAT_049cbac8);
                    /* try { // try from 0266320c to 0276320f has its CatchHandler @ 026633cc */
    FUN_021f03f8(PTR_DAT_049c7e70);
                    /* try { // try from 02663220 to 02763227 has its CatchHandler @ 02663424 */
    FUN_021f03f8(PTR_DAT_049cbaa0);
    FUN_021f03f8(PTR_DAT_049c4360);
    FUN_021f03f8(PTR_DAT_049cbad0);
                    /* try { // try from 02663240 to 02763263 has its CatchHandler @ 0266343c */
    FUN_021f03f8(PTR_DAT_049cbaa8);
    FUN_021f03f8(PTR_DAT_049cbad8);
    FUN_021f03f8(PTR_DAT_049cbae0);
    bRam0000000004f4c13b = 1;
  }
  puVar11 = PTR_DAT_049cbae0;
  puVar10 = PTR_DAT_049cbad8;
  puVar9 = PTR_DAT_049cbad0;
  puVar4 = PTR_DAT_049b5fe0;
                    /* try { // try from 02663270 to 0276327b has its CatchHandler @ 02663420 */
                    /* try { // try from 02663288 to 0276328b has its CatchHandler @ 0266341c */
                    /* try { // try from 0266328c to 0276334f has its CatchHandler @ 02662d4c */
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar7);
  plVar15 = *(long **)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&uStack_b0,uVar12,uVar1);
  uStack_78 = *(undefined8 *)puVar6;
  uStack_70 = 0xffffffffffffffff;
  uStack_68 = (undefined4)uStack_b0;
  uVar12 = System_Enum__ToString_3135e00(&uStack_78,0);
  uVar12 = System_String__Concat_2f72b28(*(undefined8 *)puVar8,uVar12,0);
  lVar16 = *(long *)puVar3;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    FUN_021f0574(lVar16);
    lVar16 = *(long *)puVar3;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  CloudPrefsT___Il2CppFullySharedGenericStructType____ctor_2801f24
            (&uStack_b0,uVar12,**(undefined8 **)(lVar16 + 0xb8),&uStack_100,*(undefined8 *)puVar4);
                    /* try { // try from 02663350 to 0276335b has its CatchHandler @ 026633bc */
  *(undefined8 *)(param_1 + 0x40) = uStack_a8;
  *(ulong *)(param_1 + 0x38) = uStack_b0;
  *(undefined8 *)(param_1 + 0x50) = uStack_98;
  *(undefined8 *)(param_1 + 0x48) = uStack_a0;
  *(undefined8 *)(param_1 + 0x60) = uStack_88;
  *(undefined8 *)(param_1 + 0x58) = uStack_90;
  thunk_FUN_021f190c(param_1 + 0x48,0);
                    /* try { // try from 02663368 to 02763377 has its CatchHandler @ 026633b8 */
  plVar15 = *(long **)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&uStack_100,uVar12,uVar1);
                    /* try { // try from 02663394 to 02763397 has its CatchHandler @ 02663418 */
  uStack_c8 = *(undefined8 *)puVar6;
                    /* try { // try from 02663398 to 0276339b has its CatchHandler @ 02663410 */
                    /* try { // try from 0266339c to 0276339f has its CatchHandler @ 02663440 */
                    /* try { // try from 026633a0 to 027633a3 has its CatchHandler @ 0266340c */
                    /* try { // try from 026633a4 to 027633a7 has its CatchHandler @ 02663404 */
  uStack_c0 = 0xffffffffffffffff;
                    /* try { // try from 026633a8 to 027633ab has its CatchHandler @ 02663400 */
  uStack_b8 = (undefined4)uStack_100;
                    /* try { // try from 026633ac to 027633af has its CatchHandler @ 026633f8 */
  uVar12 = System_Enum__ToString_3135e00(&uStack_c8,0);
                    /* try { // try from 026633b0 to 027633b3 has its CatchHandler @ 026633f4 */
                    /* try { // try from 026633b4 to 027633b7 has its CatchHandler @ 02663430 */
                    /* catch() { ... } // from try @ 02663368 with catch @ 026633b8
                       try { // try from 026633b8 to 0276345b has its CatchHandler @ 02662d4c */
                    /* catch() { ... } // from try @ 02663350 with catch @ 026633bc */
                    /* catch() { ... } // from try @ 02663038 with catch @ 026633c0 */
  uVar12 = System_String__Concat_2f72b28(*(undefined8 *)puVar9,uVar12,0);
                    /* catch() { ... } // from try @ 02662f74 with catch @ 026633c4 */
                    /* catch() { ... } // from try @ 02662f40 with catch @ 026633c8 */
                    /* catch() { ... } // from try @ 0266320c with catch @ 026633cc */
                    /* catch() { ... } // from try @ 0266305c with catch @ 026633d0 */
                    /* catch() { ... } // from try @ 0266303c with catch @ 026633d4 */
                    /* catch() { ... } // from try @ 0266301c with catch @ 026633d8 */
                    /* catch() { ... } // from try @ 02663004 with catch @ 026633dc */
                    /* catch() { ... } // from try @ 02662fd8 with catch @ 026633e0 */
                    /* catch() { ... } // from try @ 02662fc4 with catch @ 026633e4 */
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
                    /* catch() { ... } // from try @ 02662f64 with catch @ 026633e8 */
  uStack_f8 = 0;
  uStack_100 = 0;
                    /* catch() { ... } // from try @ 02662f54 with catch @ 026633ec */
  uStack_150 = 0;
  uStack_148 = 0;
                    /* catch() { ... } // from try @ 02662f14 with catch @ 026633f0 */
  CloudPrefsT___Il2CppFullySharedGenericStructType____ctor_2801f24
            (&uStack_100,uVar12,**(undefined8 **)(*(long *)puVar3 + 0xb8),&uStack_150,
             *(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 026633b0 with catch @ 026633f4 */
                    /* catch() { ... } // from try @ 026633ac with catch @ 026633f8 */
                    /* catch() { ... } // from try @ 02662ed0 with catch @ 026633fc */
                    /* catch() { ... } // from try @ 026633a8 with catch @ 02663400 */
                    /* catch() { ... } // from try @ 026633a4 with catch @ 02663404 */
  *(undefined8 *)(param_1 + 0x70) = uStack_f8;
  *(undefined8 *)(param_1 + 0x68) = uStack_100;
                    /* catch() { ... } // from try @ 02662eb0 with catch @ 02663408 */
  *(undefined8 *)(param_1 + 0x80) = uStack_e8;
  *(undefined8 *)(param_1 + 0x78) = uStack_f0;
                    /* catch() { ... } // from try @ 026633a0 with catch @ 0266340c */
  *(undefined8 *)(param_1 + 0x90) = uStack_d8;
  *(undefined8 *)(param_1 + 0x88) = uStack_e0;
                    /* catch() { ... } // from try @ 02663398 with catch @ 02663410 */
  thunk_FUN_021f190c(param_1 + 0x78,0);
                    /* catch() { ... } // from try @ 02662e68 with catch @ 02663414 */
                    /* catch() { ... } // from try @ 02663394 with catch @ 02663418 */
                    /* catch() { ... } // from try @ 02663288 with catch @ 0266341c */
                    /* catch() { ... } // from try @ 02663270 with catch @ 02663420 */
  plVar15 = *(long **)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0);
                    /* catch() { ... } // from try @ 02663220 with catch @ 02663424 */
                    /* catch() { ... } // from try @ 026631e0 with catch @ 02663428 */
                    /* catch() { ... } // from try @ 02663158 with catch @ 0266342c */
  uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
                    /* catch() { ... } // from try @ 02662fb8 with catch @ 02663430
                       catch() { ... } // from try @ 026633b4 with catch @ 02663430 */
  uVar12 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar15 + 0x80));
                    /* catch() { ... } // from try @ 02662ef8 with catch @ 02663434 */
                    /* catch() { ... } // from try @ 0266307c with catch @ 02663438 */
                    /* catch() { ... } // from try @ 02663240 with catch @ 0266343c */
                    /* catch() { ... } // from try @ 02662e80 with catch @ 02663440
                       catch() { ... } // from try @ 0266339c with catch @ 02663440 */
  func_0x04608620(&uStack_150,uVar12,uVar1);
                    /* catch() { ... } // from try @ 02662e40 with catch @ 02663444 */
  uStack_118 = *(undefined8 *)puVar6;
  uStack_110 = 0xffffffffffffffff;
  uStack_108 = (undefined4)uStack_150;
                    /* try { // try from 0266345c to 02763473 has its CatchHandler @ 026634f4 */
  uVar12 = System_Enum__ToString_3135e00(&uStack_118,0);
  uVar12 = System_String__Concat_2f72b28(*(undefined8 *)puVar10,uVar12,0);
                    /* try { // try from 02663474 to 027634e3 has its CatchHandler @ 02662d4c */
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  CloudPrefsT___Il2CppFullySharedGenericStructType____ctor_2801f24
            (&uStack_150,uVar12,**(undefined8 **)(*(long *)puVar3 + 0xb8),&uStack_190,
             *(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xa0) = uStack_148;
  *(undefined8 *)(param_1 + 0x98) = uStack_150;
  *(undefined8 *)(param_1 + 0xb0) = uStack_138;
  *(undefined8 *)(param_1 + 0xa8) = uStack_140;
  *(undefined8 *)(param_1 + 0xc0) = uStack_128;
  *(undefined8 *)(param_1 + 0xb8) = uStack_130;
  thunk_FUN_021f190c(param_1 + 0xa8,0);
  plVar15 = *(long **)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar15 + 0x80));
                    /* try { // try from 026634e4 to 027634f3 has its CatchHandler @ 026634f4 */
  func_0x04608620(&uStack_190,uVar12,uVar1);
                    /* catch() { ... } // from try @ 0266345c with catch @ 026634f4
                       catch() { ... } // from try @ 026634e4 with catch @ 026634f4 */
  uStack_168 = *(undefined8 *)puVar6;
                    /* try { // try from 026634f8 to 027634fb has its CatchHandler @ 02663504 */
                    /* try { // try from 026634fc to 02763507 has its CatchHandler @ 02662d4c */
                    /* catch() { ... } // from try @ 026634f8 with catch @ 02663504 */
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = (undefined4)uStack_190;
  uVar12 = System_Enum__ToString_3135e00(&uStack_168,0);
  uVar12 = System_String__Concat_2f72b28(*(undefined8 *)puVar11,uVar12,0);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  CloudPrefsInt___ctor_24e98a8(&uStack_190,uVar12,0,0,0);
  *(undefined8 *)(param_1 + 0xd0) = uStack_188;
  *(undefined8 *)(param_1 + 200) = uStack_190;
  *(undefined8 *)(param_1 + 0xe0) = uStack_178;
  *(undefined8 *)(param_1 + 0xd8) = uStack_180;
  thunk_FUN_021f190c(param_1 + 0xd0,0);
  uVar13 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(param_1);
  if ((uVar13 & 1) != 0) {
    lVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cbac8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar16,*(undefined8 *)PTR_DAT_049cbac0);
    plVar15 = (long *)(param_1 + 0xe8);
    *plVar15 = lVar16;
    thunk_FUN_021f190c(plVar15,lVar16);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar16 = System_String__Split_2f802dc(*(long *)(param_1 + 0x28),10,0,0),
       puVar6 = PTR_DAT_049cbab8, puVar5 = PTR_DAT_049cbab0, puVar3 = PTR_DAT_049b3bd0, lVar16 == 0)
       ) {
LAB_026636ac:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar2) {
      uVar17 = 0;
      do {
        if (uVar2 <= uVar17) {
LAB_026636b0:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar14 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        if ((lVar14 == 0) || (lVar14 = System_String__Split_2f802dc(lVar14,0x2d,0,0), lVar14 == 0))
        goto LAB_026636ac;
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_026636b0;
        uVar12 = *(undefined8 *)(lVar14 + 0x20);
        if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                  (uVar12,1,&uStack_b0,*(undefined8 *)puVar5);
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_026636b0;
        uVar13 = uStack_b0 & 0xffffffff;
        lVar14 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar14 + 0x28),0);
        if (*plVar15 == 0) goto LAB_026636ac;
        uStack_b0 = uVar13 | lVar14 << 0x20;
        FUN_02333498(*plVar15,&uStack_b0,*(undefined8 *)puVar6);
        uVar2 = *(uint *)(lVar16 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar2);
    }
  }
  return;
}

