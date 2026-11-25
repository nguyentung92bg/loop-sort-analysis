/* IL2CPP: CloudPrefsString$$ReadFrom
void CloudPrefsString__ReadFrom (CloudPrefsString_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$ReadFrom
   void CloudPrefsString__ReadFrom (CloudPrefsString_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsString__ReadFrom_24eae38(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 025eae38 to 026eae43 has its CatchHandler @ 025eaf24 */
  if ((bRam0000000004f4bcc7 & 1) == 0) {
                    /* try { // try from 025eae64 to 026eae67 has its CatchHandler @ 025eaf18 */
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f4bcc7 = 1;
  }
  puVar1 = PTR_DAT_049c3da0;
  uStack_40 = 0;
  uStack_38 = 0;
                    /* try { // try from 025eae80 to 026eae93 has its CatchHandler @ 025eaf20 */
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *param_2;
  uVar6 = param_1[2];
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 025eae98 to 026eaeab has its CatchHandler @ 025eaf1c */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c3da0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_025eaedc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 025eaec4 to 026eaec7 has its CatchHandler @ 025eb050 */
  puVar2 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025eaedc:
                    /* try { // try from 025eaedc to 026eaee3 has its CatchHandler @ 025eaf34 */
                    /* try { // try from 025eaee8 to 026eaeef has its CatchHandler @ 025eaf30 */
  uVar4 = (*(code *)*puVar2)(param_2,uVar6,puVar2[1]);
  if ((uVar4 & 1) != 0) {
    lVar3 = *param_2;
                    /* try { // try from 025eaef4 to 026eaef7 has its CatchHandler @ 025eaf40 */
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    uVar6 = param_1[2];
                    /* try { // try from 025eaefc to 026eaf03 has its CatchHandler @ 025eaf2c */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 025eaf08 to 026eaf0b has its CatchHandler @ 025eaf3c */
    if (uVar4 != 0) {
                    /* try { // try from 025eaf10 to 026eaf13 has its CatchHandler @ 025eaf38 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 025eaf14 to 026eaf63 has its CatchHandler @ 025eaa84 */
                    /* catch() { ... } // from try @ 025eae64 with catch @ 025eaf18 */
                    /* catch() { ... } // from try @ 025eae98 with catch @ 025eaf1c */
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 025eadf8 with catch @ 025eaf3c
                       catch() { ... } // from try @ 025eaf08 with catch @ 025eaf3c */
                    /* catch() { ... } // from try @ 025eadc0 with catch @ 025eaf40
                       catch() { ... } // from try @ 025eaef4 with catch @ 025eaf40 */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_025eaf4c;
        }
                    /* catch() { ... } // from try @ 025eae80 with catch @ 025eaf20 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 025eae38 with catch @ 025eaf24 */
        piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 025eae10 with catch @ 025eaf28 */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 025eaefc with catch @ 025eaf2c */
                    /* catch() { ... } // from try @ 025eaee8 with catch @ 025eaf30 */
                    /* catch() { ... } // from try @ 025eaedc with catch @ 025eaf34 */
    puVar2 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,2);
                    /* catch() { ... } // from try @ 025eae08 with catch @ 025eaf38
                       catch() { ... } // from try @ 025eaf10 with catch @ 025eaf38 */
LAB_025eaf4c:
    uVar6 = (*(code *)*puVar2)(param_2,uVar6,puVar2[1]);
                    /* try { // try from 025eaf64 to 026eaf67 has its CatchHandler @ 025eb03c */
    if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049c5120);
    }
    PlayerPrefsString__Set_3f0e4a4(&uStack_40,uVar6,0);
  }
                    /* try { // try from 025eaf8c to 026eaf8f has its CatchHandler @ 025eb070 */
  return;
}

