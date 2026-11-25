/* IL2CPP: VoodooAdjustProvider$$SpentCoins
void VoodooAdjustProvider__SpentCoins (int32_t coins, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02351d90) */
/* IL2CPP: VoodooAdjustProvider$$SpentCoins
   void VoodooAdjustProvider__SpentCoins (int32_t coins, const MethodInfo* method); */

void VoodooAdjustProvider__SpentCoins_2251adc(int param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_28;
  
                    /* try { // try from 02351adc to 02451ae3 has its CatchHandler @ 02351b08 */
                    /* try { // try from 02351ae4 to 02451b23 has its CatchHandler @ 02351ab8 */
  if ((bRam0000000004f49b9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5468);
                    /* catch() { ... } // from try @ 02351adc with catch @ 02351b08 */
    FUN_021f03f8(PTR_DAT_049b5458);
    FUN_021f03f8(PTR_DAT_049b3ca0);
    FUN_021f03f8(PTR_DAT_049b3ca8);
    FUN_021f03f8(PTR_DAT_049b3cb0);
    FUN_021f03f8(PTR_DAT_049b3cd0);
    FUN_021f03f8(PTR_DAT_049b5498);
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b9a = 1;
  }
  puVar5 = PTR_DAT_049b5f70;
  puVar3 = PTR_DAT_049b5458;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  if (0 < param_1) {
    if (*(int *)(*(long *)PTR_DAT_049b5f70 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar4 = PTR_DAT_049b5468;
    lVar7 = VoodooAdjustProvider__GetAdjustEvents_2251388();
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02351bb4 to 02451bdf has its CatchHandler @ 02351bb4
                       catch() { ... } // from try @ 02351bb4 with catch @ 02351bb4
                       catch() { ... } // from try @ 02351bec with catch @ 02351bb4 */
      FUN_021f0574(*(long *)puVar3);
    }
    auStack_40 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_48,*(undefined8 *)puVar4);
    lVar8 = *(long *)puVar5;
    puStack_68 = auStack_40;
    lStack_70 = 0;
                    /* try { // try from 02351be0 to 02451beb has its CatchHandler @ 02351c00 */
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar5;
    }
                    /* try { // try from 02351bec to 02451c13 has its CatchHandler @ 02351bb4 */
    lVar8 = *(long *)(lVar8 + 0xb8);
    iVar6 = CloudPrefsInt__get_Value_24e99c0(lVar8 + 8,0);
                    /* catch() { ... } // from try @ 02351be0 with catch @ 02351c00 */
    CloudPrefsInt__set_Value_24e9a2c(lVar8 + 8,iVar6 + param_1,0);
    lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
    uStack_88 = *(undefined8 *)(lVar8 + 0x10);
    uStack_90 = *(undefined8 *)(lVar8 + 8);
    uStack_78 = *(undefined8 *)(lVar8 + 0x20);
    uStack_80 = *(undefined8 *)(lVar8 + 0x18);
    uVar9 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_90,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar9,uVar9 & 0xffffffff);
    }
    uVar9 = AdjustEventSheet__TryGetSpentCoinsTokens_2557370(lVar7,uVar9 & 0xffffffff,lStack_48,0);
    if ((uVar9 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_48,&uStack_a8,*(undefined8 *)PTR_DAT_049b3cd0);
      puVar4 = PTR_DAT_049b3cb0;
      puVar3 = PTR_DAT_049b3ca8;
      puStack_58 = puStack_a0;
      uStack_60 = uStack_a8;
                    /* try { // try from 02351c80 to 02451ca7 has its CatchHandler @ 02351c80
                       catch() { ... } // from try @ 02351c80 with catch @ 02351c80
                       catch() { ... } // from try @ 02351cb4 with catch @ 02351c80 */
      uStack_50 = uStack_98;
      uStack_a8 = 0;
      puStack_a0 = &uStack_60;
      while( true ) {
        uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar9 & 1) == 0) break;
        lVar11 = *(long *)puVar4;
        lVar8 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 02351ca8 to 02451cb3 has its CatchHandler @ 02351cc8 */
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar7 = lVar8;
        if ((uVar2 & 1) == 0) {
                    /* try { // try from 02351cb4 to 02451cdb has its CatchHandler @ 02351c80 */
          lVar7 = FUN_02229718();
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
                    /* catch() { ... } // from try @ 02351ca8 with catch @ 02351cc8 */
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_28,uVar10,uVar1);
        uVar10 = uStack_28;
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          FUN_021f0574();
        }
        VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar10);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)PTR_DAT_049b3ca0);
      lVar7 = lStack_70;
    }
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_68,*(undefined8 *)PTR_DAT_049b5498);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar7);
    }
  }
  return;
}

