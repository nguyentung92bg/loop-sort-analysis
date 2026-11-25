/* IL2CPP: CoreStreak$$OnReviveContinueResultUpdate
void CoreStreak__OnReviveContinueResultUpdate (CoreStreak_o* __this, ReviveContinueResultUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$OnReviveContinueResultUpdate
   void CoreStreak__OnReviveContinueResultUpdate (CoreStreak_o* __this,
   ReviveContinueResultUpdateMessage_o m, const MethodInfo* method); */

void CoreStreak__OnReviveContinueResultUpdate_2513068
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 02613078 to 02713083 has its CatchHandler @ 026135b8 */
  if ((bRam0000000004f4be03 & 1) == 0) {
                    /* try { // try from 02613098 to 0271309b has its CatchHandler @ 026135ac */
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be03 = 1;
  }
                    /* try { // try from 026130b4 to 027130bb has its CatchHandler @ 026135bc */
  uVar3 = CoreStreak__IsUnlocked_2512e64(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_049b5310;
                    /* try { // try from 026130cc to 027130df has its CatchHandler @ 026135c0 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    uStack_48 = *(undefined8 *)(lVar4 + 0x848);
    uStack_50 = *(undefined8 *)(lVar4 + 0x840);
    uStack_38 = *(undefined8 *)(lVar4 + 0x858);
    uStack_40 = *(undefined8 *)(lVar4 + 0x850);
    iVar2 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_50,0);
    if (0 < iVar2) {
                    /* try { // try from 026130fc to 027130ff has its CatchHandler @ 026135b0 */
                    /* try { // try from 0261310c to 0271311b has its CatchHandler @ 026135c8 */
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                        (param_2,0x46e6cf5d,0);
                    /* try { // try from 02613124 to 0271312f has its CatchHandler @ 026135cc */
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) ||
         (uVar5 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                            (*(long *)(lVar4 + 0x20),0), param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02613180 to 0271318b has its CatchHandler @ 02613574 */
        FUN_021f06a0();
      }
      FUN_02333498(param_3,uVar5,*(undefined8 *)PTR_DAT_049c3e40);
                    /* try { // try from 0261314c to 02713153 has its CatchHandler @ 026135d0 */
      uVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                        (uVar5,0x297c9509,0);
      CoreStreak__UpdateBarView_2513184(param_1,uVar5,0,0);
    }
  }
                    /* try { // try from 0261317c to 0271317f has its CatchHandler @ 0261356c */
  return;
}

