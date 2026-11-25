/* IL2CPP: GameStartState$$CanEnter
bool GameStartState__CanEnter (GameStartState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStartState$$CanEnter
   bool GameStartState__CanEnter (GameStartState_o* __this, const MethodInfo* method); */

uint GameStartState__CanEnter_2502af4(long param_1)

{
  uint uVar1;
  long lVar2;
  
                    /* try { // try from 02602af4 to 02702b3f has its CatchHandler @ 02602998 */
  if ((bRam0000000004f4bd6f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c80);
    bRam0000000004f4bd6f = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar1 = ConnectivityModule__ShouldBlockLevelStart_2531504(*(long *)(param_1 + 0xb0),0);
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 02602b40 to 02702b43 has its CatchHandler @ 02602b48 */
                    /* try { // try from 02602b44 to 02702b67 has its CatchHandler @ 02602998 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602b40 with catch @ 02602b48
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602ae4 with catch @ 02602b4c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602a64 with catch @ 02602b50
                        */
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar2 = Monitors__Get_object__26889d0
                            (*(long *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_049c8c80), lVar2 == 0)
         ) goto LAB_02602b70;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02602a84 with catch @ 02602b54
                        */
      NoInternetMonitor__ShowPopup_244ecb8(lVar2,0);
    }
                    /* try { // try from 02602b68 to 02702b6b has its CatchHandler @ 02602b84 */
                    /* try { // try from 02602b6c to 02702b87 has its CatchHandler @ 02602998 */
    return (uVar1 ^ 0xffffffff) & 1;
  }
LAB_02602b70:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

