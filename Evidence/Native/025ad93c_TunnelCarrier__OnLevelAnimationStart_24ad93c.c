/* IL2CPP: TunnelCarrier$$OnLevelAnimationStart
void TunnelCarrier__OnLevelAnimationStart (TunnelCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrier$$OnLevelAnimationStart
   void TunnelCarrier__OnLevelAnimationStart (TunnelCarrier_o* __this, const MethodInfo* method); */

void TunnelCarrier__OnLevelAnimationStart_24ad93c(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad8fc with catch @ 025ad948
                        */
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad8d8 with catch @ 025ad94c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ad8ac with catch @ 025ad950
                        */
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
                    /* try { // try from 025ad96c to 026ad96f has its CatchHandler @ 025ad978 */
    cRam0000000004f4a233 = '\x01';
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 025ad96c with catch @ 025ad978 */
                    /* try { // try from 025ad97c to 026ad983 has its CatchHandler @ 025ad98c */
                    /* try { // try from 025ad984 to 026ad98f has its CatchHandler @ 025ad824 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ad97c with catch @ 025ad98c
                        */
  puVar2 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uStack_2c = *puVar2;
  uStack_28 = puVar2[1];
  uStack_24 = puVar2[2];
  if ((bRam0000000004f58a11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a11 = 1;
  }
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58a78 == (code *)0x0) {
      pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
    }
    (*pcRam0000000004f58a78)(lVar3,&uStack_2c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

