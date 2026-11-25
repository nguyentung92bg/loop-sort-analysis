/* IL2CPP: TunnelCarrier$$UpdateView
void TunnelCarrier__UpdateView (TunnelCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrier$$UpdateView
   void TunnelCarrier__UpdateView (TunnelCarrier_o* __this, const MethodInfo* method); */

void TunnelCarrier__UpdateView_24ad5dc(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uStack_14;
  
  if ((bRam0000000004f4bb45 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4bb45 = 1;
  }
  uStack_14 = 0;
  if (((*(long *)(param_1 + 0xb8) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x1e0), lVar4 != 0)) &&
     (*(long *)(param_1 + 0xb0) != 0)) {
    iVar1 = *(int *)(*(long *)(param_1 + 0xb0) + 0x154);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(lVar4 + 0x18) / iVar1;
    }
    uStack_14 = iVar2 - 1U & ((int)(iVar2 - 1U) >> 0x1f ^ 0xffffffffU);
    uVar3 = System_Int32__ToString_30fbaa0(&uStack_14,0);
                    /* try { // try from 025ad65c to 026ad6e7 has its CatchHandler @ 025ad65c
                       catch() { ... } // from try @ 025ad65c with catch @ 025ad65c
                       catch() { ... } // from try @ 025ad798 with catch @ 025ad65c
                       catch() { ... } // from try @ 025ad818 with catch @ 025ad65c */
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar5,0x5cac0bbb,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

