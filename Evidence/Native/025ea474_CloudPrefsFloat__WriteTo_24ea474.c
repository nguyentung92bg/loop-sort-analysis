/* IL2CPP: CloudPrefsFloat$$WriteTo
void CloudPrefsFloat__WriteTo (CloudPrefsFloat_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$WriteTo
   void CloudPrefsFloat__WriteTo (CloudPrefsFloat_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsFloat__WriteTo_24ea474(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049c6ca0;
  if ((bRam0000000004f4bcbe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcbe = 1;
  }
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerPrefsFloat__HasValue_3f0e08c(&uStack_50,0);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 2) == '\0') {
      if (param_2 == (long *)0x0) goto LAB_025ea734;
      lVar4 = *param_2;
      uVar6 = param_1[3];
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* try { // try from 025ea634 to 026ea63b has its CatchHandler @ 025ea644 */
                    /* try { // try from 025ea63c to 026ea647 has its CatchHandler @ 025ea1d8 */
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_025ea644;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
                    /* try { // try from 025ea5c4 to 026ea5c7 has its CatchHandler @ 025ea5ec */
                    /* try { // try from 025ea5c8 to 026ea5cb has its CatchHandler @ 025ea5e8 */
      puVar3 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,1);
                    /* try { // try from 025ea5cc to 026ea5cf has its CatchHandler @ 025ea5d4 */
LAB_025ea644:
                    /* catch() { ... } // from try @ 025ea634 with catch @ 025ea644 */
                    /* try { // try from 025ea648 to 026ea743 has its CatchHandler @ 025ea648
                       catch() { ... } // from try @ 025ea648 with catch @ 025ea648
                       catch() { ... } // from try @ 025ea764 with catch @ 025ea648
                       catch() { ... } // from try @ 025ea7b0 with catch @ 025ea648
                       catch() { ... } // from try @ 025ea7dc with catch @ 025ea648 */
      (*(code *)*puVar3)(param_2,uVar6,puVar3[1]);
    }
  }
  else {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar7 = (float)PlayerPrefsFloat__get_Value_3f0ddfc(&uStack_50,0);
    puVar1 = PTR_DAT_049c3da0;
    dVar8 = (double)fVar7;
    if (*(char *)(param_1 + 2) != '\0') {
      if (param_2 == (long *)0x0) goto LAB_025ea734;
      lVar4 = *param_2;
      uVar6 = param_1[3];
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* try { // try from 025ea5d0 to 026ea613 has its CatchHandler @ 025ea1d8 */
                    /* catch() { ... } // from try @ 025ea5cc with catch @ 025ea5d4 */
                    /* catch() { ... } // from try @ 025ea42c with catch @ 025ea5d8 */
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_025ea5dc;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025ea5dc:
                    /* catch() { ... } // from try @ 025ea440 with catch @ 025ea5dc */
                    /* catch() { ... } // from try @ 025ea424 with catch @ 025ea5e0 */
                    /* catch() { ... } // from try @ 025ea408 with catch @ 025ea5e4 */
                    /* catch() { ... } // from try @ 025ea5c8 with catch @ 025ea5e8 */
      uVar2 = (*(code *)*puVar3)(param_2,uVar6,puVar3[1]);
                    /* catch() { ... } // from try @ 025ea5c4 with catch @ 025ea5ec */
      if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 025ea3f0 with catch @ 025ea5f0 */
        lVar4 = *param_2;
                    /* catch() { ... } // from try @ 025ea370 with catch @ 025ea5f4 */
        uVar6 = param_1[3];
                    /* catch() { ... } // from try @ 025ea390 with catch @ 025ea5f8 */
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
                    /* try { // try from 025ea614 to 026ea617 has its CatchHandler @ 025ea630 */
            if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 6) * 0x10 + 0x138);
              goto LAB_025ea668;
            }
                    /* try { // try from 025ea618 to 026ea633 has its CatchHandler @ 025ea1d8 */
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,6);
                    /* catch() { ... } // from try @ 025ea614 with catch @ 025ea630 */
LAB_025ea668:
        uVar6 = (*(code *)*puVar3)(param_2,uVar6,puVar3[1]);
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        dVar8 = (double)System_Math__Max_30ff568(dVar8,uVar6,0);
      }
    }
    if (param_2 == (long *)0x0) {
LAB_025ea734:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *param_2;
    uVar6 = param_1[3];
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_025ea708;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,7);
LAB_025ea708:
    (*(code *)*puVar3)(dVar8,param_2,uVar6,puVar3[1]);
  }
  return;
}

