/* IL2CPP: NakamaServices$$TryGetLeaderboard
bool NakamaServices__TryGetLeaderboard (Nakama_Custom_Leaderboards_ILeaderboardsService_o** service, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaServices$$TryGetLeaderboard
   bool NakamaServices__TryGetLeaderboard (Nakama_Custom_Leaderboards_ILeaderboardsService_o**
   service, const MethodInfo* method); */

uint NakamaServices__TryGetLeaderboard_224bf24(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_18;
  
  if ((bRam0000000004f49b8a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5b20);
                    /* try { // try from 0234bf4c to 0244bf57 has its CatchHandler @ 0234bf88 */
    FUN_021f03f8(PTR_DAT_049b5b58);
                    /* try { // try from 0234bf58 to 0244bfa3 has its CatchHandler @ 0234bed8 */
    bRam0000000004f49b8a = 1;
  }
  *param_1 = 0;
  thunk_FUN_021f190c(param_1,0);
  uStack_18 = 0;
  uVar2 = NakamaServices__TryGetApi_2243784(&uStack_18);
                    /* catch() { ... } // from try @ 0234bf4c with catch @ 0234bf88 */
  if (((uVar2 & 1) == 0) ||
     (uVar2 = Voodoo_Sauce_Core_VoodooSauceServices__TryGet_object__272d778
                        (param_1,*(undefined8 *)PTR_DAT_049b5b58), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    plVar6 = (long *)*param_1;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar6;
                    /* try { // try from 0234bfa4 to 0244c01b has its CatchHandler @ 0234bfa4
                       catch() { ... } // from try @ 0234bfa4 with catch @ 0234bfa4
                       catch() { ... } // from try @ 0234c030 with catch @ 0234bfa4 */
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b5b20) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0234bff8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b5b20,0);
LAB_0234bff8:
    uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  return uVar1 & 1;
}

