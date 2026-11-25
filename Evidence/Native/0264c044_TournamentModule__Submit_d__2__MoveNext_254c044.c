/* IL2CPP: TournamentModule.<Submit>d__2$$MoveNext
void TournamentModule__Submit_d__2__MoveNext (TournamentModule__Submit_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TournamentModule.<Submit>d__2$$MoveNext
   void TournamentModule__Submit_d__2__MoveNext (TournamentModule__Submit_d__2_o __this, const
   MethodInfo* method); */

void TournamentModule__Submit_d__2__MoveNext_254c044(int *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
                    /* try { // try from 0264c048 to 0274c053 has its CatchHandler @ 0264c07c */
                    /* try { // try from 0264c060 to 0274c06f has its CatchHandler @ 0264c078 */
  if ((bRam0000000004f4c04c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa30);
                    /* try { // try from 0264c074 to 0274c077 has its CatchHandler @ 0264c090 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264c060 with catch @ 0264c078
                       try { // try from 0264c078 to 0274c0a7 has its CatchHandler @ 0264bde8 */
    FUN_021f03f8(PTR_DAT_049b5c98);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264c048 with catch @ 0264c07c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264be70 with catch @ 0264c080
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264be64 with catch @ 0264c084
                        */
    FUN_021f03f8(PTR_DAT_049c9750);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264be90 with catch @ 0264c088
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264be60 with catch @ 0264c08c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0264bf6c with catch @ 0264c08c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0264c004 with catch @ 0264c090
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0264c074 with catch @ 0264c090
                        */
    FUN_021f03f8(PTR_DAT_049c9758);
    FUN_021f03f8(PTR_DAT_049caa20);
                    /* try { // try from 0264c0a8 to 0274c0bf has its CatchHandler @ 0264c120 */
    FUN_021f03f8(PTR_DAT_049c9768);
    bRam0000000004f4c04c = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar2 = ZEXT816(0);
                    /* try { // try from 0264c0c0 to 0274c10f has its CatchHandler @ 0264bde8 */
  if (*param_1 == 0) {
                    /* try { // try from 0264c124 to 0274c127 has its CatchHandler @ 0264c130 */
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
                    /* try { // try from 0264c128 to 0274c133 has its CatchHandler @ 0264bde8 */
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0264c124 with catch @ 0264c130
                        */
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar10;
    uVar6 = *(undefined8 *)(param_1 + 10);
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049caa20) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0264c14c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 0264c110 to 0274c11f has its CatchHandler @ 0264c120 */
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049caa20,1);
                    /* catch() { ... } // from try @ 0264c0a8 with catch @ 0264c120
                       catch() { ... } // from try @ 0264c110 with catch @ 0264c120 */
LAB_0264c14c:
    auStack_60 = (*(code *)*puVar5)(plVar10,uVar6,uVar1,puVar5[1]);
    FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c9768);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    lVar11 = *(long *)PTR_DAT_049c9758;
    uStack_48 = uStack_38;
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
    auVar2 = auStack_60;
    if (iVar4 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049caa30);
      return;
    }
  }
  auStack_60 = auVar2;
  FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c9750);
  puVar3 = PTR_DAT_049b5c98;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_40,*(undefined8 *)puVar3);
  return;
}

