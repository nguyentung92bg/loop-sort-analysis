/* IL2CPP: GiftBoxElement.<ApplyCustomMotion>d__6$$MoveNext
void GiftBoxElement__ApplyCustomMotion_d__6__MoveNext (GiftBoxElement__ApplyCustomMotion_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02519a4c) */
/* WARNING: Removing unreachable block (ram,0x02519e00) */
/* IL2CPP: GiftBoxElement.<ApplyCustomMotion>d__6$$MoveNext
   void GiftBoxElement__ApplyCustomMotion_d__6__MoveNext (GiftBoxElement__ApplyCustomMotion_d__6_o
   __this, const MethodInfo* method); */

void GiftBoxElement__ApplyCustomMotion_d__6__MoveNext_2419848(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_c0 [16];
  long **pplStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  
  if ((bRam0000000004f4b752 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2e70);
    FUN_021f03f8(PTR_DAT_049c2e78);
    FUN_021f03f8(PTR_DAT_049c2e80);
    FUN_021f03f8(PTR_DAT_049c2e88);
    FUN_021f03f8(PTR_DAT_049c2e90);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b752 = 1;
  }
  iStack_44 = *param_1;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_98 = 0;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  pplStack_70 = (long **)0x0;
  if (iStack_44 == 0) {
    auStack_90 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_44 = -1;
    *param_1 = -1;
  }
  else {
    lVar17 = *(long *)(param_1 + 6);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (lVar17,0xbcdc2f95,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar8,0);
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 8),auStack_c0,*(undefined8 *)PTR_DAT_049c2e90);
    puVar4 = PTR_DAT_049c2e88;
    puVar3 = PTR_DAT_049c2e80;
    uStack_78 = auStack_c0._8_8_;
    plStack_80 = (long *)auStack_c0._0_8_;
    auStack_c0._0_8_ = 0;
    uStack_68 = uStack_a8;
    pplStack_70 = pplStack_b0;
    auStack_c0._8_8_ = &iStack_44;
    pplStack_b0 = &plStack_80;
    while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&plStack_80,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
      lVar19 = *(long *)puVar4;
      lVar10 = *(long *)(lVar19 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar10 = *(long *)(lVar19 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&plStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_60,uVar12,uVar1);
      uVar6 = uStack_58;
      uVar12 = uStack_60;
      uVar13 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar8,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                (uVar13,0x1a9a2c8b,uVar12,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar13,0x5cac0bbb,uVar6,0);
    }
    if (iStack_44 < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (pplStack_b0,*(undefined8 *)PTR_DAT_049c2e78);
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
              (lVar17,0x4f91ca30,**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(lVar17,0x4f91ca30,0)
    ;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(lVar11 + 0x38);
    lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
    if ((lVar8 == 0) || (UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar17,0xc24dc4d1,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar17,0x85f8a9cf,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,1,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(lVar17,0x6d8b1339,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar8 + 0x38),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
    auVar20 = GiftBoxElement__ApplyUnlockMotion_2419690(lVar17);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_c0 = auVar20;
    thunk_FUN_021f190c(auStack_c0,0);
    uVar6 = auStack_c0._8_8_;
    uVar12 = auStack_c0._0_8_;
    auStack_90 = auStack_c0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar12 != (long *)0x0) {
      lVar17 = *(long *)uVar12;
      uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar9 != 0) {
        piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar14 = (undefined8 *)(lVar17 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02519c5c;
          }
          uVar9 = uVar9 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar9 != 0);
      }
      puVar14 = (undefined8 *)FUN_02229a4c(uVar12,*(long *)PTR_DAT_049b54e0,0);
LAB_02519c5c:
      iVar7 = (*(code *)*puVar14)(uVar12,uVar6 & 0xffffffff,puVar14[1]);
      if (iVar7 == 0) {
        iStack_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_90;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c2e70);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_90._0_8_;
    uVar18 = auStack_90._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar14 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_02519cf4;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02519cf4:
    (*(code *)*puVar14)(uVar12,uVar18,puVar14[1]);
  }
  cVar5 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar16 = *(long **)(param_1 + 2);
  if (plVar16 != (long *)0x0) {
    lVar17 = *plVar16;
    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar14 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_02519d8c;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar14 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049b56d0,2);
LAB_02519d8c:
    (*(code *)*puVar14)(plVar16,puVar14[1]);
  }
  return;
}

