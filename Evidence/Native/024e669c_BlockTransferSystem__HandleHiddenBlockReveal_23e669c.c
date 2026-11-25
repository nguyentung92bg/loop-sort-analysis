/* IL2CPP: BlockTransferSystem$$HandleHiddenBlockReveal
void BlockTransferSystem__HandleHiddenBlockReveal (BlockTransferSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HandleHiddenBlockReveal
   void BlockTransferSystem__HandleHiddenBlockReveal (BlockTransferSystem_o* __this, Carrier_o*
   carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void BlockTransferSystem__HandleHiddenBlockReveal_23e669c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
                    /* try { // try from 024e66b8 to 025e66df has its CatchHandler @ 024e6a24 */
  if ((bRam0000000004f4b5f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ac0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1ac8);
                    /* try { // try from 024e672c to 025e6737 has its CatchHandler @ 024e6a08 */
    bRam0000000004f4b5f8 = 1;
  }
  puVar3 = PTR_DAT_049b3b98;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 024e673c to 025e674f has its CatchHandler @ 024e6a28 */
  uStack_70 = 0;
  if (param_2 == 0) {
LAB_024e68f8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = Carrier__GetNextFirstBlock_2409e1c(param_2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 024e6768 to 025e676b has its CatchHandler @ 024e69f4 */
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
    if (lVar7 == 0) goto LAB_024e68f8;
    uVar8 = Block__TryGetFeature_23dc908(lVar7,1,&uStack_60);
                    /* try { // try from 024e67ac to 025e67b7 has its CatchHandler @ 024e6a04 */
    if (((uVar8 & 1) != 0) &&
       (uVar8 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                          (lVar7,&lStack_50,*(undefined8 *)PTR_DAT_049c1ac0), (uVar8 & 1) != 0)) {
      if (lStack_50 == 0) goto LAB_024e68f8;
      if (*(char *)(lStack_50 + 0xb8) == '\0') {
        if (param_3 == 0) goto LAB_024e68f8;
                    /* try { // try from 024e67cc to 025e67d7 has its CatchHandler @ 024e6a08 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (param_3,&uStack_98,*(undefined8 *)PTR_DAT_049c14f0);
        puVar6 = PTR_DAT_049c1ac8;
        puVar5 = PTR_DAT_049c14e8;
        puVar4 = PTR_DAT_049c14e0;
        puVar3 = PTR_DAT_049c1410;
                    /* try { // try from 024e67f0 to 025e680f has its CatchHandler @ 024e6a0c */
        uStack_78 = puStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        puStack_90 = &uStack_80;
        uStack_98 = 0;
        while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&uStack_80,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          lVar11 = *(long *)puVar5;
                    /* try { // try from 024e6830 to 025e6847 has its CatchHandler @ 024e6a04 */
          lVar9 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
          lVar7 = lVar9;
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
            lVar9 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                      0x60);
                    /* try { // try from 024e6894 to 025e68bb has its CatchHandler @ 024e6a20 */
          func_0x04608620(&lStack_48,uVar10,uVar1);
          lVar7 = lStack_48;
          lVar9 = *(long *)(param_1 + 0xb0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_024f581c(lVar9,*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)puVar6);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_80,*(undefined8 *)PTR_DAT_049c14d8);
      }
    }
  }
  return;
}

