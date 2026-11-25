/* IL2CPP: HiddenBlockSystem$$HandleReveal
void HiddenBlockSystem__HandleReveal (HiddenBlockSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlockSystem$$HandleReveal
   void HiddenBlockSystem__HandleReveal (HiddenBlockSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void HiddenBlockSystem__HandleReveal_23ea648(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4b617 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b617 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (param_2 != 0) {
    lVar2 = Carrier__GetNextFirstBlock_2409e1c(param_2,0);
                    /* try { // try from 024ea6c4 to 025ea6c7 has its CatchHandler @ 024ea70c */
                    /* try { // try from 024ea6c8 to 025ea6cb has its CatchHandler @ 024ea704 */
                    /* try { // try from 024ea6cc to 025ea6cf has its CatchHandler @ 024ea6ec */
                    /* try { // try from 024ea6d0 to 025ea6d3 has its CatchHandler @ 024ea6e4 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024ea6d4 to 025ea73b has its CatchHandler @ 024ea174 */
      FUN_021f0574(*(long *)puVar1);
    }
                    /* catch() { ... } // from try @ 024ea534 with catch @ 024ea6e0 */
                    /* catch() { ... } // from try @ 024ea6d0 with catch @ 024ea6e4 */
                    /* catch() { ... } // from try @ 024ea520 with catch @ 024ea6e8 */
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar2,0,0);
                    /* catch() { ... } // from try @ 024ea6cc with catch @ 024ea6ec */
    if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 024ea554 with catch @ 024ea6f0 */
      if (lVar2 == 0) goto LAB_024ea788;
                    /* catch() { ... } // from try @ 024ea56c with catch @ 024ea6f4 */
                    /* catch() { ... } // from try @ 024ea5c8 with catch @ 024ea6f8 */
                    /* catch() { ... } // from try @ 024ea5fc with catch @ 024ea6fc */
                    /* catch() { ... } // from try @ 024ea618 with catch @ 024ea700 */
      uVar3 = Block__TryGetFeature_23dc908(lVar2,1,&uStack_48);
                    /* catch() { ... } // from try @ 024ea6c8 with catch @ 024ea704 */
      if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 024ea548 with catch @ 024ea708 */
                    /* catch() { ... } // from try @ 024ea6c4 with catch @ 024ea70c */
                    /* catch() { ... } // from try @ 024ea62c with catch @ 024ea710 */
                    /* catch() { ... } // from try @ 024ea5ac with catch @ 024ea714 */
                    /* catch() { ... } // from try @ 024ea584 with catch @ 024ea718 */
        if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024ea4dc with catch @ 024ea71c */
          FUN_021f0574();
        }
                    /* catch() { ... } // from try @ 024ea478 with catch @ 024ea720 */
        auStack_30 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                               (&uStack_38,*(undefined8 *)PTR_DAT_049c14c8);
                    /* try { // try from 024ea73c to 025ea73f has its CatchHandler @ 024ea748 */
                    /* catch() { ... } // from try @ 024ea73c with catch @ 024ea748 */
                    /* try { // try from 024ea74c to 025ea753 has its CatchHandler @ 024ea75c */
        Carrier__FindBlocksWithSameColor_24096a4(param_2,uStack_38,0);
                    /* try { // try from 024ea754 to 025ea75f has its CatchHandler @ 024ea174 */
                    /* catch() { ... } // from try @ 024ea74c with catch @ 024ea75c */
        HiddenBlockSystem__HandleHiddenBlocks_23ea1d8(param_1,param_2,uStack_38,1);
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (auStack_30,*(undefined8 *)PTR_DAT_049c14f8);
      }
    }
    return;
  }
LAB_024ea788:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

