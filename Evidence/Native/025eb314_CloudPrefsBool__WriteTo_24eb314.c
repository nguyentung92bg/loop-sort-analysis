/* IL2CPP: CloudPrefsBool$$WriteTo
void CloudPrefsBool__WriteTo (CloudPrefsBool_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$WriteTo
   void CloudPrefsBool__WriteTo (CloudPrefsBool_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsBool__WriteTo_24eb314(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bcce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bcce = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
                    /* try { // try from 025eb36c to 026eb3f3 has its CatchHandler @ 025eb498 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsBool__HasValue_3f0e990(&uStack_40,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 025eb408 to 026eb40f has its CatchHandler @ 025eb494 */
    if (*(char *)(param_1 + 2) == '\0') {
                    /* try { // try from 025eb410 to 026eb447 has its CatchHandler @ 025eb1e4 */
      if (param_2 == (long *)0x0) goto LAB_025eb594;
      lVar6 = *param_2;
      uVar8 = param_1[3];
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* try { // try from 025eb4d0 to 026eb51f has its CatchHandler @ 025eb1e4 */
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_025eb4d4;
          }
          uVar4 = uVar4 - 1;
                    /* try { // try from 025eb448 to 026eb453 has its CatchHandler @ 025eb480 */
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,1);
LAB_025eb4d4:
      (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
    }
  }
  else {
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_40,0);
    puVar1 = PTR_DAT_049c3da0;
    if (*(char *)(param_1 + 2) != '\0') {
      if (param_2 == (long *)0x0) goto LAB_025eb594;
      lVar6 = *param_2;
      uVar8 = param_1[3];
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* try { // try from 025eb460 to 026eb46f has its CatchHandler @ 025eb47c */
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025eb46c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
                    /* try { // try from 025eb3fc to 026eb403 has its CatchHandler @ 025eb4a0 */
      puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025eb46c:
                    /* try { // try from 025eb474 to 026eb477 has its CatchHandler @ 025eb4a0 */
                    /* try { // try from 025eb478 to 026eb47b has its CatchHandler @ 025eb490 */
      uVar4 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
                    /* catch() { ... } // from try @ 025eb460 with catch @ 025eb47c
                       try { // try from 025eb47c to 026eb4b7 has its CatchHandler @ 025eb1e4 */
      if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 025eb448 with catch @ 025eb480 */
        lVar6 = *param_2;
                    /* catch() { ... } // from try @ 025eb258 with catch @ 025eb484 */
        uVar8 = param_1[3];
                    /* catch() { ... } // from try @ 025eb270 with catch @ 025eb488 */
                    /* catch() { ... } // from try @ 025eb25c with catch @ 025eb48c */
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 025eb478 with catch @ 025eb490 */
        if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 025eb408 with catch @ 025eb494 */
                    /* catch() { ... } // from try @ 025eb36c with catch @ 025eb498 */
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 025eb290 with catch @ 025eb49c */
                    /* catch() { ... } // from try @ 025eb3fc with catch @ 025eb4a0
                       catch() { ... } // from try @ 025eb474 with catch @ 025eb4a0 */
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_025eb4f8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
                    /* try { // try from 025eb4b8 to 026eb4cf has its CatchHandler @ 025eb530 */
        puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,8);
LAB_025eb4f8:
        uVar3 = (*(code *)*puVar5)(param_2,uVar8,puVar5[1]);
        uVar2 = uVar2 | uVar3;
      }
    }
    if (param_2 == (long *)0x0) {
LAB_025eb594:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *param_2;
    uVar8 = param_1[3];
                    /* try { // try from 025eb520 to 026eb52f has its CatchHandler @ 025eb530 */
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 025eb4b8 with catch @ 025eb530
                       catch() { ... } // from try @ 025eb520 with catch @ 025eb530 */
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 025eb534 to 026eb537 has its CatchHandler @ 025eb540 */
                    /* try { // try from 025eb538 to 026eb543 has its CatchHandler @ 025eb1e4 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_025eb56c;
        }
                    /* catch() { ... } // from try @ 025eb534 with catch @ 025eb540 */
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,9);
LAB_025eb56c:
    (*(code *)*puVar5)(param_2,uVar8,uVar2 & 1,puVar5[1]);
  }
  return;
}

