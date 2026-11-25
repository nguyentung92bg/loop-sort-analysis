/* IL2CPP: CloudPrefsString$$WriteTo
void CloudPrefsString__WriteTo (CloudPrefsString_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$WriteTo
   void CloudPrefsString__WriteTo (CloudPrefsString_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsString__WriteTo_24eaca0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5120;
                    /* try { // try from 025eacb0 to 026eacb7 has its CatchHandler @ 025eb090 */
  if ((bRam0000000004f4bcc6 & 1) == 0) {
                    /* try { // try from 025eacd0 to 026ead1b has its CatchHandler @ 025eb094 */
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f4bcc6 = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = PlayerPrefsString__HasValue_3f0e508(&uStack_40,0);
  uVar7 = param_1[2];
  if ((uVar2 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_025eae34;
    lVar5 = *param_2;
                    /* try { // try from 025ead9c to 026eada3 has its CatchHandler @ 025eb054 */
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* try { // try from 025eae08 to 026eae0f has its CatchHandler @ 025eaf38 */
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_025eae10;
        }
        uVar2 = uVar2 - 1;
                    /* try { // try from 025eadc0 to 026eaddf has its CatchHandler @ 025eaf40 */
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,1);
LAB_025eae10:
                    /* try { // try from 025eae10 to 026eae23 has its CatchHandler @ 025eaf28 */
    (*(code *)*puVar4)(param_2,uVar7,puVar4[1]);
  }
  else {
                    /* try { // try from 025ead1c to 026ead37 has its CatchHandler @ 025eaa84 */
    uStack_38 = param_1[1];
    uStack_40 = *param_1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025ead38 to 026ead47 has its CatchHandler @ 025eb084 */
    uVar3 = PlayerPrefsString__get_Value_3f0e288(&uStack_40,0);
    if (param_2 == (long *)0x0) {
LAB_025eae34:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *param_2;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
                    /* try { // try from 025ead5c to 026ead5f has its CatchHandler @ 025eb080 */
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c3da0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_025eade8;
        }
        uVar2 = uVar2 - 1;
                    /* try { // try from 025ead74 to 026ead8f has its CatchHandler @ 025eb060 */
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,3);
LAB_025eade8:
                    /* try { // try from 025eadf8 to 026eadfb has its CatchHandler @ 025eaf3c */
    (*(code *)*puVar4)(param_2,uVar7,uVar3,puVar4[1]);
  }
  return;
}

