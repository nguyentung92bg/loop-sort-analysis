/* IL2CPP: SurpriseBlockSystem$$HandleEnableTransferExit
void SurpriseBlockSystem__HandleEnableTransferExit (SurpriseBlockSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f44b4) */
/* IL2CPP: SurpriseBlockSystem$$HandleEnableTransferExit
   void SurpriseBlockSystem__HandleEnableTransferExit (SurpriseBlockSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

void SurpriseBlockSystem__HandleEnableTransferExit_23f4274(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  puVar4 = PTR_DAT_049c14d0;
                    /* try { // try from 024f427c to 025f4377 has its CatchHandler @ 024f427c
                       catch() { ... } // from try @ 024f427c with catch @ 024f427c
                       catch() { ... } // from try @ 024f43e4 with catch @ 024f427c
                       catch() { ... } // from try @ 024f4450 with catch @ 024f427c
                       catch() { ... } // from try @ 024f4478 with catch @ 024f427c
                       catch() { ... } // from try @ 024f44a4 with catch @ 024f427c
                       catch() { ... } // from try @ 024f44c8 with catch @ 024f427c */
  if ((bRam0000000004f4b657 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b657 = 1;
  }
  puVar3 = PTR_DAT_049c14c8;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_58,*(undefined8 *)puVar3);
  puStack_88 = auStack_50;
  lStack_90 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024f44a4 to 025f44bf has its CatchHandler @ 024f427c */
    FUN_021f06a0();
  }
  Carrier__FindBlocksWithSameColor_24096a4(param_2,lStack_58,0);
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_58,&uStack_a8,*(undefined8 *)PTR_DAT_049c14f0);
  puVar5 = PTR_DAT_049c14e8;
  puVar3 = PTR_DAT_049c14e0;
  puVar4 = PTR_DAT_049c14d8;
                    /* try { // try from 024f4378 to 025f437f has its CatchHandler @ 024f4480 */
  uStack_68 = puStack_a0;
  uStack_70 = uStack_a8;
  uStack_60 = uStack_98;
                    /* try { // try from 024f4398 to 025f43e3 has its CatchHandler @ 024f4484 */
  puStack_a0 = &uStack_70;
  uStack_a8 = 0;
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) break;
    lVar10 = *(long *)puVar5;
    lVar7 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
                    /* try { // try from 024f43e4 to 025f4427 has its CatchHandler @ 024f427c */
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_70,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar9,uVar1);
    lVar8 = lStack_38;
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024f44a0 to 025f44a3 has its CatchHandler @ 024f44bc */
      FUN_021f06a0();
    }
                    /* try { // try from 024f4428 to 025f444f has its CatchHandler @ 024f4484 */
    uVar6 = Block__TryGetFeature_23dc908(lStack_38,0x20,&uStack_80);
    if ((uVar6 & 1) == 0) break;
    Block__EnableTransferExit_23dcf0c(lVar8,param_1);
                    /* try { // try from 024f4450 to 025f4473 has its CatchHandler @ 024f427c */
    Carrier__DisableTransferEnter_2408aa4(param_2,param_1,0);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_70,*(undefined8 *)puVar4);
  lVar8 = lStack_90;
                    /* try { // try from 024f4474 to 025f4477 has its CatchHandler @ 024f447c */
                    /* try { // try from 024f4478 to 025f449f has its CatchHandler @ 024f427c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024f4474 with catch @ 024f447c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024f4378 with catch @ 024f4480
                        */
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (puStack_88,*(undefined8 *)PTR_DAT_049c14f8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024f4398 with catch @ 024f4484
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 024f4428 with catch @ 024f4484
                        */
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar8);
}

