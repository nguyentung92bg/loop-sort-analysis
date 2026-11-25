/* IL2CPP: BlockTrigger$$Offer
void BlockTrigger__Offer (BlockTrigger_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTrigger$$Offer
   void BlockTrigger__Offer (BlockTrigger_o* __this, UnityEngine_Collider_o* other, const
   MethodInfo* method); */

void BlockTrigger__Offer_23e9184(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b60e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c30);
    bRam0000000004f4b60e = 1;
  }
  uStack_28 = 0;
  if (param_2 != 0) {
                    /* try { // try from 024e91d0 to 025e91d3 has its CatchHandler @ 024e91f0 */
                    /* try { // try from 024e91d4 to 025e91d7 has its CatchHandler @ 024e91e8 */
    uVar1 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                      (param_2,&uStack_28,*(undefined8 *)PTR_DAT_049c1c30);
                    /* try { // try from 024e91d8 to 025e91db has its CatchHandler @ 024e91e4 */
                    /* try { // try from 024e91dc to 025e9213 has its CatchHandler @ 024e8ea4 */
    if (((uVar1 & 1) != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e91d8 with catch @ 024e91e4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e91d4 with catch @ 024e91e8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e9134 with catch @ 024e91ec
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e91d0 with catch @ 024e91f0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e90f4 with catch @ 024e91f4
                        */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),uStack_28,*(undefined8 *)(lVar2 + 0x28));
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024e9090 with catch @ 024e91f8
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

