/* IL2CPP: AnalyticsModule$$AddItem
void AnalyticsModule__AddItem (AnalyticsModule_o* __this, EconomyAddMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$AddItem
   void AnalyticsModule__AddItem (AnalyticsModule_o* __this, EconomyAddMessage_o m, const
   MethodInfo* method); */

void AnalyticsModule__AddItem_253f048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_d0 [88];
  undefined1 auStack_78 [88];
  
                    /* try { // try from 0263f054 to 0273f057 has its CatchHandler @ 0263f060 */
                    /* catch() { ... } // from try @ 0263f054 with catch @ 0263f060 */
                    /* try { // try from 0263f064 to 0273f06b has its CatchHandler @ 0263f074 */
  if ((bRam0000000004f4bfa7 & 1) == 0) {
                    /* try { // try from 0263f06c to 0273f077 has its CatchHandler @ 0263ece8 */
    FUN_021f03f8(PTR_DAT_049ca4d8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0263f064 with catch @ 0263f074
                        */
    bRam0000000004f4bfa7 = 1;
  }
  puVar1 = PTR_DAT_049ca4d8;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    func_0x04608620(auStack_d0,param_2,0x58);
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_0263f0f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)puVar1,7);
LAB_0263f0f0:
    pcVar7 = (code *)*puVar2;
    func_0x04608620(auStack_78,auStack_d0,0x58);
    (*pcVar7)(plVar6,auStack_78,puVar2[1]);
  }
  return;
}

