/* IL2CPP: BlockOutlineSystem$$OnBlockNextTransferUpdate
void BlockOutlineSystem__OnBlockNextTransferUpdate (BlockOutlineSystem_o* __this, BlockNextTransferUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockOutlineSystem$$OnBlockNextTransferUpdate
   void BlockOutlineSystem__OnBlockNextTransferUpdate (BlockOutlineSystem_o* __this,
   BlockNextTransferUpdateMessage_o m, const MethodInfo* method); */

void BlockOutlineSystem__OnBlockNextTransferUpdate_23e2ec4(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000004f4b5e8 & 1) == 0) {
                    /* try { // try from 024e2ee8 to 025e2f03 has its CatchHandler @ 024e2fb4 */
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c1548);
                    /* try { // try from 024e2f04 to 025e2f47 has its CatchHandler @ 024e2558 */
                    /* catch() { ... } // from try @ 024e2cf4 with catch @ 024e2f08 */
    FUN_021f03f8(PTR_DAT_049c1560);
                    /* catch() { ... } // from try @ 024e2d84 with catch @ 024e2f0c */
                    /* catch() { ... } // from try @ 024e2cb0 with catch @ 024e2f10 */
                    /* catch() { ... } // from try @ 024e2c48 with catch @ 024e2f14 */
    FUN_021f03f8(PTR_DAT_049c1568);
                    /* catch() { ... } // from try @ 024e2bec with catch @ 024e2f18 */
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b5e8 = 1;
  }
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != 0) {
    plVar10 = *(long **)(lVar9 + 0x100);
                    /* try { // try from 024e2f48 to 025e2f4b has its CatchHandler @ 024e2fa4 */
    if ((plVar10 == (long *)0x0) || (*plVar10 != *(long *)PTR_DAT_049c1818)) {
      uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
                    /* try { // try from 024e2f68 to 025e2f6b has its CatchHandler @ 024e2fa0 */
                    /* try { // try from 024e2f6c to 025e2f8b has its CatchHandler @ 024e2558 */
      if ((bRam0000000004f4b5ea & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c1820);
        FUN_021f03f8(PTR_DAT_049c1828);
        bRam0000000004f4b5ea = 1;
      }
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                          (*(long *)(param_1 + 0x58),uVar5,&uStack_70,
                           *(undefined8 *)PTR_DAT_049c1828);
        if ((uVar8 & 1) == 0) {
          return;
        }
        lVar9 = *(long *)(param_1 + 0x48);
        if (lVar9 != 0) {
          func_0x04608620(auStack_b8,&uStack_70,0x48);
          OutlineModule__Remove_254ecd4(lVar9,auStack_b8,0);
          if (*(long *)(param_1 + 0x58) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                      (*(long *)(param_1 + 0x58),uVar5,*(undefined8 *)PTR_DAT_049c1820);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar4 = Carrier__GetBlockIdx_2408c50(plVar10,lVar9,0);
                    /* try { // try from 024e2f8c to 025e2f9b has its CatchHandler @ 024e2fa4 */
    if ((*(long *)(param_1 + 0x40) != 0) && (lVar6 = plVar10[0x24], lVar6 != 0)) {
                    /* catch() { ... } // from try @ 024e2f68 with catch @ 024e2fa0 */
      iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x154);
                    /* catch() { ... } // from try @ 024e2f48 with catch @ 024e2fa4
                       catch() { ... } // from try @ 024e2f8c with catch @ 024e2fa4 */
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar4 / iVar1;
      }
                    /* try { // try from 024e2fac to 025e2faf has its CatchHandler @ 024e3014 */
                    /* try { // try from 024e2fb0 to 025e2fd3 has its CatchHandler @ 024e2558 */
      if (iVar3 < *(int *)(lVar6 + 0x18)) {
                    /* catch() { ... } // from try @ 024e2d38 with catch @ 024e2fb4
                       catch() { ... } // from try @ 024e2dc8 with catch @ 024e2fb4
                       catch() { ... } // from try @ 024e2ee8 with catch @ 024e2fb4 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar6,iVar3,&lStack_38,*(undefined8 *)PTR_DAT_049c1568);
        lVar6 = lStack_38;
      }
      else {
                    /* try { // try from 024e2fd4 to 025e2fd7 has its CatchHandler @ 024e2ffc */
        lVar6 = 0;
      }
                    /* try { // try from 024e2fd8 to 025e2fff has its CatchHandler @ 024e2558 */
      bVar2 = *(byte *)(param_2 + 0x10);
      uVar8 = Carrier__CanComplete_2409e98(plVar10,0);
                    /* catch() { ... } // from try @ 024e2fd4 with catch @ 024e2ffc */
                    /* try { // try from 024e3000 to 025e3007 has its CatchHandler @ 024e3010 */
      if (((uVar8 & 1) != 0) || ((bVar2 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar6,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar6 == 0) goto LAB_024e3130;
          uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0);
          BlockOutlineSystem__RemoveOutlineInstance_23e3134(param_1,uVar5);
        }
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
LAB_024e3118:
        BlockOutlineSystem__RemoveOutlineInstance_23e3134(param_1,uVar5);
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                    /* try { // try from 024e3008 to 025e3017 has its CatchHandler @ 024e2558 */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 024e3000 with catch @ 024e3010 */
                    /* catch() { ... } // from try @ 024e2fac with catch @ 024e3014 */
      uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar6,0,0);
      if ((uVar8 & 1) != 0) {
        if (((plVar10[0x25] == 0) ||
            (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                       (plVar10[0x25],iVar3,&lStack_38,*(undefined8 *)PTR_DAT_049c1560),
            lStack_38 == 0)) ||
           (uVar5 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(lStack_38,0), lVar6 == 0))
        goto LAB_024e3130;
        uVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0);
        BlockOutlineSystem__CreateOutlineInstance_23e3200(param_1,uVar7,uVar5);
      }
      if (*(long *)(lVar9 + 0x138) != 0) {
        uVar8 = UnityEngine_Renderer__get_enabled_3bdc9fc(*(long *)(lVar9 + 0x138),0);
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
        if ((uVar8 & 1) == 0) goto LAB_024e3118;
        if (*(long *)(lVar9 + 0x108) != 0) {
          uVar7 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(*(long *)(lVar9 + 0x108),0);
          BlockOutlineSystem__CreateOutlineInstance_23e3200(param_1,uVar5,uVar7);
          return;
        }
      }
    }
  }
LAB_024e3130:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

