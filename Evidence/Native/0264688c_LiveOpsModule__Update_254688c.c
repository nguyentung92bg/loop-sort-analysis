/* IL2CPP: LiveOpsModule$$Update
void LiveOpsModule__Update (LiveOpsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$Update
   void LiveOpsModule__Update (LiveOpsModule_o* __this, const MethodInfo* method); */

void LiveOpsModule__Update_254688c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4c00f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9230);
    FUN_021f03f8(PTR_DAT_049c9238);
    FUN_021f03f8(PTR_DAT_049c9240);
    FUN_021f03f8(PTR_DAT_049c9248);
    bRam0000000004f4c00f = 1;
  }
  puVar6 = PTR_DAT_049c9248;
  puVar5 = PTR_DAT_049c9240;
  puVar4 = PTR_DAT_049c9238;
  puVar3 = PTR_DAT_049c9230;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x30),&uStack_78,*(undefined8 *)PTR_DAT_049c9248);
    uStack_50 = uStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_60,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      lVar11 = *(long *)puVar5;
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_34,uVar10,uVar1);
      uVar1 = uStack_34;
      uVar7 = LiveOpsModule__IsJoined_2546cc0(param_1,uStack_34);
      if (((uVar7 & 1) != 0) &&
         ((uVar7 = LiveOpsModule__CanShow_2546db8(uVar7,uVar1), (uVar7 & 1) == 0 ||
          (uVar7 = LiveOpsModule__CanComplete_2546e28(param_1,uVar1), (uVar7 & 1) != 0)))) {
        LiveOpsModule__Complete_2546f00(param_1,uVar1);
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_60,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0x30),&uStack_78,*(undefined8 *)puVar6);
      uStack_50 = uStack_68;
      puStack_58 = puStack_70;
      uStack_60 = uStack_78;
      uStack_78 = 0;
      puStack_70 = &uStack_60;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_60,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        lVar11 = *(long *)puVar5;
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar9 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_34,uVar10,uVar1);
        LiveOpsModule__UpdateSchedule_2547160(param_1,uStack_34);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_1 + 0x30),&uStack_78,*(undefined8 *)puVar6);
        uStack_50 = uStack_68;
        puStack_58 = puStack_70;
        uStack_60 = uStack_78;
        uStack_78 = 0;
        puStack_70 = &uStack_60;
        while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&uStack_60,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
          lVar11 = *(long *)puVar5;
          lVar8 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
          lVar9 = lVar8;
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
            lVar8 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                      *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_34,uVar10,uVar1);
          uVar1 = uStack_34;
          uVar7 = LiveOpsModule__CanJoin_2547318(param_1,uStack_34);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = LiveOpsModule__CanAutoJoin_2547574(uVar7,uVar1), (uVar7 & 1) != 0)) {
            LiveOpsModule__Join_25475e0(param_1,uVar1);
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_60,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

