/* IL2CPP: EditorProvider$$CompletePurchase
void EditorProvider__CompletePurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EditorProvider$$CompletePurchase
   void EditorProvider__CompletePurchase (EditorProvider_o* __this, AnalyticsPurchaseEvent_o args,
   const MethodInfo* method); */

void EditorProvider__CompletePurchase_2240ec0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 02340df0 with catch @ 02340ec0 */
  puVar1 = PTR_DAT_049b3d18;
  if ((bRam0000000004f49b10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b3d18);
    FUN_021f03f8(PTR_DAT_049b5358);
    bRam0000000004f49b10 = 1;
  }
  plVar3 = (long *)FUN_021f04e4(*(undefined8 *)puVar1,5);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *param_2;
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_023410b8:
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
    goto LAB_023410b8;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar6;
      thunk_FUN_021f190c(plVar3 + 5,lVar6);
      lVar6 = param_2[3];
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_023410b8;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar6;
        thunk_FUN_021f190c(plVar3 + 6,lVar6);
        lVar6 = param_2[4];
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_023410b8;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
          plVar3[7] = lVar6;
          thunk_FUN_021f190c(plVar3 + 7,lVar6);
          lVar6 = System_Int32__ToString_30fbaa0(param_2 + 5,0);
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_0222c938(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_023410b8;
          puVar2 = PTR_DAT_049b5358;
          puVar1 = PTR_DAT_049b3c58;
                    /* try { // try from 0234104c to 0244116f has its CatchHandler @ 0234104c
                       catch(type#1 @ 00000000) { ... } // from try @ 0234104c with catch @ 0234104c
                       catch(type#1 @ 00000000) { ... } // from try @ 02341190 with catch @ 0234104c
                       catch(type#1 @ 00000000) { ... } // from try @ 023412a0 with catch @ 0234104c
                        */
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar6;
            thunk_FUN_021f190c(plVar3 + 8,lVar6);
            uVar5 = System_String__Format_2f7e034(*(undefined8 *)puVar2,plVar3,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar1);
            }
            UnityEngine_Debug__Log_3bd0be4(uVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

