/* IL2CPP: GameStateBase$$OnExit
void GameStateBase__OnExit (GameStateBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStateBase$$OnExit
   void GameStateBase__OnExit (GameStateBase_o* __this, const MethodInfo* method); */

void GameStateBase__OnExit_24fe228(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lStack_28;
  
  puVar1 = PTR_DAT_049c8b10;
                    /* try { // try from 025fe238 to 026fe26b has its CatchHandler @ 025fd23c */
  if ((bRam0000000004f4bd75 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8b18);
    FUN_021f03f8(PTR_DAT_049c8b10);
    bRam0000000004f4bd75 = 1;
  }
                    /* try { // try from 025fe26c to 026fe27b has its CatchHandler @ 025fe27c */
  lStack_28 = 0;
  UnityHFSM_State___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___OnExit_29afc84
            (param_1,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025fe220 with catch @ 025fe27c
                       catch() { ... } // from try @ 025fe26c with catch @ 025fe27c */
  plVar7 = *(long **)(param_1 + 0x68);
                    /* try { // try from 025fe280 to 026fe283 has its CatchHandler @ 025fe28c */
  lStack_28 = param_1;
                    /* try { // try from 025fe284 to 026fe28f has its CatchHandler @ 025fd23c */
                    /* catch() { ... } // from try @ 025fe15c with catch @ 025fe28c
                       catch() { ... } // from try @ 025fe190 with catch @ 025fe28c
                       catch() { ... } // from try @ 025fe1d4 with catch @ 025fe28c
                       catch() { ... } // from try @ 025fe204 with catch @ 025fe28c
                       catch() { ... } // from try @ 025fe280 with catch @ 025fe28c */
  thunk_FUN_021f190c(&lStack_28,param_1);
  lVar2 = lStack_28;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c8b18) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_025fe2ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c8b18,0);
LAB_025fe2ec:
  (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
  return;
}

