/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierAddBlock
void BlockCarrierMeshSystem__OnCarrierAddBlock (BlockCarrierMeshSystem_o* __this, CarrierAddBlockMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024df31c) */
/* WARNING: Removing unreachable block (ram,0x024df384) */
/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierAddBlock
   void BlockCarrierMeshSystem__OnCarrierAddBlock (BlockCarrierMeshSystem_o* __this,
   CarrierAddBlockMessage_o m, const MethodInfo* method); */

void BlockCarrierMeshSystem__OnCarrierAddBlock_23df100(long param_1,long param_2,undefined8 param_3)

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
  ulong extraout_x1;
  long lVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  long lStack_38;
  
  if ((bRam0000000004f4b5c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b5c9 = 1;
  }
  puVar4 = PTR_DAT_049c14d0;
  puVar3 = PTR_DAT_049c14c8;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Carrier__GetBlockCoordinate_2408c2c(param_2,param_3,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_58,*(undefined8 *)puVar3);
    puStack_78 = auStack_50;
                    /* try { // try from 024df1ec to 025df30b has its CatchHandler @ 024df1ec
                       catch() { ... } // from try @ 024df1ec with catch @ 024df1ec
                       catch() { ... } // from try @ 024df61c with catch @ 024df1ec
                       catch() { ... } // from try @ 024df794 with catch @ 024df1ec
                       catch() { ... } // from try @ 024df868 with catch @ 024df1ec
                       catch() { ... } // from try @ 024df8b8 with catch @ 024df1ec
                       catch() { ... } // from try @ 024df95c with catch @ 024df1ec */
    lStack_80 = 0;
    Carrier__GetBlocksInLayer_24093ac(param_2,extraout_x1 & 0xffffffff,lStack_58,0);
    Carrier__GetBlocksInLayer_24093ac(param_2,(int)extraout_x1 + -1,lStack_58,0);
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_58,&uStack_98,*(undefined8 *)PTR_DAT_049c14f0);
    puVar5 = PTR_DAT_049c14e8;
    puVar4 = PTR_DAT_049c14e0;
    puVar3 = PTR_DAT_049c14d8;
    uStack_68 = puStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    puStack_90 = &uStack_70;
    uStack_98 = 0;
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_70,*(undefined8 *)puVar4);
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
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_70,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_38,uVar9,uVar1);
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lStack_38 + 0x158) == '\0') {
        BlockCarrierMeshSystem__SetCarrierBlockMesh_23df438(param_1,param_2);
      }
    }
                    /* try { // try from 024df30c to 025df31b has its CatchHandler @ 024df640 */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)puVar3);
                    /* try { // try from 024df328 to 025df32f has its CatchHandler @ 024df63c */
    uVar6 = Carrier__IsTransferringOrAddingBlocks_23fad2c(param_2,0);
    if ((uVar6 & 1) == 0) {
      BlockCarrierMeshSystem__HandleGroupBlocks_23df8a8(param_1,param_2);
    }
    lVar8 = lStack_80;
                    /* try { // try from 024df340 to 025df353 has its CatchHandler @ 024df638 */
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_78,*(undefined8 *)PTR_DAT_049c14f8);
                    /* try { // try from 024df354 to 025df35b has its CatchHandler @ 024df634 */
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar8);
    }
  }
  return;
}

