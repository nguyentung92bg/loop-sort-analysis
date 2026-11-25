/* IL2CPP: BoosterSheet$$TryGetUnlockedBooster
bool BoosterSheet__TryGetUnlockedBooster (BoosterSheet_o* __this, int32_t level, int32_t* unlockedBooster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02659cd0) */
/* IL2CPP: BoosterSheet$$TryGetUnlockedBooster
   bool BoosterSheet__TryGetUnlockedBooster (BoosterSheet_o* __this, int32_t level, int32_t*
   unlockedBooster, const MethodInfo* method); */

undefined4 BoosterSheet__TryGetUnlockedBooster_25599f0(long param_1,int param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  long *plVar11;
  int iVar12;
  undefined4 uStack_34;
  
                    /* try { // try from 026599fc to 02759a07 has its CatchHandler @ 02659f84 */
                    /* try { // try from 02659a18 to 02759a23 has its CatchHandler @ 02659f1c */
  if ((bRam0000000004f4c0d2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb468);
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* try { // try from 02659a34 to 02759a37 has its CatchHandler @ 02659f18 */
    FUN_021f03f8(PTR_DAT_049cb470);
    FUN_021f03f8(PTR_DAT_049cb478);
                    /* try { // try from 02659a50 to 02759a5b has its CatchHandler @ 02659f74 */
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049b6118);
    bRam0000000004f4c0d2 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02659a78 to 02759a83 has its CatchHandler @ 02659f70 */
  lVar6 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049cb470) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02659acc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
                    /* try { // try from 02659ab0 to 02759aef has its CatchHandler @ 02659fd0 */
  puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049cb470,0);
LAB_02659acc:
  puVar3 = PTR_DAT_049cb478;
  puVar2 = PTR_DAT_049b4360;
  puVar1 = PTR_DAT_049b3cc8;
  plVar11 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  do {
                    /* try { // try from 02659b00 to 02759b0b has its CatchHandler @ 02659fb0 */
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 02659b1c to 02759b1f has its CatchHandler @ 02659fd4 */
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    /* try { // try from 02659b48 to 02759b5b has its CatchHandler @ 02659f4c */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02659b50;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar2,0);
LAB_02659b50:
    uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
                    /* try { // try from 02659b5c to 02759b67 has its CatchHandler @ 02659f48 */
    if ((uVar8 & 1) == 0) {
      uVar10 = 0;
                    /* try { // try from 02659c24 to 02759c27 has its CatchHandler @ 02659fa0 */
      iVar12 = 5;
      goto LAB_02659c28;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 02659b74 to 02759b77 has its CatchHandler @ 02659f44 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                    /* try { // try from 02659ba8 to 02759bb7 has its CatchHandler @ 02659f34 */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02659bb4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 02659b9c to 02759ba7 has its CatchHandler @ 02659f38 */
    puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar3,0);
LAB_02659bb4:
    lVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02659bcc to 02759bd3 has its CatchHandler @ 02659f28 */
  } while (*(int *)(lVar6 + 0x18) != param_2);
                    /* try { // try from 02659bd8 to 02759be3 has its CatchHandler @ 02659fa8 */
  plVar7 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
  uVar10 = *(undefined4 *)(plVar7[1] + 0xfc);
                    /* try { // try from 02659bec to 02759bf3 has its CatchHandler @ 02659fa4 */
  uVar5 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar7 + 0x80));
  func_0x04608620(&uStack_34,uVar5,uVar10);
  uVar10 = 1;
                    /* try { // try from 02659c10 to 02759c1b has its CatchHandler @ 02659f20 */
  iVar12 = 4;
  *param_3 = uStack_34;
LAB_02659c28:
                    /* try { // try from 02659c30 to 02759c33 has its CatchHandler @ 02659f9c */
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 02659c54 to 02759c57 has its CatchHandler @ 02659f04 */
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    /* try { // try from 02659c74 to 02759c7f has its CatchHandler @ 02659f10 */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02659c80;
        }
                    /* try { // try from 02659c58 to 02759c6f has its CatchHandler @ 02659f14 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar1,0);
LAB_02659c80:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
  }
                    /* try { // try from 02659c94 to 02759d27 has its CatchHandler @ 02659f58 */
  if ((iVar12 == 5) || (iVar12 == 0)) {
    uVar10 = 0;
    *param_3 = 0;
  }
  return uVar10;
}

