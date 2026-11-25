/* IL2CPP: CloudPrefsFloat$$ReadFrom
void CloudPrefsFloat__ReadFrom (CloudPrefsFloat_o __this, ICloudPrefsStore_o* store, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$ReadFrom
   void CloudPrefsFloat__ReadFrom (CloudPrefsFloat_o __this, ICloudPrefsStore_o* store, const
   MethodInfo* method); */

void CloudPrefsFloat__ReadFrom_24ea738(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 025ea744 to 026ea74f has its CatchHandler @ 025ea790 */
                    /* try { // try from 025ea754 to 026ea763 has its CatchHandler @ 025ea78c */
  if ((bRam0000000004f4bcbf & 1) == 0) {
                    /* try { // try from 025ea764 to 026ea7ab has its CatchHandler @ 025ea648 */
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f4bcbf = 1;
  }
  puVar1 = PTR_DAT_049c3da0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ea754 with catch @ 025ea78c
                        */
  uStack_50 = 0;
  uStack_48 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ea744 with catch @ 025ea790
                        */
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *param_2;
  uVar6 = param_1[3];
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 025ea7ac to 026ea7af has its CatchHandler @ 025ea7d0 */
                    /* try { // try from 025ea7b0 to 026ea7d3 has its CatchHandler @ 025ea648 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c3da0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ea7d4 with catch @ 025ea7e4
                        */
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_025ea7f0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 025ea7ac with catch @ 025ea7d0 */
    } while (uVar4 != 0);
  }
                    /* try { // try from 025ea7d4 to 026ea7db has its CatchHandler @ 025ea7e4 */
                    /* try { // try from 025ea7dc to 026ea7e7 has its CatchHandler @ 025ea648 */
  puVar2 = (undefined8 *)FUN_02229a4c(param_2,*(long *)PTR_DAT_049c3da0,0);
LAB_025ea7f0:
  uVar4 = (*(code *)*puVar2)(param_2,uVar6,puVar2[1]);
  if ((uVar4 & 1) != 0) {
    lVar3 = *param_2;
    uVar6 = param_1[3];
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_025ea858;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar1,6);
LAB_025ea858:
    dVar8 = (double)(*(code *)*puVar2)(param_2,uVar6,puVar2[1]);
    fVar9 = (float)dVar8;
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    if (*(char *)(param_1 + 2) != '\0') {
      uStack_58 = param_1[1];
      uStack_60 = *param_1;
      if (*(int *)(*(long *)PTR_DAT_049c6ca0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = PlayerPrefsFloat__get_Value_3f0ddfc(&uStack_60,0);
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar9 = (float)System_Math__Max_30ff5c4(uVar7,fVar9,0);
    }
    if (*(int *)(*(long *)PTR_DAT_049c6ca0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsFloat__Set_3f0e028(fVar9,&uStack_50,0);
  }
  return;
}

