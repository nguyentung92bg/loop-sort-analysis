/* IL2CPP: GridSheet.Layouts$$PostLoad
void GridSheet_Layouts__PostLoad (GridSheet_Layouts_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$PostLoad
   void GridSheet_Layouts__PostLoad (GridSheet_Layouts_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void GridSheet_Layouts__PostLoad_25603e0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar3 = PTR_DAT_049cb430;
  if ((bRam0000000004f4c117 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb938);
    FUN_021f03f8(PTR_DAT_049cb940);
    FUN_021f03f8(PTR_DAT_049cb948);
    FUN_021f03f8(PTR_DAT_049cb950);
    FUN_021f03f8(PTR_DAT_049cb958);
    FUN_021f03f8(PTR_DAT_049cb960);
    FUN_021f03f8(PTR_DAT_049cb968);
    FUN_021f03f8(PTR_DAT_049cb430);
    bRam0000000004f4c117 = 1;
  }
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_a0 = 0;
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar3);
  puVar9 = PTR_DAT_049cb968;
  puVar8 = PTR_DAT_049cb960;
  puVar7 = PTR_DAT_049cb958;
  puVar6 = PTR_DAT_049cb950;
  puVar5 = PTR_DAT_049cb948;
  puVar4 = PTR_DAT_049cb940;
  puVar3 = PTR_DAT_049cb938;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
              (*(long *)(param_1 + 0x18),&uStack_d0,*(undefined8 *)PTR_DAT_049cb938);
    uStack_60 = uStack_b0;
    puStack_d8 = &uStack_80;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_e0 = 0;
    while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                              (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      lVar14 = *(long *)puVar7;
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_d0,uVar13,uVar1);
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                (&uStack_90,&uStack_94,&lStack_a0,*(undefined8 *)puVar8);
      if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02660a38 with catch @ 02660a54 */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                (lStack_a0,*(undefined8 *)puVar9);
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
              (&uStack_80,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                (*(long *)(param_1 + 0x20),&uStack_d0,*(undefined8 *)puVar3);
      uStack_60 = uStack_b0;
      puStack_d8 = &uStack_80;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      uStack_e0 = 0;
      while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        lVar14 = *(long *)puVar7;
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
        lVar12 = lVar11;
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_02229718();
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                    *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_d0,uVar13,uVar1);
        uStack_88 = uStack_c8;
        uStack_90 = uStack_d0;
        System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                  (&uStack_90,&uStack_94,&lStack_a0,*(undefined8 *)puVar8);
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02660a58 to 02760a5f has its CatchHandler @ 02660a68 */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                  (lStack_a0,*(undefined8 *)puVar9);
      }
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_80,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                  (*(long *)(param_1 + 0x28),&uStack_d0,*(undefined8 *)puVar3);
        uStack_60 = uStack_b0;
        puStack_d8 = &uStack_80;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        uStack_68 = uStack_b8;
        uStack_70 = uStack_c0;
        uStack_e0 = 0;
        while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                  (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
          lVar14 = *(long *)puVar7;
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar12 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718();
            lVar11 = *(long *)(lVar14 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_d0,uVar13,uVar1);
          uStack_88 = uStack_c8;
          uStack_90 = uStack_d0;
          System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                    (&uStack_90,&uStack_94,&lStack_a0,*(undefined8 *)puVar8);
          if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                    (lStack_a0,*(undefined8 *)puVar9);
        }
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                  (&uStack_80,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 0x30) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                    (*(long *)(param_1 + 0x30),&uStack_d0,*(undefined8 *)puVar3);
          uStack_60 = uStack_b0;
          puStack_d8 = &uStack_80;
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          uStack_68 = uStack_b8;
          uStack_70 = uStack_c0;
          uStack_e0 = 0;
          while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                    (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
            lVar14 = *(long *)puVar7;
            lVar11 = *(long *)(lVar14 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
            lVar12 = lVar11;
            if ((uVar2 & 1) == 0) {
              lVar12 = FUN_02229718();
              lVar11 = *(long *)(lVar14 + 0x20);
              uVar2 = *(ushort *)(lVar11 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar11 = FUN_02229718();
            }
            uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                        *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                        0x60);
                    /* try { // try from 0266082c to 0276090b has its CatchHandler @ 0266082c
                       catch() { ... } // from try @ 0266082c with catch @ 0266082c
                       catch() { ... } // from try @ 02660978 with catch @ 0266082c
                       catch() { ... } // from try @ 026609d4 with catch @ 0266082c
                       catch() { ... } // from try @ 02660a08 with catch @ 0266082c
                       catch() { ... } // from try @ 02660a3c with catch @ 0266082c
                       catch() { ... } // from try @ 02660a60 with catch @ 0266082c */
            func_0x04608620(&uStack_d0,uVar13,uVar1);
            uStack_88 = uStack_c8;
            uStack_90 = uStack_d0;
            System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                      (&uStack_90,&uStack_94,&lStack_a0,*(undefined8 *)puVar8);
            if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02660a60 to 02760a6b has its CatchHandler @ 0266082c */
              FUN_021f06a0();
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                      (lStack_a0,*(undefined8 *)puVar9);
          }
          System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                    (&uStack_80,*(undefined8 *)puVar5);
          if (*(long *)(param_1 + 0x38) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                      (*(long *)(param_1 + 0x38),&uStack_d0,*(undefined8 *)puVar3);
            uStack_60 = uStack_b0;
            puStack_d8 = &uStack_80;
            uStack_78 = uStack_c8;
            uStack_80 = uStack_d0;
            uStack_68 = uStack_b8;
            uStack_70 = uStack_c0;
            uStack_e0 = 0;
            while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                      (&uStack_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
              lVar14 = *(long *)puVar7;
              lVar11 = *(long *)(lVar14 + 0x20);
              uVar2 = *(ushort *)(lVar11 + 0x135);
              lVar12 = lVar11;
              if ((uVar2 & 1) == 0) {
                lVar12 = FUN_02229718();
                lVar11 = *(long *)(lVar14 + 0x20);
                uVar2 = *(ushort *)(lVar11 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar11 = FUN_02229718();
              }
              uVar13 = thunk_FUN_0224e54c(&uStack_80,
                                          *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80)
                                          + 0x60);
                    /* try { // try from 0266090c to 02760913 has its CatchHandler @ 02660a18 */
              func_0x04608620(&uStack_d0,uVar13,uVar1);
              uStack_88 = uStack_c8;
              uStack_90 = uStack_d0;
                    /* try { // try from 0266092c to 02760977 has its CatchHandler @ 02660a1c */
              System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                        (&uStack_90,&uStack_94,&lStack_a0,*(undefined8 *)puVar8);
              if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                        (lStack_a0,*(undefined8 *)puVar9);
            }
            System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                      (&uStack_80,*(undefined8 *)puVar5);
            lVar12 = *(long *)(param_1 + 0x40);
            uVar13 = GridSheet_Layout__Create_2560bf4(*(undefined8 *)(param_1 + 0x18));
            if (lVar12 != 0) {
              uStack_e0 = uStack_e0 & 0xffffffff00000000;
              uStack_d0 = uVar13;
                    /* try { // try from 02660978 to 027609a3 has its CatchHandler @ 0266082c */
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                        (lVar12,&uStack_e0,&uStack_d0,*(undefined8 *)puVar4);
              lVar12 = *(long *)(param_1 + 0x40);
              uVar13 = GridSheet_Layout__Create_2560bf4(*(undefined8 *)(param_1 + 0x20));
              if (lVar12 != 0) {
                    /* try { // try from 026609a4 to 027609af has its CatchHandler @ 02660a14 */
                uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
                uStack_d0 = uVar13;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar12,&uStack_e0,&uStack_d0,*(undefined8 *)puVar4);
                lVar12 = *(long *)(param_1 + 0x40);
                uVar13 = GridSheet_Layout__Create_2560bf4(*(undefined8 *)(param_1 + 0x28));
                if (lVar12 != 0) {
                    /* try { // try from 026609c8 to 027609d3 has its CatchHandler @ 02660a10 */
                    /* try { // try from 026609d4 to 02760a03 has its CatchHandler @ 0266082c */
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,2);
                  uStack_d0 = uVar13;
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                            (lVar12,&uStack_e0,&uStack_d0,*(undefined8 *)puVar4);
                  lVar12 = *(long *)(param_1 + 0x40);
                  uVar13 = GridSheet_Layout__Create_2560bf4(*(undefined8 *)(param_1 + 0x30));
                  if (lVar12 != 0) {
                    /* try { // try from 02660a04 to 02760a07 has its CatchHandler @ 02660a0c */
                    uStack_e0 = CONCAT44(uStack_e0._4_4_,3);
                    uStack_d0 = uVar13;
                    /* try { // try from 02660a08 to 02760a37 has its CatchHandler @ 0266082c */
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                              (lVar12,&uStack_e0,&uStack_d0,*(undefined8 *)puVar4);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02660a04 with catch @ 02660a0c
                        */
                    lVar12 = *(long *)(param_1 + 0x40);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026609c8 with catch @ 02660a10
                        */
                    uVar13 = GridSheet_Layout__Create_2560bf4(*(undefined8 *)(param_1 + 0x38));
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026609a4 with catch @ 02660a14
                        */
                    if (lVar12 != 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266090c with catch @ 02660a18
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266092c with catch @ 02660a1c
                        */
                      uStack_e0 = CONCAT44(uStack_e0._4_4_,4);
                      uStack_d0 = uVar13;
                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                (lVar12,&uStack_e0,&uStack_d0,*(undefined8 *)puVar4);
                    /* try { // try from 02660a38 to 02760a3b has its CatchHandler @ 02660a54 */
                    /* try { // try from 02660a3c to 02760a57 has its CatchHandler @ 0266082c */
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02660a58 with catch @ 02660a68
                        */
  FUN_021f06a0();
}

