/* IL2CPP: VoodooSauceProvider$$GetUserInfo
AnalyticsUserInfo_o VoodooSauceProvider__GetUserInfo (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$GetUserInfo
   AnalyticsUserInfo_o VoodooSauceProvider__GetUserInfo (VoodooSauceProvider_o* __this, const
   MethodInfo* method); */

void VoodooSauceProvider__GetUserInfo_2257a40(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long alStack_40 [2];
  long *plStack_28;
  
  puVar1 = PTR_DAT_049b6458;
                    /* try { // try from 02357a48 to 02457a93 has its CatchHandler @ 02357940 */
  if ((bRam0000000004f49bca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5578);
                    /* catch() { ... } // from try @ 02357a3c with catch @ 02357a78 */
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b6458);
    bRam0000000004f49bca = 1;
  }
                    /* try { // try from 02357a94 to 02457b07 has its CatchHandler @ 02357a94
                       catch() { ... } // from try @ 02357a94 with catch @ 02357a94
                       catch() { ... } // from try @ 02357b14 with catch @ 02357a94 */
  plStack_28 = (long *)0x0;
  alStack_40[0] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar8 = &lStack_48;
  plVar3 = (long *)Voodoo_Sauce_Core_VoodooSauceCore__GetPrivacy_440d104(0,0);
  alStack_40[0] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_60 = Voodoo_Sauce_Internal_Analytics_AnalyticsUserIdHelper__GetUserId_44af978(0);
  thunk_FUN_021f190c(&uStack_60,uStack_60);
  if (plVar3 == (long *)0x0) {
    uStack_58 = 0;
                    /* catch() { ... } // from try @ 02357b08 with catch @ 02357b44 */
    thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
    uStack_50 = 0;
  }
  else {
                    /* try { // try from 02357b08 to 02457b13 has its CatchHandler @ 02357b44 */
    uStack_58 = (**(code **)(*plVar3 + 0x1c8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x1d0));
                    /* try { // try from 02357b14 to 02457b5f has its CatchHandler @ 02357a94 */
    thunk_FUN_021f190c((ulong)&uStack_60 | 8,uStack_58);
    uStack_50 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
  }
  thunk_FUN_021f190c(&uStack_50);
                    /* try { // try from 02357b60 to 02457b83 has its CatchHandler @ 02357b60
                       catch() { ... } // from try @ 02357b60 with catch @ 02357b60
                       catch() { ... } // from try @ 02357b8c with catch @ 02357b60 */
  uVar4 = NakamaServices__TryGetApi_2243784(&plStack_28);
  plVar2 = plStack_28;
  puVar1 = PTR_DAT_049b54a0;
  plVar3 = plVar8;
  if ((uVar4 & 1) == 0) {
    plVar3 = (long *)0x18;
  }
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b54a0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf3 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54a0);
      cRam0000000004f49bf3 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    if ((**(long **)(lVar6 + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x20), lVar6 == 0)) {
      plVar8 = &lStack_48;
      lVar6 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
  }
  else {
    if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plStack_28;
                    /* try { // try from 02357b84 to 02457b8b has its CatchHandler @ 02357bb0 */
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 02357b8c to 02457bcb has its CatchHandler @ 02357b60 */
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_02357c64;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 02357b84 with catch @ 02357bb0 */
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plStack_28,*(long *)PTR_DAT_049b5578,5);
LAB_02357c64:
    lVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
                    /* catch() { ... } // from try @ 02357cbc with catch @ 02357c74 */
    plVar8 = plVar3;
  }
  *plVar8 = lVar6;
  thunk_FUN_021f190c(plVar8);
  if (cRam0000000004f49bff == '\0') {
    FUN_021f03f8(PTR_DAT_049b5ea8);
    cRam0000000004f49bff = '\x01';
  }
                    /* try { // try from 02357cb0 to 02457cbb has its CatchHandler @ 02357cdc */
                    /* try { // try from 02357cbc to 02457d07 has its CatchHandler @ 02357c74 */
  if ((**(long **)(*(long *)PTR_DAT_049b5ea8 + 0xb8) == 0) ||
     (alStack_40[0] = *(long *)(**(long **)(*(long *)PTR_DAT_049b5ea8 + 0xb8) + 0x18),
     alStack_40[0] == 0)) {
                    /* catch() { ... } // from try @ 02357cb0 with catch @ 02357cdc */
    alStack_40[0] = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  thunk_FUN_021f190c(alStack_40);
  param_1[4] = alStack_40[0];
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = lStack_48;
  param_1[2] = uStack_50;
  return;
}

