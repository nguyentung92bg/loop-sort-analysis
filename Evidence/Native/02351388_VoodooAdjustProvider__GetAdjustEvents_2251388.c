/* IL2CPP: VoodooAdjustProvider$$GetAdjustEvents
AdjustEventSheet_o* VoodooAdjustProvider__GetAdjustEvents (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$GetAdjustEvents
   AdjustEventSheet_o* VoodooAdjustProvider__GetAdjustEvents (const MethodInfo* method); */

undefined8 VoodooAdjustProvider__GetAdjustEvents_2251388(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49b94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b94 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = **(long **)(lVar2 + 0xb8);
  if (lVar3 == 0) {
                    /* try { // try from 02351410 to 02451483 has its CatchHandler @ 02351410
                       catch() { ... } // from try @ 02351410 with catch @ 02351410
                       catch() { ... } // from try @ 023514b8 with catch @ 02351410 */
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar2 == 0) goto LAB_023514a0;
    FUN_0235c744(*(undefined8 *)(lVar2 + 0x50),&uStack_18,*(undefined8 *)PTR_DAT_049b5f78);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      lVar2 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar2 + 0xb8) = uStack_18;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),uStack_18);
  }
  else {
    if (*(int *)(lVar2 + 0xe4) != 0) goto LAB_02351490;
    FUN_021f0574();
  }
                    /* try { // try from 02351484 to 0245148f has its CatchHandler @ 02351514 */
  lVar3 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar3 == 0) {
LAB_023514a0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023514a0 to 024514a7 has its CatchHandler @ 02351500 */
    FUN_021f06a0();
  }
LAB_02351490:
  return *(undefined8 *)(lVar3 + 0x138);
}

