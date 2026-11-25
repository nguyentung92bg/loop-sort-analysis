/* IL2CPP: WinSystem$$RemainingCarrierCount
int32_t WinSystem__RemainingCarrierCount (WinSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinSystem$$RemainingCarrierCount
   int32_t WinSystem__RemainingCarrierCount (WinSystem_o* __this, const MethodInfo* method); */

int WinSystem__RemainingCarrierCount_24e22b0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *aplStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_049c1700;
                    /* catch() { ... } // from try @ 025e22ac with catch @ 025e22b8 */
                    /* try { // try from 025e22c0 to 026e22c7 has its CatchHandler @ 025e22fc */
                    /* try { // try from 025e22c8 to 026e22df has its CatchHandler @ 025e1dcc */
  if ((bRam0000000004f4bc71 & 1) == 0) {
                    /* try { // try from 025e22e0 to 026e22e3 has its CatchHandler @ 025e22e8 */
    FUN_021f03f8(PTR_DAT_049c1578);
                    /* catch() { ... } // from try @ 025e22e0 with catch @ 025e22e8 */
                    /* try { // try from 025e22ec to 026e22f3 has its CatchHandler @ 025e22fc */
    FUN_021f03f8(PTR_DAT_049c1a08);
                    /* try { // try from 025e22f4 to 026e22ff has its CatchHandler @ 025e1dcc */
                    /* catch() { ... } // from try @ 025e22c0 with catch @ 025e22fc
                       catch() { ... } // from try @ 025e22ec with catch @ 025e22fc */
    FUN_021f03f8(PTR_DAT_049c1708);
    FUN_021f03f8(PTR_DAT_049c1700);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1a10);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c1a18);
    FUN_021f03f8(PTR_DAT_049c7a40);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c28e0);
    FUN_021f03f8(PTR_DAT_049c1720);
    FUN_021f03f8(PTR_DAT_049c1a20);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4bc71 = 1;
  }
  puVar3 = PTR_DAT_049c1708;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  plStack_90 = (long *)0x0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plStack_b0 = (long *)0x0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c1720;
  auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_88,*(undefined8 *)puVar3);
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_70 = 0;
  uStack_68 = 0;
  aplStack_60[0] = (long *)0x0;
  lVar11 = *(long *)PTR_DAT_049c1590;
  puVar7 = (undefined8 *)
           thunk_FUN_0224e54c(lVar9,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80) +
                                    0x60);
  uStack_50 = *puVar7;
  uStack_48 = 0;
  thunk_FUN_021f190c(&uStack_50);
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = uStack_50;
  thunk_FUN_021f190c(&uStack_70,0);
  puVar7 = (undefined8 *)
           thunk_FUN_0224e54c(lVar9,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80) +
                                    0x80);
  aplStack_60[0] = (long *)*puVar7;
  thunk_FUN_021f190c(aplStack_60);
  puVar6 = PTR_DAT_049c7a40;
  puVar5 = PTR_DAT_049c1a20;
  puVar3 = PTR_DAT_049b5480;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  plStack_90 = aplStack_60[0];
  while (uVar8 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0),
        (uVar8 & 1) != 0) {
    lVar9 = *(long *)((long)plStack_90 +
                     (ulong)*(uint *)(*plStack_90 + 0x104) * (long)uStack_98._4_4_ + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = Carrier__IsEmpty_23faccc(lVar9,0);
    lVar11 = lStack_88;
    if (((uVar8 & 1) == 0) && (*(char *)(lVar9 + 0x1b1) == '\0')) {
      uVar10 = *(undefined8 *)(lVar9 + 0x1e0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__AddRange___Il2CppFullySharedGenericType__25ef224
                (lVar11,uVar10,*(undefined8 *)puVar6);
    }
  }
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = *(long *)puVar5;
  uStack_70 = 0;
  uStack_68 = 0;
  aplStack_60[0] = (long *)0x0;
  puVar7 = (undefined8 *)
           thunk_FUN_0224e54c(lVar9,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80) +
                                    0x60);
  uStack_50 = *puVar7;
  uStack_48 = 0;
  thunk_FUN_021f190c(&uStack_50);
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = uStack_50;
  thunk_FUN_021f190c(&uStack_70,0);
  puVar7 = (undefined8 *)
           thunk_FUN_0224e54c(lVar9,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x80) +
                                    0x80);
  aplStack_60[0] = (long *)*puVar7;
  thunk_FUN_021f190c(aplStack_60);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  plStack_b0 = aplStack_60[0];
  while (uVar8 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_c0,0),
        (uVar8 & 1) != 0) {
    lVar9 = *(long *)((long)plStack_b0 +
                     (ulong)*(uint *)(*plStack_b0 + 0x104) * (long)uStack_b8._4_4_ + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = ConveyorSlot__HasElement_24b100c(lVar9,0);
    lVar11 = lStack_88;
    if ((uVar8 & 1) != 0) {
      uVar10 = *(undefined8 *)(lVar9 + 0xf8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__AddRange___Il2CppFullySharedGenericType__25ef224
                (lVar11,uVar10,*(undefined8 *)puVar6);
    }
  }
  if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x15c);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(lStack_88 + 0x20) / iVar1;
    }
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (auStack_80,*(undefined8 *)puVar4);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

