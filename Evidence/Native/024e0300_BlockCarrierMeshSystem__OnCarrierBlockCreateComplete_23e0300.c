/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierBlockCreateComplete
void BlockCarrierMeshSystem__OnCarrierBlockCreateComplete (BlockCarrierMeshSystem_o* __this, CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierBlockCreateComplete
   void BlockCarrierMeshSystem__OnCarrierBlockCreateComplete (BlockCarrierMeshSystem_o* __this,
   CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method); */

void BlockCarrierMeshSystem__OnCarrierBlockCreateComplete_23e0300(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  long *aplStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4b5cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b5cb = 1;
  }
  lVar12 = *(long *)(param_1 + 0x78);
  uStack_a0 = 0;
  uStack_98 = (undefined1 *)0x0;
  plStack_90 = (long *)0x0;
  uStack_c0 = 0;
  puStack_b8 = (undefined1 *)0x0;
  plStack_b0 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (lVar12 != 0) {
    uStack_80 = 0;
    puStack_78 = (undefined1 *)0x0;
    aplStack_70[0] = (long *)0x0;
    lVar13 = *(long *)PTR_DAT_049c1590;
    puVar8 = (undefined8 *)
             thunk_FUN_0224e54c(lVar12,*(long *)(**(long **)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x80
                                                ) + 0x60);
    uStack_60 = *puVar8;
    uStack_58 = 0;
    thunk_FUN_021f190c(&uStack_60);
    uStack_58 = 0;
    puStack_78 = (undefined1 *)0x0;
    uStack_80 = uStack_60;
    thunk_FUN_021f190c(&uStack_80,0);
    aplStack_70[0] =
         (long *)thunk_FUN_0224e54c(lVar12,*(long *)(**(long **)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x80) + 0x80);
    aplStack_70[0] = (long *)*aplStack_70[0];
    thunk_FUN_021f190c(aplStack_70);
    uStack_98 = puStack_78;
    uStack_a0 = uStack_80;
    plStack_90 = aplStack_70[0];
    uVar9 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0);
    puVar7 = PTR_DAT_049c14f0;
    puVar6 = PTR_DAT_049c14e8;
    puVar5 = PTR_DAT_049c14e0;
    puVar4 = PTR_DAT_049c14d8;
    puVar3 = uStack_98;
    while( true ) {
      if ((uVar9 & 1) == 0) {
        return;
      }
      uStack_98._4_4_ = (int)((ulong)puVar3 >> 0x20);
      lVar12 = *(long *)((long)plStack_90 +
                        (ulong)*(uint *)(*plStack_90 + 0x104) * (long)uStack_98._4_4_ + 0x20);
      uStack_98 = puVar3;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x1e0) == 0)) break;
                    /* try { // try from 024e04a4 to 025e07a3 has its CatchHandler @ 024e04a4
                       catch() { ... } // from try @ 024e04a4 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e0cb4 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e0cfc with catch @ 024e04a4
                       catch() { ... } // from try @ 024e135c with catch @ 024e04a4
                       catch() { ... } // from try @ 024e1410 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e1438 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e1454 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e14f8 with catch @ 024e04a4
                       catch() { ... } // from try @ 024e15b4 with catch @ 024e04a4 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(lVar12 + 0x1e0),&uStack_80,*(undefined8 *)puVar7);
      uStack_c0 = uStack_80;
      uStack_80 = 0;
      puStack_b8 = puStack_78;
      plStack_b0 = aplStack_70[0];
      puStack_78 = (undefined1 *)&uStack_c0;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_c0,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
        lVar14 = *(long *)puVar6;
        lVar10 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar13 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar10 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&uStack_c0,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_60,uVar11,uVar1);
        BlockCarrierMeshSystem__SetCarrierBlockMesh_23df438(param_1,lVar12,uStack_60);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_c0,*(undefined8 *)puVar4);
      BlockCarrierMeshSystem__HandleGroupBlocks_23df8a8(param_1,lVar12);
      uVar9 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0);
      puVar3 = uStack_98;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

