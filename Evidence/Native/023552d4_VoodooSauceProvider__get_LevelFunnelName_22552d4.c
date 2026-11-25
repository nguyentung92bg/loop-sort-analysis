/* IL2CPP: VoodooSauceProvider$$get_LevelFunnelName
System_String_o* VoodooSauceProvider__get_LevelFunnelName (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$get_LevelFunnelName
   System_String_o* VoodooSauceProvider__get_LevelFunnelName (VoodooSauceProvider_o* __this, const
   MethodInfo* method); */

long VoodooSauceProvider__get_LevelFunnelName_22552d4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
                    /* catch() { ... } // from try @ 02355290 with catch @ 023552d4 */
  puVar2 = PTR_DAT_049b6270;
                    /* catch() { ... } // from try @ 0235514c with catch @ 023552ec */
  if ((bRam0000000004f49bb6 & 1) == 0) {
                    /* catch() { ... } // from try @ 02355184 with catch @ 02355300 */
    FUN_021f03f8(PTR_DAT_049b6270);
    FUN_021f03f8(PTR_DAT_049b6278);
    bRam0000000004f49bb6 = 1;
  }
                    /* try { // try from 0235531c to 0245532f has its CatchHandler @ 0235531c
                       catch(type#1 @ 00000000) { ... } // from try @ 0235531c with catch @ 0235531c
                       catch(type#1 @ 00000000) { ... } // from try @ 02355360 with catch @ 0235531c
                        */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02355330 to 0245533b has its CatchHandler @ 02355354 */
  if (cRam0000000004f49c02 == '\0') {
                    /* try { // try from 0235533c to 02455343 has its CatchHandler @ 02355350 */
    FUN_021f03f8(PTR_DAT_049b6270);
    cRam0000000004f49c02 = '\x01';
  }
  lVar3 = *(long *)puVar2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0235533c with catch @ 02355350
                        */
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355330 with catch @ 02355354
                        */
    FUN_021f0574();
                    /* try { // try from 02355358 to 0245535f has its CatchHandler @ 02355368 */
    lVar3 = *(long *)puVar2;
  }
                    /* try { // try from 02355360 to 0245536b has its CatchHandler @ 0235531c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355358 with catch @ 02355368
                        */
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
                    /* try { // try from 0235536c to 0245538f has its CatchHandler @ 0235536c
                       catch(type#1 @ 00000000) { ... } // from try @ 0235536c with catch @ 0235536c
                       catch(type#1 @ 00000000) { ... } // from try @ 023553d4 with catch @ 0235536c
                        */
  if (cRam0000000004f49c03 == '\0') {
    FUN_021f03f8(puVar2);
    lVar3 = *(long *)puVar2;
    cRam0000000004f49c03 = '\x01';
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
                    /* try { // try from 02355390 to 0245539f has its CatchHandler @ 023553c8 */
    lVar3 = *(long *)puVar2;
  }
                    /* try { // try from 023553a4 to 024553ab has its CatchHandler @ 023553c4 */
  uVar4 = System_String__op_Equality_2f7b7fc
                    (uVar9,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),0);
  lVar3 = *(long *)(param_1 + 0x48);
  if ((uVar4 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02355390 with catch @ 023553c8
                        */
    if (lVar3 != 0) {
                    /* try { // try from 023553cc to 024553d3 has its CatchHandler @ 023553dc */
      lVar3 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 023553d4 to 024553df has its CatchHandler @ 0235536c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023553cc with catch @ 023553dc
                        */
        FUN_021f0574();
      }
                    /* try { // try from 023553e0 to 024553f3 has its CatchHandler @ 023553e0
                       catch() { ... } // from try @ 023553e0 with catch @ 023553e0
                       catch() { ... } // from try @ 02355404 with catch @ 023553e0 */
      if (cRam0000000004f49c02 == '\0') {
        FUN_021f03f8(PTR_DAT_049b6270);
                    /* try { // try from 023553f4 to 02455403 has its CatchHandler @ 02355420 */
        cRam0000000004f49c02 = '\x01';
      }
      lVar5 = *(long *)puVar2;
                    /* try { // try from 02355404 to 02455433 has its CatchHandler @ 023553e0 */
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
                    /* catch() { ... } // from try @ 023553f4 with catch @ 02355420 */
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      lVar6 = *(long *)PTR_DAT_049b6278;
      lVar5 = lVar6;
      lVar7 = lVar8;
      if (((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) && (lVar5 = lVar3, lVar6 != 0)) &&
          ((*(int *)(lVar6 + 0x10) != 0 && (lVar7 = lVar6, lVar8 != 0)))) &&
         (*(int *)(lVar8 + 0x10) != 0)) {
        lVar5 = thunk_FUN_0222a544(*(int *)(lVar6 + 0x10) + *(int *)(lVar3 + 0x10) +
                                   *(int *)(lVar8 + 0x10),lVar6,lVar8,0);
        System_String__FillStringChecked_2f7d2e8(lVar5,0,lVar3);
        System_String__FillStringChecked_2f7d2e8(lVar5,*(undefined4 *)(lVar3 + 0x10),lVar6);
        System_String__FillStringChecked_2f7d2e8
                  (lVar5,*(int *)(lVar6 + 0x10) + *(int *)(lVar3 + 0x10),lVar8);
        return lVar5;
      }
      if ((lVar5 == 0) || (iVar1 = *(int *)(lVar5 + 0x10), iVar1 == 0)) {
        if ((lVar7 == 0) || (lVar5 = lVar7, *(int *)(lVar7 + 0x10) == 0)) {
          lVar5 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
        }
      }
      else if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) != 0)) {
        lVar3 = thunk_FUN_0222a544(*(int *)(lVar7 + 0x10) + iVar1,lVar7,lVar8,0);
        System_String__FillStringChecked_2f7d2e8(lVar3,0,lVar5);
        System_String__FillStringChecked_2f7d2e8(lVar3,iVar1,lVar7);
        lVar5 = lVar3;
      }
      return lVar5;
    }
  }
  else if (lVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 023553a4 with catch @ 023553c4
                        */
    return *(long *)(lVar3 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

