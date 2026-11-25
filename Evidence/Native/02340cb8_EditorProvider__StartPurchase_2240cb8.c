/* IL2CPP: EditorProvider$$StartPurchase
void EditorProvider__StartPurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorProvider$$StartPurchase
   void EditorProvider__StartPurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args,
   const MethodInfo* method); */

void EditorProvider__StartPurchase_2240cb8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b3d18;
  if ((bRam0000000004f49b0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b3d18);
    FUN_021f03f8(PTR_DAT_049b5350);
    bRam0000000004f49b0f = 1;
  }
  plVar3 = (long *)FUN_021f04e4(*(undefined8 *)puVar1,5);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_02340eb0:
    uVar5 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar6;
    thunk_FUN_021f190c(plVar3 + 4,lVar6);
    uStack_24 = *(undefined4 *)((long)param_2 + 0xc);
    lVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
    if ((lVar6 != 0) &&
       (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_02340eb0;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar6;
      thunk_FUN_021f190c(plVar3 + 5,lVar6);
      lVar6 = param_2[3];
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_02340eb0;
      if (2 < *(uint *)(plVar3 + 3)) {
                    /* catch() { ... } // from try @ 02340e7c with catch @ 02340dd0 */
        plVar3[6] = lVar6;
        thunk_FUN_021f190c(plVar3 + 6,lVar6);
        lVar6 = param_2[4];
                    /* try { // try from 02340df0 to 02440e03 has its CatchHandler @ 02340ec0 */
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_02340eb0;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar6;
          thunk_FUN_021f190c(plVar3 + 7,lVar6);
          lVar6 = System_Int32__ToString_30fbaa0(param_2 + 5,0);
                    /* try { // try from 02340e20 to 02440e27 has its CatchHandler @ 02340ea8 */
                    /* try { // try from 02340e38 to 02440e47 has its CatchHandler @ 02340ea4 */
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_02340eb0;
          puVar2 = PTR_DAT_049b5350;
          puVar1 = PTR_DAT_049b3c58;
          if (4 < *(uint *)(plVar3 + 3)) {
                    /* try { // try from 02340e48 to 02440e57 has its CatchHandler @ 02340ea0 */
            plVar3[8] = lVar6;
            thunk_FUN_021f190c(plVar3 + 8,lVar6);
                    /* try { // try from 02340e74 to 02440e7b has its CatchHandler @ 02340e9c */
            uVar5 = System_String__Format_2f7e034(*(undefined8 *)puVar2,plVar3,0);
                    /* try { // try from 02340e7c to 02440edb has its CatchHandler @ 02340dd0 */
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar1);
            }
            UnityEngine_Debug__Log_3bd0be4(uVar5,0);
                    /* catch() { ... } // from try @ 02340e74 with catch @ 02340e9c */
                    /* catch() { ... } // from try @ 02340e48 with catch @ 02340ea0 */
                    /* catch() { ... } // from try @ 02340e38 with catch @ 02340ea4 */
                    /* catch() { ... } // from try @ 02340e20 with catch @ 02340ea8 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

