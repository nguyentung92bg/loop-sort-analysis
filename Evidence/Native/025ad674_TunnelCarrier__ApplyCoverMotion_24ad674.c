/* IL2CPP: TunnelCarrier$$ApplyCoverMotion
void TunnelCarrier__ApplyCoverMotion (TunnelCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TunnelCarrier$$ApplyCoverMotion
   void TunnelCarrier__ApplyCoverMotion (TunnelCarrier_o* __this, const MethodInfo* method); */

void TunnelCarrier__ApplyCoverMotion_24ad674(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f4bb46 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6898);
    FUN_021f03f8(PTR_DAT_049c68a8);
    FUN_021f03f8(PTR_DAT_049c68b0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c68c8);
                    /* try { // try from 025ad6e8 to 026ad6f3 has its CatchHandler @ 025ad7dc */
    FUN_021f03f8(PTR_DAT_049c26c0);
    FUN_021f03f8(PTR_DAT_049c20d8);
                    /* try { // try from 025ad6fc to 026ad707 has its CatchHandler @ 025ad7e4 */
    bRam0000000004f4bb46 = 1;
  }
  puVar9 = PTR_DAT_049c68b0;
  puVar8 = PTR_DAT_049c68a8;
  puVar7 = PTR_DAT_049c6898;
  puVar6 = PTR_DAT_049c26c0;
  puVar5 = PTR_DAT_049c20d8;
  puVar4 = PTR_DAT_049b6110;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025ad72c to 026ad73b has its CatchHandler @ 025ad7d4 */
                    /* try { // try from 025ad740 to 026ad767 has its CatchHandler @ 025ad7e0 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0xa8),&uStack_a8,*(undefined8 *)PTR_DAT_049c68c8);
  uVar3 = _UNK_013aa8fc;
  uStack_70 = uStack_98;
  uStack_78 = puStack_a0;
  uStack_80 = uStack_a8;
  uStack_a8 = 0;
  puStack_a0 = &uStack_80;
  while( true ) {
                    /* try { // try from 025ad77c to 026ad78b has its CatchHandler @ 025ad7e4 */
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_80,*(undefined8 *)puVar8);
    if ((uVar10 & 1) == 0) break;
    lVar14 = *(long *)puVar9;
                    /* try { // try from 025ad78c to 026ad797 has its CatchHandler @ 025ad7d8 */
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
                    /* try { // try from 025ad798 to 026ad7ff has its CatchHandler @ 025ad65c */
    lVar12 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad72c with catch @ 025ad7d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad78c with catch @ 025ad7d8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad6e8 with catch @ 025ad7dc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad740 with catch @ 025ad7e0
                        */
    uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad6fc with catch @ 025ad7e4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad77c with catch @ 025ad7e4
                        */
    func_0x04608620(&uStack_68,uVar13,uVar1);
    uVar13 = uStack_68;
                    /* try { // try from 025ad800 to 026ad803 has its CatchHandler @ 025ad80c */
    auVar15 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,0x3e800000,0);
                    /* catch() { ... } // from try @ 025ad800 with catch @ 025ad80c */
                    /* try { // try from 025ad810 to 026ad817 has its CatchHandler @ 025ad820 */
    auVar15 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleX___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26721cc
                        (auVar15._0_8_,auVar15._8_8_,uVar13,*(undefined8 *)puVar6);
                    /* try { // try from 025ad818 to 026ad823 has its CatchHandler @ 025ad65c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ad810 with catch @ 025ad820
                        */
                    /* try { // try from 025ad824 to 026ad8ab has its CatchHandler @ 025ad824
                       catch() { ... } // from try @ 025ad824 with catch @ 025ad824
                       catch() { ... } // from try @ 025ad908 with catch @ 025ad824
                       catch() { ... } // from try @ 025ad984 with catch @ 025ad824 */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__AddTo_24d83f4(auVar15._0_8_,auVar15._8_8_ & 0xffffffff,param_1,0);
    auVar15 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
    auStack_90 = auVar15;
    auVar15 = FUN_024f6e90(uVar3,auStack_90,0,1,*(undefined8 *)puVar5);
    auVar15 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleX___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26721cc
                        (auVar15._0_8_,auVar15._8_8_,uVar13,*(undefined8 *)puVar6);
    Extensions__AddTo_24d83f4(auVar15._0_8_,auVar15._8_8_ & 0xffffffff,param_1,0);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_80,*(undefined8 *)puVar7);
                    /* try { // try from 025ad8ac to 026ad8b7 has its CatchHandler @ 025ad950 */
  return;
}

