/* IL2CPP: StickyBlockGroupSystem$$OnCarrierComplete
void StickyBlockGroupSystem__OnCarrierComplete (StickyBlockGroupSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroupSystem$$OnCarrierComplete
   void StickyBlockGroupSystem__OnCarrierComplete (StickyBlockGroupSystem_o* __this,
   CarrierCompleteMessage_o m, const MethodInfo* method); */

void StickyBlockGroupSystem__OnCarrierComplete_23f3294(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((bRam0000000004f4b64d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2180);
    FUN_021f03f8(PTR_DAT_049c2188);
    FUN_021f03f8(PTR_DAT_049c2190);
    FUN_021f03f8(PTR_DAT_049c2198);
    FUN_021f03f8(PTR_DAT_049c21a0);
    bRam0000000004f4b64d = 1;
  }
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_024f340c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                    (*(long *)(param_1 + 0x78),param_2,&lStack_30,*(undefined8 *)PTR_DAT_049c2180);
  if ((uVar5 & 1) != 0) {
    if (lStack_30 == 0) goto LAB_024f340c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_30,&uStack_48,*(undefined8 *)PTR_DAT_049c21a0);
    puVar4 = PTR_DAT_049c2198;
    puVar3 = PTR_DAT_049c2190;
    while (uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      lVar9 = *(long *)puVar4;
      lVar6 = *(long *)(lVar9 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      lVar7 = lVar6;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
        lVar6 = *(long *)(lVar9 + 0x20);
        uVar2 = *(ushort *)(lVar6 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar8 = thunk_FUN_0224e54c(&uStack_48,
                                 *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_28,uVar8,uVar1);
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StickyBlockGroup__TryComplete_23f26f0();
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_48,*(undefined8 *)PTR_DAT_049c2188);
  }
  return;
}

