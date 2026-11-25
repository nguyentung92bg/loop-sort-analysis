/* IL2CPP: VoodooSauceBootstrapper$$PopulateVoodooTuneItems
void VoodooSauceBootstrapper__PopulateVoodooTuneItems (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceBootstrapper$$PopulateVoodooTuneItems
   void VoodooSauceBootstrapper__PopulateVoodooTuneItems (const MethodInfo* method); */

void VoodooSauceBootstrapper__PopulateVoodooTuneItems_2254f94(void)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_049b6238;
  if ((bRam0000000004f49bb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6240);
    FUN_021f03f8(PTR_DAT_049b4600);
    FUN_021f03f8(PTR_DAT_049b6248);
    FUN_021f03f8(PTR_DAT_049b6250);
    FUN_021f03f8(PTR_DAT_049b6258);
    FUN_021f03f8(PTR_DAT_049b6260);
    FUN_021f03f8(PTR_DAT_049b6268);
    FUN_021f03f8(PTR_DAT_049b6238);
    bRam0000000004f49bb4 = 1;
  }
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_58 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar10 = Voodoo_Sauce_Internal_VoodooTune_VoodooTuneManager__GetItemsJson_445fb48(0);
  puVar8 = PTR_DAT_049b6268;
  puVar7 = PTR_DAT_049b6260;
  puVar6 = PTR_DAT_049b6258;
  puVar5 = PTR_DAT_049b6250;
  puVar4 = PTR_DAT_049b6240;
  puVar3 = PTR_DAT_049b4600;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (lVar10,&uStack_d0,*(undefined8 *)PTR_DAT_049b6248);
  uStack_70 = uStack_b0;
  uStack_88 = uStack_c8;
  uStack_90 = uStack_d0;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  while( true ) {
    uVar11 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                       (&uStack_90,*(undefined8 *)puVar6);
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_90,*(undefined8 *)puVar5);
      return;
    }
    lVar14 = *(long *)puVar7;
    lVar12 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar10 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar12 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_d0,uVar13,uVar1);
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
                    /* try { // try from 0235514c to 02455157 has its CatchHandler @ 023552ec */
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_a0,&uStack_58,&uStack_a8,*(undefined8 *)puVar8);
    uVar9 = uStack_58;
    uVar13 = uStack_a8;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49c01 == '\0') {
      FUN_021f03f8(puVar4);
                    /* try { // try from 02355184 to 0245518f has its CatchHandler @ 02355300 */
      cRam0000000004f49c01 = '\x01';
    }
    lVar10 = *(long *)puVar4;
                    /* try { // try from 02355190 to 0245528f has its CatchHandler @ 02354f1c */
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar4;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar10 == 0) break;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar10,uVar9,uVar13,*(undefined8 *)puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

