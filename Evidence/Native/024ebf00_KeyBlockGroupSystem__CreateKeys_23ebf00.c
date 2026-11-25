/* IL2CPP: KeyBlockGroupSystem$$CreateKeys
void KeyBlockGroupSystem__CreateKeys (KeyBlockGroupSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: KeyBlockGroupSystem$$CreateKeys
   void KeyBlockGroupSystem__CreateKeys (KeyBlockGroupSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void KeyBlockGroupSystem__CreateKeys_23ebf00(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [4];
  
  if ((bRam0000000004f4b627 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1e48);
    FUN_021f03f8(PTR_DAT_049c1e50);
    FUN_021f03f8(PTR_DAT_049c1e58);
    FUN_021f03f8(PTR_DAT_049c1e60);
    FUN_021f03f8(PTR_DAT_049c1e68);
    FUN_021f03f8(PTR_DAT_049c1e70);
    FUN_021f03f8(PTR_DAT_049c1e78);
    FUN_021f03f8(PTR_DAT_049c1e80);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1e88);
    bRam0000000004f4b627 = 1;
  }
  puVar6 = PTR_DAT_049c1e60;
  puVar5 = PTR_DAT_049c1e58;
  puVar4 = PTR_DAT_049c1e48;
  puVar3 = PTR_DAT_049c1558;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_88 = 0;
  alStack_80[0] = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x1e0), lVar11 != 0)) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar12 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar11,iVar12,&lStack_b8,*(undefined8 *)puVar3);
        if (lStack_b8 == 0) goto LAB_024ec27c;
        uVar7 = Block__TryGetFeature_23dc908(lStack_b8,6,alStack_80 + 1);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)(param_1 + 0x88);
          if (lVar8 == 0) goto LAB_024ec27c;
        }
        else {
          lVar8 = Level__GetColor_2555ca8(param_1 + 0x40,alStack_80[2],0);
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_024ec27c;
          lStack_b8 = lVar8;
          uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                            (*(long *)(param_1 + 0xa8),&lStack_b8,alStack_80,*(undefined8 *)puVar4);
          if ((uVar7 & 1) == 0) {
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_024ec27c;
            Features__Get_24fb17c(&lStack_b8,*(long *)(param_1 + 0x30),6,0);
            lVar10 = lStack_b8;
            lVar14 = *(long *)(param_1 + 0x38);
            uVar9 = UnityEngine_Component__get_transform_3c18724(param_2,0);
            if ((lVar14 == 0) ||
               (lVar10 = PrefabModule__Rent_2537bc4(lVar14,lVar10,uVar9,0), lVar10 == 0))
            goto LAB_024ec27c;
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                      (lVar10,&lStack_b8,*(undefined8 *)PTR_DAT_049c1e80);
            lVar10 = lStack_b8;
            alStack_80[0] = lStack_b8;
            if ((*(long *)(param_1 + 0xa8) == 0) ||
               (lStack_b8 = lVar8,
               System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                         (*(long *)(param_1 + 0xa8),&lStack_b8,lVar10,*(undefined8 *)puVar5),
               alStack_80[0] == 0)) goto LAB_024ec27c;
            *(long *)(alStack_80[0] + 0xb0) = lVar8;
          }
          lVar8 = *(long *)(param_1 + 0x88);
          if (lVar8 == 0) goto LAB_024ec27c;
          iVar13 = 0;
          while (iVar13 < *(int *)(lVar8 + 0x154)) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar11,iVar12 + iVar13,&lStack_b8,*(undefined8 *)puVar3);
            lVar8 = lStack_b8;
            if (alStack_80[0] == 0) goto LAB_024ec27c;
            KeyBlockGroup__AddBlock_23eba0c(alStack_80[0],lStack_b8);
            if (*(long *)(param_1 + 0xb0) == 0) goto LAB_024ec27c;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (*(long *)(param_1 + 0xb0),lVar8,alStack_80[0],*(undefined8 *)puVar6);
            lVar8 = *(long *)(param_1 + 0x88);
            iVar13 = iVar13 + 1;
            if (lVar8 == 0) goto LAB_024ec27c;
          }
        }
        iVar12 = *(int *)(lVar8 + 0x154) + iVar12;
      } while (iVar12 < *(int *)(lVar11 + 0x18));
    }
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                           (*(long *)(param_1 + 0xa8),*(undefined8 *)PTR_DAT_049c1e50),
       puVar5 = PTR_DAT_049c1e78, puVar4 = PTR_DAT_049c1e70, puVar3 = PTR_DAT_049c1e68, lVar11 != 0)
       ) {
      System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
                (lVar11,&uStack_98,*(undefined8 *)PTR_DAT_049c1e88);
      lStack_b8 = 0;
      puStack_b0 = &uStack_98;
      while( true ) {
        uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                          (&uStack_98,*(undefined8 *)puVar4);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                    (&uStack_98,*(undefined8 *)puVar3);
          return;
        }
        lVar10 = *(long *)puVar5;
        lVar8 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
        lVar11 = lVar8;
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar8 = *(long *)(lVar10 + 0x20);
          uVar2 = *(ushort *)(lVar8 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar9 = thunk_FUN_0224e54c(&uStack_98,
                                   *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(alStack_80 + 3,uVar9,uVar1);
        if (alStack_80[3] == 0) break;
        KeyBlockGroup__Initialize_23eb7e8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
LAB_024ec27c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

