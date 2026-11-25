/* IL2CPP: LeaderboardModule.<FetchEntry>d__3$$MoveNext
void LeaderboardModule__FetchEntry_d__3__MoveNext (LeaderboardModule__FetchEntry_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardModule.<FetchEntry>d__3$$MoveNext
   void LeaderboardModule__FetchEntry_d__3__MoveNext (LeaderboardModule__FetchEntry_d__3_o __this,
   const MethodInfo* method); */

void LeaderboardModule__FetchEntry_d__3__MoveNext_2544cbc(int *param_1)

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
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 02644cc4 to 02744cc7 has its CatchHandler @ 02644cd4 */
                    /* try { // try from 02644cc8 to 02744ccb has its CatchHandler @ 02644cd0 */
                    /* try { // try from 02644ccc to 02744d07 has its CatchHandler @ 02644a70 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644cc8 with catch @ 02644cd0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644cc4 with catch @ 02644cd4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644c54 with catch @ 02644cd8
                        */
  if ((bRam0000000004f4bffb & 1) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644c88 with catch @ 02644cdc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644c28 with catch @ 02644ce0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644b84 with catch @ 02644ce4
                        */
    FUN_021f03f8(PTR_DAT_049ca750);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644c0c with catch @ 02644ce8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02644ba4 with catch @ 02644cec
                        */
    FUN_021f03f8(PTR_DAT_049b54c8);
    FUN_021f03f8(PTR_DAT_049c4c00);
                    /* try { // try from 02644d08 to 02744d0b has its CatchHandler @ 02644d24 */
    FUN_021f03f8(PTR_DAT_049c4c08);
                    /* try { // try from 02644d0c to 02744d27 has its CatchHandler @ 02644a70 */
    FUN_021f03f8(PTR_DAT_049ca758);
    FUN_021f03f8(PTR_DAT_049c4c10);
                    /* catch() { ... } // from try @ 02644d08 with catch @ 02644d24 */
                    /* try { // try from 02644d28 to 02744d2f has its CatchHandler @ 02644d38 */
    bRam0000000004f4bffb = 1;
  }
                    /* try { // try from 02644d30 to 02744d3b has its CatchHandler @ 02644a70 */
  uStack_88 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02644d28 with catch @ 02644d38
                        */
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*param_1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x14);
    uStack_60 = *(undefined8 *)(param_1 + 0x12);
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(*(long *)(param_1 + 10) + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar9;
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049ca758) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_02644dd4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ca758,1);
LAB_02644dd4:
    (*(code *)*puVar4)(&uStack_c0,plVar9,uVar5,uVar1,uVar11,puVar4[1]);
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    FUN_0235b0c0(&uStack_80,&uStack_c0,*(undefined8 *)PTR_DAT_049c4c10);
    lVar10 = *(long *)PTR_DAT_049c4c08;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    uStack_48 = uStack_a8;
    uStack_50 = uStack_b0;
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar5 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = uStack_58;
      *(undefined8 *)(param_1 + 0x12) = uStack_60;
      *(undefined8 *)(param_1 + 0x18) = uStack_48;
      *(undefined8 *)(param_1 + 0x16) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0x12,0);
      FUN_0235bb44(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049ca750);
      return;
    }
  }
  FUN_0235b3fc(&uStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4c00);
  puVar2 = PTR_DAT_049b54c8;
  *param_1 = -2;
  uStack_b8 = uStack_38;
  uStack_c0 = uStack_40;
  FUN_0235bed4(param_1 + 2,&uStack_c0,*(undefined8 *)puVar2);
  return;
}

