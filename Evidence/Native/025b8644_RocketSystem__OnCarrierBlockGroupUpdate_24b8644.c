/* IL2CPP: RocketSystem$$OnCarrierBlockGroupUpdate
void RocketSystem__OnCarrierBlockGroupUpdate (RocketSystem_o* __this, CarrierBlockGroupUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$OnCarrierBlockGroupUpdate
   void RocketSystem__OnCarrierBlockGroupUpdate (RocketSystem_o* __this,
   CarrierBlockGroupUpdateMessage_o m, const MethodInfo* method); */

void RocketSystem__OnCarrierBlockGroupUpdate_24b8644(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f4bba5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c25a0);
    FUN_021f03f8(PTR_DAT_049c25a8);
    FUN_021f03f8(PTR_DAT_049c25b0);
    FUN_021f03f8(PTR_DAT_049c25d0);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bba5 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_025b886c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = CoreStreak__IsUnlocked_2512e64(*(long *)(param_1 + 0x68),0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_025b886c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xa8),&uStack_88,*(undefined8 *)PTR_DAT_049c25d0);
    puVar7 = PTR_DAT_049c25b0;
    puVar6 = PTR_DAT_049c25a8;
    puVar5 = PTR_DAT_049c1818;
    puVar4 = PTR_DAT_049c1558;
    puVar3 = PTR_DAT_049b3b98;
    uStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    puStack_80 = &uStack_70;
    uStack_88 = 0;
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_70,*(undefined8 *)puVar6), (uVar8 & 1) != 0) {
      lVar12 = *(long *)puVar7;
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_58,uVar11,uVar1);
      lVar10 = lStack_58;
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lStack_58,0,&lStack_58,*(undefined8 *)puVar4);
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar13 = *(long **)(lStack_58 + 0x100);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)0x0;
      }
      else if (*plVar13 != *(long *)puVar5) {
        plVar13 = (long *)0x0;
      }
      uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(plVar13,param_2,0);
      if ((uVar8 & 1) != 0) {
        RocketSystem__ApplyFakeHiddenMaterial_24b88e4(param_1,lVar10);
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)PTR_DAT_049c25a0);
  }
  return;
}

