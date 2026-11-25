/* IL2CPP: BlockGroupShapeSystem$$OnCarrierBlockGroupUpdate
void BlockGroupShapeSystem__OnCarrierBlockGroupUpdate (BlockGroupShapeSystem_o* __this, CarrierBlockGroupUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockGroupShapeSystem$$OnCarrierBlockGroupUpdate
   void BlockGroupShapeSystem__OnCarrierBlockGroupUpdate (BlockGroupShapeSystem_o* __this,
   CarrierBlockGroupUpdateMessage_o m, const MethodInfo* method); */

void BlockGroupShapeSystem__OnCarrierBlockGroupUpdate_23e0e08(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  if ((bRam0000000004f4b5d6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1640);
    FUN_021f03f8(PTR_DAT_049c1648);
    FUN_021f03f8(PTR_DAT_049c1650);
    FUN_021f03f8(PTR_DAT_049c1658);
                    /* try { // try from 024e0e60 to 025e0e87 has its CatchHandler @ 024e1548 */
    bRam0000000004f4b5d6 = 1;
  }
  puVar5 = PTR_DAT_049c1650;
  puVar4 = PTR_DAT_049c1648;
  puVar3 = PTR_DAT_049c1640;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x120) != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_2 + 0x120),&uStack_78,*(undefined8 *)PTR_DAT_049c1658);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_60,*(undefined8 *)puVar4);
                    /* try { // try from 024e0ecc to 025e0ef3 has its CatchHandler @ 024e1540 */
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_60,*(undefined8 *)puVar3);
        return;
      }
      lVar10 = *(long *)puVar5;
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_60,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 024e0f34 to 025e0f5b has its CatchHandler @ 024e1544 */
      func_0x04608620(&lStack_38,uVar9,uVar1);
      lVar8 = lStack_38;
      if (lStack_38 == 0) break;
      lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar7,0);
      if ((uVar6 & 1) == 0) {
        BlockGroupShapeSystem__RemoveShape_23e13a8(param_1,param_2,lVar8);
      }
      else {
        BlockGroupShapeSystem__CreateShape_23e1024(param_1,param_2,lVar8);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024e0fb4 to 025e0fdb has its CatchHandler @ 024e1388 */
  FUN_021f06a0();
}

