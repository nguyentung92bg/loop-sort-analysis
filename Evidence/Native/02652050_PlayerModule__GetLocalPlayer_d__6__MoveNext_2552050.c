/* IL2CPP: PlayerModule.<GetLocalPlayer>d__6$$MoveNext
void PlayerModule__GetLocalPlayer_d__6__MoveNext (PlayerModule__GetLocalPlayer_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule.<GetLocalPlayer>d__6$$MoveNext
   void PlayerModule__GetLocalPlayer_d__6__MoveNext (PlayerModule__GetLocalPlayer_d__6_o __this,
   const MethodInfo* method); */

void PlayerModule__GetLocalPlayer_d__6__MoveNext_2552050(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4c081 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caeb0);
    FUN_021f03f8(PTR_DAT_049b5da8);
                    /* try { // try from 02652088 to 0275209f has its CatchHandler @ 02652b88 */
    FUN_021f03f8(PTR_DAT_049c96f8);
    FUN_021f03f8(PTR_DAT_049c9700);
    FUN_021f03f8(PTR_DAT_049cae88);
                    /* try { // try from 026520b4 to 027520cf has its CatchHandler @ 02652b50 */
    FUN_021f03f8(PTR_DAT_049c9720);
    bRam0000000004f4c081 = 1;
  }
  uStack_40 = 0;
  uStack_70 = 0;
                    /* try { // try from 026520d0 to 027520e7 has its CatchHandler @ 02652b38 */
  uStack_b0 = 0;
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*param_1 == 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x16);
    uStack_a0 = *(undefined8 *)(param_1 + 0x14);
    uStack_88 = *(undefined8 *)(param_1 + 0x1a);
    uStack_90 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x1e);
    uStack_80 = *(undefined8 *)(param_1 + 0x1c);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *param_1 = -1;
  }
  else {
                    /* try { // try from 026520f0 to 027520f3 has its CatchHandler @ 02652b34 */
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 026520f8 to 02752107 has its CatchHandler @ 02652b4c */
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar7;
                    /* try { // try from 0265210c to 0275216b has its CatchHandler @ 02652b80 */
    uVar8 = *(undefined8 *)(param_1 + 0x12);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cae88) {
                    /* try { // try from 02652188 to 02752193 has its CatchHandler @ 02652ae8 */
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0265218c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cae88,2);
LAB_0265218c:
    (*(code *)*puVar3)(&uStack_130,plVar7,uVar8,puVar3[1]);
                    /* try { // try from 026521b4 to 027521cf has its CatchHandler @ 02652b30 */
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_b0 = uStack_100;
    FUN_0235b0c0(&uStack_e0,&uStack_130,*(undefined8 *)PTR_DAT_049c9720);
                    /* try { // try from 026521d8 to 027521e3 has its CatchHandler @ 02652b2c */
    lVar9 = *(long *)PTR_DAT_049c9700;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
                    /* try { // try from 026521ec to 027521ef has its CatchHandler @ 02652b28 */
    uStack_70 = uStack_100;
    lVar4 = *(long *)(lVar9 + 0x20);
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
                    /* try { // try from 026521fc to 02752207 has its CatchHandler @ 02652ae4 */
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_a0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
    lVar4 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
                    /* try { // try from 02652240 to 0275224f has its CatchHandler @ 02652ae0 */
    iVar2 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    if (iVar2 == 0) {
                    /* try { // try from 026522a8 to 027522ab has its CatchHandler @ 02652b1c */
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x1e) = uStack_78;
      *(undefined8 *)(param_1 + 0x1c) = uStack_80;
      *(undefined8 *)(param_1 + 0x16) = uStack_98;
      *(undefined8 *)(param_1 + 0x14) = uStack_a0;
      *(undefined8 *)(param_1 + 0x1a) = uStack_88;
      *(undefined8 *)(param_1 + 0x18) = uStack_90;
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
                    /* try { // try from 026522c8 to 027522cb has its CatchHandler @ 02652adc */
      thunk_FUN_021f190c(param_1 + 0x14,0);
                    /* try { // try from 026522cc to 027522e7 has its CatchHandler @ 02652b18 */
      FUN_0235bb44(param_1 + 2,&uStack_a0,param_1,*(undefined8 *)PTR_DAT_049caeb0);
      return;
    }
  }
  FUN_0235b3fc(&uStack_a0,&uStack_130,*(undefined8 *)PTR_DAT_049c96f8);
  puVar1 = PTR_DAT_049b5da8;
  uStack_40 = uStack_110;
  uStack_58 = uStack_128;
  uStack_60 = uStack_130;
  uStack_48 = uStack_118;
  uStack_50 = uStack_120;
                    /* try { // try from 02652274 to 02752283 has its CatchHandler @ 02652b24 */
  *param_1 = -2;
                    /* try { // try from 02652290 to 0275229b has its CatchHandler @ 02652b20 */
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  uStack_148 = uStack_118;
  uStack_150 = uStack_120;
  uStack_140 = uStack_110;
  FUN_0235bed4(param_1 + 2,&uStack_160,*(undefined8 *)puVar1);
                    /* try { // try from 026522ec to 027522f7 has its CatchHandler @ 02652b14 */
  return;
}

