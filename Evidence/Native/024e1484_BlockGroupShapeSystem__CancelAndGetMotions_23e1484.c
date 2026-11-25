/* IL2CPP: BlockGroupShapeSystem$$CancelAndGetMotions
LitMotion_CompositeMotionHandle_o* BlockGroupShapeSystem__CancelAndGetMotions (BlockGroupShapeSystem_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockGroupShapeSystem$$CancelAndGetMotions
   LitMotion_CompositeMotionHandle_o* BlockGroupShapeSystem__CancelAndGetMotions
   (BlockGroupShapeSystem_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const
   MethodInfo* method); */

long BlockGroupShapeSystem__CancelAndGetMotions_23e1484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  if ((bRam0000000004f4b5da & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049c16a8);
    FUN_021f03f8(PTR_DAT_049c16b0);
    bRam0000000004f4b5da = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 024e1450 with catch @ 024e14ec */
                    /* try { // try from 024e14f0 to 025e14f7 has its CatchHandler @ 024e15bc */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
              (*(long *)(param_1 + 0x78),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c16a8);
                    /* try { // try from 024e14f8 to 025e159b has its CatchHandler @ 024e04a4 */
    if (lStack_28 == 0) {
                    /* catch() { ... } // from try @ 024e0ab4 with catch @ 024e14fc */
                    /* catch() { ... } // from try @ 024e140c with catch @ 024e1500 */
                    /* catch() { ... } // from try @ 024e0ad0 with catch @ 024e1504 */
                    /* catch() { ... } // from try @ 024e1408 with catch @ 024e1508 */
      lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c16a0);
                    /* catch() { ... } // from try @ 024e1404 with catch @ 024e150c */
                    /* catch() { ... } // from try @ 024e0c44 with catch @ 024e1510 */
                    /* catch() { ... } // from try @ 024e13fc with catch @ 024e1514 */
      LitMotion_CompositeMotionHandle___ctor_2e8ad94(lVar1,0);
                    /* catch() { ... } // from try @ 024e13f8 with catch @ 024e1518 */
                    /* catch() { ... } // from try @ 024e13f4 with catch @ 024e151c */
      lStack_28 = lVar1;
      if (lVar1 == 0) goto LAB_024e1560;
    }
                    /* catch() { ... } // from try @ 024e12e4 with catch @ 024e1520 */
                    /* catch() { ... } // from try @ 024e0a84 with catch @ 024e1524 */
                    /* catch() { ... } // from try @ 024e13f0 with catch @ 024e1528 */
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(lStack_28,0);
                    /* catch() { ... } // from try @ 024e13e8 with catch @ 024e152c */
                    /* catch() { ... } // from try @ 024e13e4 with catch @ 024e1530 */
    if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 024e13e0 with catch @ 024e1534 */
                    /* catch() { ... } // from try @ 024e13dc with catch @ 024e1538 */
                    /* catch() { ... } // from try @ 024e0a44 with catch @ 024e153c */
                    /* catch() { ... } // from try @ 024e0ecc with catch @ 024e1540 */
                    /* catch() { ... } // from try @ 024e0f34 with catch @ 024e1544 */
                    /* catch() { ... } // from try @ 024e0e60 with catch @ 024e1548 */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x78),param_2,lStack_28,*(undefined8 *)PTR_DAT_049c16b0);
                    /* catch() { ... } // from try @ 024e0810 with catch @ 024e1554 */
                    /* catch() { ... } // from try @ 024e087c with catch @ 024e1558 */
                    /* catch() { ... } // from try @ 024e07a4 with catch @ 024e155c */
      return lStack_28;
    }
  }
LAB_024e1560:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 024e0b6c with catch @ 024e1560 */
  FUN_021f06a0();
}

