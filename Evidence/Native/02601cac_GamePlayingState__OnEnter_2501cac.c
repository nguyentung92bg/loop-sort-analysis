/* IL2CPP: GamePlayingState$$OnEnter
void GamePlayingState__OnEnter (GamePlayingState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GamePlayingState$$OnEnter
   void GamePlayingState__OnEnter (GamePlayingState_o* __this, const MethodInfo* method); */

void GamePlayingState__OnEnter_2501cac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
                    /* catch() { ... } // from try @ 02601c94 with catch @ 02601cac */
                    /* catch() { ... } // from try @ 02601c8c with catch @ 02601cb0 */
                    /* catch() { ... } // from try @ 02601c84 with catch @ 02601cb4 */
                    /* catch() { ... } // from try @ 02601be0 with catch @ 02601cb8 */
                    /* catch() { ... } // from try @ 02601c7c with catch @ 02601cbc */
                    /* catch() { ... } // from try @ 02601c74 with catch @ 02601cc0 */
                    /* catch() { ... } // from try @ 02601bac with catch @ 02601cc4 */
  if ((bRam0000000004f4bd6a & 1) == 0) {
                    /* catch() { ... } // from try @ 02601b18 with catch @ 02601cc8 */
                    /* catch() { ... } // from try @ 02601b38 with catch @ 02601ccc */
    FUN_021f03f8(PTR_DAT_049c8c38);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4bd6a = 1;
  }
                    /* try { // try from 02601ce8 to 02701ceb has its CatchHandler @ 026023cc */
  GameStateBase__OnEnter_24fc200(param_1);
  puVar1 = PTR_DAT_049c3958;
  if (*(long *)(param_1 + 0x78) != 0) {
    TimeModule__Resume_253a530(0,0,*(long *)(param_1 + 0x78),0,0);
    lVar2 = *(long *)puVar1;
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      lVar2 = *(long *)puVar1;
    }
    auStack_24[0] = **(undefined1 **)(lVar2 + 0xb8);
                    /* try { // try from 02601d3c to 02701dc3 has its CatchHandler @ 02602434 */
    uVar3 = thunk_FUN_0222c66c(lVar2,auStack_24);
    if (lVar4 != 0) {
      Monitors__Activate_object__268887c(lVar4,uVar3,*(undefined8 *)PTR_DAT_049c8c38);
      if (*(long *)(param_1 + 0x80) != 0) {
        AudioModule__UnPauseMusic_25304c4(*(long *)(param_1 + 0x80),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

