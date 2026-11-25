/* IL2CPP: AreasMonitor$$GetItemsSize
UnityEngine_Vector2_o AreasMonitor__GetItemsSize (AreasMonitor_o* __this, int32_t itemsCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$GetItemsSize
   UnityEngine_Vector2_o AreasMonitor__GetItemsSize (AreasMonitor_o* __this, int32_t itemsCount,
   const MethodInfo* method); */

undefined1  [16] AreasMonitor__GetItemsSize_24370d8(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((bRam0000000004f4b7fa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b38);
    FUN_021f03f8(PTR_DAT_049c3b40);
    FUN_021f03f8(PTR_DAT_049c3b48);
    FUN_021f03f8(PTR_DAT_049c3b60);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c3a88);
    bRam0000000004f4b7fa = 1;
  }
  puVar7 = PTR_DAT_049c3b48;
  puVar6 = PTR_DAT_049c3b40;
  puVar5 = PTR_DAT_049c3b38;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  if (0 < param_2) {
    iVar14 = 0;
    do {
      if (*(long *)(param_1 + 0xd0) == 0) {
LAB_025373ac:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar1 = *(int *)(*(long *)(param_1 + 0xd0) + 0x28);
      iVar4 = iVar1 - iVar14;
      if (iVar4 == 0 || iVar1 < iVar14) break;
      if ((*(long *)(param_1 + 0x98) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x50), lVar8 == 0)) goto LAB_025373ac;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar4);
      lVar8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar8,&uStack_b8,*(undefined8 *)PTR_DAT_049c3a88);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x30) == 0)) goto LAB_025373ac;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(lVar8 + 0x30),&uStack_b8,*(undefined8 *)PTR_DAT_049c3b60);
      uStack_a0 = uStack_b8;
      uStack_b8 = 0;
      puStack_98 = puStack_b0;
      uStack_90 = uStack_a8;
      puStack_b0 = &uStack_a0;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_a0,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
        lVar13 = *(long *)puVar7;
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar3 = *(ushort *)(lVar10 + 0x135);
        lVar11 = lVar10;
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar10 = *(long *)(lVar13 + 0x20);
          uVar3 = *(ushort *)(lVar10 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&uStack_a0,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_88,uVar12,uVar2);
        if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_88 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_a0,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_025373ac;
      UnityEngine_RectOffset__get_vertical_3bd7224(*(long *)(param_1 + 0x100),0);
      AreasMonitor__IsClouded_2436cf8(param_1,lVar8);
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_2);
  }
  return ZEXT816(0);
}

