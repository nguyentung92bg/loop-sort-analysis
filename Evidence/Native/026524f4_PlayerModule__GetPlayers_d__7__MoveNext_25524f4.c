/* IL2CPP: PlayerModule.<GetPlayers>d__7$$MoveNext
void PlayerModule__GetPlayers_d__7__MoveNext (PlayerModule__GetPlayers_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule.<GetPlayers>d__7$$MoveNext
   void PlayerModule__GetPlayers_d__7__MoveNext (PlayerModule__GetPlayers_d__7_o __this, const
   MethodInfo* method); */

void PlayerModule__GetPlayers_d__7__MoveNext_25524f4(int *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4c083 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caeb8);
    FUN_021f03f8(PTR_DAT_049b5e00);
    FUN_021f03f8(PTR_DAT_049caec0);
    FUN_021f03f8(PTR_DAT_049caec8);
    FUN_021f03f8(PTR_DAT_049cae88);
    FUN_021f03f8(PTR_DAT_049caed0);
    bRam0000000004f4c083 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
                    /* try { // try from 0265257c to 02752603 has its CatchHandler @ 02652b98 */
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x12);
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02652750 to 0275275b has its CatchHandler @ 02652b64 */
      FUN_021f06a0();
    }
    lVar6 = *plVar9;
    uVar5 = *(undefined8 *)(param_1 + 10);
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049cae88) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_02652610;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049cae88,3);
LAB_02652610:
                    /* try { // try from 02652610 to 0275261b has its CatchHandler @ 02652b10 */
    (*(code *)*puVar4)(&uStack_a0,plVar9,uVar5,uVar1,puVar4[1]);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_60 = uStack_90;
                    /* try { // try from 02652644 to 02752653 has its CatchHandler @ 02652b0c */
    FUN_0235b0c0(&uStack_70,&uStack_a0,*(undefined8 *)PTR_DAT_049caed0);
    lVar10 = *(long *)PTR_DAT_049caec8;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    uStack_40 = uStack_90;
    lVar6 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 02652678 to 02752693 has its CatchHandler @ 02652b7c */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar5 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
    lVar6 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 0265269c to 027526a7 has its CatchHandler @ 02652b78 */
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
                    /* try { // try from 026526b0 to 027526b3 has its CatchHandler @ 02652b74 */
                    /* try { // try from 026526b4 to 027526cb has its CatchHandler @ 02652b70 */
    iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      *(undefined8 *)(param_1 + 0x12) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xe,0);
                    /* try { // try from 0265271c to 0275271f has its CatchHandler @ 02652b04 */
                    /* try { // try from 02652730 to 02752747 has its CatchHandler @ 02652b68 */
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049caeb8);
      return;
    }
  }
                    /* try { // try from 026526d4 to 027526d7 has its CatchHandler @ 02652b6c */
  FUN_0235b3fc(&uStack_50,&uStack_a0,*(undefined8 *)PTR_DAT_049caec0);
  puVar2 = PTR_DAT_049b5e00;
                    /* try { // try from 026526e4 to 027526ef has its CatchHandler @ 02652b08 */
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,uStack_a0,*(undefined8 *)puVar2);
  return;
}

