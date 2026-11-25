/* IL2CPP: AnalyticsModule$$ConsumeItem
void AnalyticsModule__ConsumeItem (AnalyticsModule_o* __this, EconomyConsumeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$ConsumeItem
   void AnalyticsModule__ConsumeItem (AnalyticsModule_o* __this, EconomyConsumeMessage_o m, const
   MethodInfo* method); */

void AnalyticsModule__ConsumeItem_253f124(long param_1,undefined8 param_2)

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
  
  if ((bRam0000000004f4bfa8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfa8 = 1;
  }
  puVar1 = PTR_DAT_049ca4d8;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 0263f174 to 0273f2df has its CatchHandler @ 0263f174
                       catch() { ... } // from try @ 0263f174 with catch @ 0263f174
                       catch() { ... } // from try @ 0263fc34 with catch @ 0263f174
                       catch() { ... } // from try @ 0263fd64 with catch @ 0263f174
                       catch() { ... } // from try @ 0263feb0 with catch @ 0263f174
                       catch() { ... } // from try @ 0263fee0 with catch @ 0263f174
                       catch() { ... } // from try @ 0263ff78 with catch @ 0263f174 */
    func_0x04608620(auStack_d0,param_2,0x58);
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_0263f1cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)puVar1,8);
LAB_0263f1cc:
    pcVar7 = (code *)*puVar2;
    func_0x04608620(auStack_78,auStack_d0,0x58);
    (*pcVar7)(plVar6,auStack_78,puVar2[1]);
  }
  return;
}

