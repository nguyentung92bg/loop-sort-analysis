/* IL2CPP: VaultCarrier$$Open
void VaultCarrier__Open (VaultCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VaultCarrier$$Open
   void VaultCarrier__Open (VaultCarrier_o* __this, const MethodInfo* method); */

void VaultCarrier__Open_24afdb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 025afdc4 to 026afdd3 has its CatchHandler @ 025afdd4 */
  if ((bRam0000000004f4bb55 & 1) == 0) {
                    /* catch() { ... } // from try @ 025afd34 with catch @ 025afdd4
                       catch() { ... } // from try @ 025afdc4 with catch @ 025afdd4 */
                    /* try { // try from 025afdd8 to 026afddb has its CatchHandler @ 025afde4 */
                    /* try { // try from 025afddc to 026afde7 has its CatchHandler @ 025afbac */
    FUN_021f03f8(PTR_DAT_049c1b50);
                    /* catch() { ... } // from try @ 025afdd8 with catch @ 025afde4 */
                    /* try { // try from 025afde8 to 026afe73 has its CatchHandler @ 025afde8
                       catch() { ... } // from try @ 025afde8 with catch @ 025afde8
                       catch() { ... } // from try @ 025aff18 with catch @ 025afde8
                       catch() { ... } // from try @ 025aff84 with catch @ 025afde8
                       catch() { ... } // from try @ 025affd0 with catch @ 025afde8 */
    FUN_021f03f8(PTR_DAT_049c6a20);
    bRam0000000004f4bb55 = 1;
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar3 != 0) {
    Carrier__EnableInteraction_2404130(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0xb8);
    uVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar3 != 0) {
      Carrier__EnableTransfer_23fe4dc(lVar3,uVar2,0);
      if ((*(long *)(param_1 + 0xa0) != 0) &&
         (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa0),0),
         puVar1 = PTR_DAT_049c6a20, lVar3 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar3,0,0);
        lVar3 = *(long *)(param_1 + 0xa8);
                    /* try { // try from 025afe74 to 026afe8f has its CatchHandler @ 025aff98 */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar3 != 0) {
          UnityEngine_Animator__SetTrigger_3bae338
                    (lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
          if (*(long *)(param_1 + 0xb0) != 0) {
                    /* try { // try from 025afea8 to 026afeab has its CatchHandler @ 025aff90 */
            AudioModule__GetPlayer_2530858(&uStack_60,*(long *)(param_1 + 0xb0),0);
            uStack_38 = uStack_58;
            uStack_40 = uStack_60;
            uStack_28 = uStack_48;
            uStack_30 = uStack_50;
            if ((*(long *)(param_1 + 0xb0) != 0) &&
               (lVar3 = *(long *)(*(long *)(param_1 + 0xb0) + 0x10), lVar3 != 0)) {
                    /* try { // try from 025afecc to 026afedb has its CatchHandler @ 025aff94 */
              uVar2 = *(undefined8 *)(lVar3 + 0xd0);
              if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
                FUN_021f0574();
              }
                    /* try { // try from 025afeec to 026afeef has its CatchHandler @ 025aff90 */
              AudioPlayer__Play_2530c98(&uStack_40,uVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

