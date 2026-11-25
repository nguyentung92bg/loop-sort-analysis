/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateMainPlayerElement
void StreakTournamentLeaderboardElement__UpdateMainPlayerElement (StreakTournamentLeaderboardElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateMainPlayerElement
   void StreakTournamentLeaderboardElement__UpdateMainPlayerElement
   (StreakTournamentLeaderboardElement_o* __this, const MethodInfo* method); */

void StreakTournamentLeaderboardElement__UpdateMainPlayerElement_2485f20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 02585f38 to 02685f9b has its CatchHandler @ 02585f38
                       catch() { ... } // from try @ 02585f38 with catch @ 02585f38
                       catch() { ... } // from try @ 02585fdc with catch @ 02585f38
                       catch() { ... } // from try @ 02586018 with catch @ 02585f38
                       catch() { ... } // from try @ 02586090 with catch @ 02585f38 */
  if ((bRam0000000004f4ba26 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4ba26 = 1;
  }
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                    (*(undefined8 *)(param_1 + 0x38),0x21c0801,0);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b5480);
    }
                    /* try { // try from 02585f9c to 02685fa7 has its CatchHandler @ 02585fe8 */
    lVar2 = Extensions__GetRectTransform_3f0c498(uVar5,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar2,0);
      puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 02585fb0 to 02685fbb has its CatchHandler @ 02585fe0 */
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar2 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                          (*(long *)(param_1 + 0x48),0);
        uVar5 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 02585fd0 to 02685fd3 has its CatchHandler @ 02585fec */
                    /* try { // try from 02585fd8 to 02685fdb has its CatchHandler @ 02585fe4 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02585fdc to 02686003 has its CatchHandler @ 02585f38 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585fb0 with catch @ 02585fe0
                        */
          FUN_021f0574(*(long *)puVar1);
        }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585fd8 with catch @ 02585fe4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585f9c with catch @ 02585fe8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02585fd0 with catch @ 02585fec
                        */
        uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          if (lVar2 != 0) goto LAB_0258602c;
        }
        else {
                    /* try { // try from 02586004 to 02686017 has its CatchHandler @ 02586088 */
          if (((*(long *)(param_1 + 0x50) != 0) &&
              (lVar4 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                                 (*(long *)(param_1 + 0x50),0), lVar4 != 0)) &&
             (UnityEngine_Transform__get_position_3c2d540(lVar4,0), lVar2 != 0)) {
                    /* try { // try from 02586018 to 02686073 has its CatchHandler @ 02585f38 */
            UnityEngine_Transform__set_position_3c2d61c(lVar2,0);
LAB_0258602c:
            UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar2,0);
                    /* try { // try from 02586074 to 02686083 has its CatchHandler @ 02586084 */
                    /* catch() { ... } // from try @ 02586074 with catch @ 02586084 */
                    /* catch() { ... } // from try @ 02586004 with catch @ 02586088 */
            if ((bRam0000000004f58960 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a26c78,0);
              bRam0000000004f58960 = 1;
            }
            if (lVar2 != 0) {
              lVar4 = *(long *)(lVar2 + 0x10);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
              }
              if (pcRam0000000004f589a8 == (code *)0x0) {
                pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
              }
              (*pcRam0000000004f589a8)(lVar4,&stack0xffffffffffffffe8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0258608c to 0268608f has its CatchHandler @ 02586098 */
  FUN_021f06a0();
}

