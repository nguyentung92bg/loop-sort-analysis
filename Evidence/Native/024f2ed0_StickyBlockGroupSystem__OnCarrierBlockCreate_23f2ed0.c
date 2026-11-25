/* IL2CPP: StickyBlockGroupSystem$$OnCarrierBlockCreate
void StickyBlockGroupSystem__OnCarrierBlockCreate (StickyBlockGroupSystem_o* __this, CarrierBlockCreateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroupSystem$$OnCarrierBlockCreate
   void StickyBlockGroupSystem__OnCarrierBlockCreate (StickyBlockGroupSystem_o* __this,
   CarrierBlockCreateMessage_o m, const MethodInfo* method); */

void StickyBlockGroupSystem__OnCarrierBlockCreate_23f2ed0(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b650 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2140);
    FUN_021f03f8(PTR_DAT_049c2148);
    FUN_021f03f8(PTR_DAT_049c2150);
    FUN_021f03f8(PTR_DAT_049c2158);
    FUN_021f03f8(PTR_DAT_049c2160);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c2168);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c2170);
    FUN_021f03f8(PTR_DAT_049c2178);
    bRam0000000004f4b650 = 1;
  }
  puVar6 = PTR_DAT_049c2170;
  puVar5 = PTR_DAT_049c2148;
  puVar4 = PTR_DAT_049c1558;
  puVar3 = PTR_DAT_049c1410;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x1e0), lVar11 != 0)) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar12 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar11,iVar12,&lStack_b0,*(undefined8 *)puVar4);
        if (lStack_b0 == 0) goto LAB_024f3234;
        uVar7 = Block__TryGetFeature_23dc908(lStack_b0,0x1c,&uStack_78);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_024f3234;
          Features__Get_24fb17c(&lStack_b0,*(long *)(param_1 + 0x30),0x1c,0);
          lVar9 = lStack_b0;
          lVar13 = *(long *)(param_1 + 0x38);
          uVar8 = UnityEngine_Component__get_transform_3c18724(param_2,0);
          if ((lVar13 == 0) ||
             (lVar9 = PrefabModule__Rent_2537bc4(lVar13,lVar9,uVar8,0), lVar9 == 0))
          goto LAB_024f3234;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                    (lVar9,&lStack_b0,*(undefined8 *)PTR_DAT_049c2168);
          lVar9 = lStack_b0;
          lVar13 = *(long *)(param_1 + 0x40);
          if (lVar13 == 0) goto LAB_024f3234;
          iVar10 = 0;
          while (iVar10 < *(int *)(lVar13 + 0x154)) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar11,iVar12 + iVar10,&lStack_b0,*(undefined8 *)puVar4);
            lVar13 = lStack_b0;
            lVar14 = *(long *)(param_1 + 0x68);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if ((lVar13 == 0) || (lVar14 == 0)) goto LAB_024f3234;
            FUN_024f5bd0(lVar14,*(undefined8 *)(lVar13 + 0x60),*(undefined8 *)puVar6);
            if ((*(long *)(param_1 + 0x70) == 0) ||
               (System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (*(long *)(param_1 + 0x70),lVar13,lVar9,*(undefined8 *)puVar5), lVar9 == 0
               )) goto LAB_024f3234;
            StickyBlockGroup__AddBlock_23f2698(lVar9,lVar13);
            lVar13 = *(long *)(param_1 + 0x40);
            iVar10 = iVar10 + 1;
            if (lVar13 == 0) goto LAB_024f3234;
          }
          StickyBlockGroupSystem__AddStickyToCarrier_23f37e4(param_1,param_2,lVar9);
        }
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_024f3234;
        iVar12 = *(int *)(*(long *)(param_1 + 0x40) + 0x154) + iVar12;
      } while (iVar12 < *(int *)(lVar11 + 0x18));
    }
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                           (*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c2140),
       puVar5 = PTR_DAT_049c2160, puVar4 = PTR_DAT_049c2158, puVar3 = PTR_DAT_049c2150, lVar11 != 0)
       ) {
      System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
                (lVar11,&uStack_90,*(undefined8 *)PTR_DAT_049c2178);
      lStack_b0 = 0;
      puStack_a8 = &uStack_90;
      while( true ) {
        uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                          (&uStack_90,*(undefined8 *)puVar4);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                    (&uStack_90,*(undefined8 *)puVar3);
          return;
        }
        lVar13 = *(long *)puVar5;
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar11 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar9 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar8 = thunk_FUN_0224e54c(&uStack_90,
                                   *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&lStack_68,uVar8,uVar1);
        if (lStack_68 == 0) break;
        StickyBlockGroup__Initialize_23f24c0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
LAB_024f3234:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

