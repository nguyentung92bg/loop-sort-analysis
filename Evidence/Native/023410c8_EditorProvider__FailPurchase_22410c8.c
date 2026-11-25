/* IL2CPP: EditorProvider$$FailPurchase
void EditorProvider__FailPurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorProvider$$FailPurchase
   void EditorProvider__FailPurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args, const
   MethodInfo* method); */

void EditorProvider__FailPurchase_22410c8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b3d18;
  if ((bRam0000000004f49b11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b3d18);
    FUN_021f03f8(PTR_DAT_049b5360);
    bRam0000000004f49b11 = 1;
  }
  plVar3 = (long *)FUN_021f04e4(*(undefined8 *)puVar1,6);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = param_2[6];
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_023412f8:
    uVar5 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar6;
    thunk_FUN_021f190c(plVar3 + 4,lVar6);
    lVar6 = *param_2;
                    /* try { // try from 02341170 to 0244118f has its CatchHandler @ 02341260 */
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_023412f8;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
                    /* try { // try from 02341190 to 02441277 has its CatchHandler @ 0234104c */
      plVar3[5] = lVar6;
      thunk_FUN_021f190c(plVar3 + 5,lVar6);
      uStack_24 = *(undefined4 *)((long)param_2 + 0xc);
      lVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_023412f8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar6;
        thunk_FUN_021f190c(plVar3 + 6,lVar6);
        lVar6 = param_2[3];
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_023412f8;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar6;
          thunk_FUN_021f190c(plVar3 + 7,lVar6);
          lVar6 = param_2[4];
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_023412f8;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar6;
            thunk_FUN_021f190c(plVar3 + 8,lVar6);
                    /* catch(type#2 @ 049ac070) { ... } // from try @ 02341170 with catch @ 02341260
                        */
            lVar6 = System_Int32__ToString_30fbaa0(param_2 + 5,0);
                    /* try { // try from 02341278 to 0244127b has its CatchHandler @ 02341298 */
                    /* try { // try from 02341280 to 0244128b has its CatchHandler @ 0234128c */
            if ((lVar6 != 0) &&
               (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_023412f8;
            puVar2 = PTR_DAT_049b5360;
            puVar1 = PTR_DAT_049b3c58;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341280 with catch @ 0234128c
                        */
            if (5 < *(uint *)(plVar3 + 3)) {
                    /* try { // try from 02341290 to 0244129f has its CatchHandler @ 023412a8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341278 with catch @ 02341298
                        */
                    /* try { // try from 023412a0 to 024412ab has its CatchHandler @ 0234104c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02341290 with catch @ 023412a8
                        */
              plVar3[9] = lVar6;
                    /* try { // try from 023412ac to 024412df has its CatchHandler @ 023412ac
                       catch() { ... } // from try @ 023412ac with catch @ 023412ac
                       catch() { ... } // from try @ 023412e4 with catch @ 023412ac */
              thunk_FUN_021f190c(plVar3 + 9,lVar6);
              uVar5 = System_String__Format_2f7e034(*(undefined8 *)puVar2,plVar3,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574(*(long *)puVar1);
              }
                    /* try { // try from 023412e0 to 024412e3 has its CatchHandler @ 023412f4 */
              UnityEngine_Debug__Log_3bd0be4(uVar5,0);
                    /* try { // try from 023412e4 to 02441307 has its CatchHandler @ 023412ac */
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023412e0 with catch @ 023412f4 */
  FUN_021f06a8();
}

