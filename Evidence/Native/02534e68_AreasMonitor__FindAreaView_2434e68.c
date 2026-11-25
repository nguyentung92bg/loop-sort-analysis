/* IL2CPP: AreasMonitor$$FindAreaView
System_ValueTuple_StatefulComponent__AreasMonitor_AreaView__o AreasMonitor__FindAreaView (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$FindAreaView
   System_ValueTuple_StatefulComponent__AreasMonitor_AreaView__o AreasMonitor__FindAreaView
   (AreasMonitor_o* __this, AreaSheet_Row_o* area, const MethodInfo* method); */

undefined1  [16] AreasMonitor__FindAreaView_2434e68(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_58;
  
  if ((bRam0000000004f4b7f2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3ab8);
    FUN_021f03f8(PTR_DAT_049c3ac0);
    FUN_021f03f8(PTR_DAT_049c3ac8);
    FUN_021f03f8(PTR_DAT_049c3ad0);
    FUN_021f03f8(PTR_DAT_049c3ad8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c3ae0);
    bRam0000000004f4b7f2 = 1;
  }
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_58 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbcdc2f95,0);
  if (lVar8 != 0) {
    uVar9 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
    puVar7 = PTR_DAT_049c3ad8;
    puVar6 = PTR_DAT_049c3ad0;
    puVar5 = PTR_DAT_049c3ac8;
    puVar4 = PTR_DAT_049c3ac0;
    puVar3 = PTR_DAT_049b3b98;
    if (*(long *)(param_1 + 0xc0) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                (*(long *)(param_1 + 0xc0),&uStack_d0,*(undefined8 *)PTR_DAT_049c3ab8);
      uStack_70 = uStack_b0;
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      do {
        do {
          uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar10 & 1) == 0) {
            System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                      (&uStack_90,*(undefined8 *)puVar4);
            uVar9 = 0;
            uVar12 = 0;
            goto LAB_025350cc;
          }
          lVar13 = *(long *)puVar6;
          lVar11 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar8 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
            lVar11 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_d0,uVar12,uVar1);
          uStack_98 = uStack_c8;
          uStack_a0 = uStack_d0;
          System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                    (&uStack_a0,&lStack_58,&lStack_a8,*(undefined8 *)puVar7);
          lVar11 = lStack_58;
          lVar8 = lStack_a8;
          if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar13 = UnityEngine_Component__get_transform_3c18724(lStack_58,0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar12 = UnityEngine_Transform__get_parent_3c2d470(lVar13,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar10 = UnityEngine_Object__op_Equality_3c1eeb4(uVar12,uVar9,0);
        } while ((uVar10 & 1) == 0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      } while (*(long *)(lVar8 + 0x10) != param_2);
      uStack_d0 = 0;
      uStack_c8 = 0;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                (&uStack_d0,lVar11,lVar8,*(undefined8 *)PTR_DAT_049c3ae0);
      uVar12 = uStack_c8;
      uVar9 = uStack_d0;
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_90,*(undefined8 *)puVar4);
LAB_025350cc:
      auVar14._8_8_ = uVar12;
      auVar14._0_8_ = uVar9;
      return auVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

