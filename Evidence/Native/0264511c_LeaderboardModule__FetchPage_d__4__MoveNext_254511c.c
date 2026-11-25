/* IL2CPP: LeaderboardModule.<FetchPage>d__4$$MoveNext
void LeaderboardModule__FetchPage_d__4__MoveNext (LeaderboardModule__FetchPage_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardModule.<FetchPage>d__4$$MoveNext
   void LeaderboardModule__FetchPage_d__4__MoveNext (LeaderboardModule__FetchPage_d__4_o __this,
   const MethodInfo* method); */

void LeaderboardModule__FetchPage_d__4__MoveNext_254511c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bffd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca760);
    FUN_021f03f8(PTR_DAT_049b54c8);
    FUN_021f03f8(PTR_DAT_049c4c00);
    FUN_021f03f8(PTR_DAT_049c4c08);
    FUN_021f03f8(PTR_DAT_049ca758);
    FUN_021f03f8(PTR_DAT_049c4c10);
    bRam0000000004f4bffd = 1;
  }
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*param_1 == 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x14);
    uStack_70 = *(undefined8 *)(param_1 + 0x12);
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x16);
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
                    /* try { // try from 02645378 to 02745393 has its CatchHandler @ 026451b0 */
      FUN_021f06a0();
    }
                    /* try { // try from 026451b0 to 02745273 has its CatchHandler @ 026451b0
                       catch() { ... } // from try @ 026451b0 with catch @ 026451b0
                       catch() { ... } // from try @ 026452e0 with catch @ 026451b0
                       catch() { ... } // from try @ 02645318 with catch @ 026451b0
                       catch() { ... } // from try @ 02645378 with catch @ 026451b0
                       catch() { ... } // from try @ 0264539c with catch @ 026451b0 */
    plVar8 = *(long **)(*(long *)(param_1 + 10) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(param_1 + 0xc);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    iVar3 = param_1[0xe];
    iVar1 = param_1[0xf];
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca758) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0264523c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca758,2);
LAB_0264523c:
    (*(code *)*puVar4)(&uStack_d0,plVar8,uVar9,iVar3,iVar1,uVar11,puVar4[1]);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
                    /* try { // try from 02645274 to 0274527b has its CatchHandler @ 0264535c */
    FUN_0235b0c0(&uStack_90,&uStack_d0,*(undefined8 *)PTR_DAT_049c4c10);
    lVar10 = *(long *)PTR_DAT_049c4c08;
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    lVar5 = *(long *)(lVar10 + 0x20);
                    /* try { // try from 02645294 to 027452df has its CatchHandler @ 02645360 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_70,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
                    /* try { // try from 026452e0 to 027452fb has its CatchHandler @ 026451b0 */
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = uStack_68;
      *(undefined8 *)(param_1 + 0x12) = uStack_70;
      *(undefined8 *)(param_1 + 0x18) = uStack_58;
      *(undefined8 *)(param_1 + 0x16) = uStack_60;
      thunk_FUN_021f190c(param_1 + 0x12,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264530c with catch @ 02645354
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026452fc with catch @ 02645358
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02645274 with catch @ 0264535c
                        */
      FUN_0235bb44(param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_049ca760);
      return;
    }
  }
  FUN_0235b3fc(&uStack_70,&uStack_50,*(undefined8 *)PTR_DAT_049c4c00);
  puVar2 = PTR_DAT_049b54c8;
                    /* try { // try from 026452fc to 02745307 has its CatchHandler @ 02645358 */
                    /* try { // try from 0264530c to 02745317 has its CatchHandler @ 02645354 */
  *param_1 = -2;
                    /* try { // try from 02645318 to 02745373 has its CatchHandler @ 026451b0 */
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  FUN_0235bed4(param_1 + 2,&uStack_d0,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02645294 with catch @ 02645360
                        */
                    /* try { // try from 02645374 to 02745377 has its CatchHandler @ 02645390 */
  return;
}

