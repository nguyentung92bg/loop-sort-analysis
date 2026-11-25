/* IL2CPP: ShopMonitor$$RefreshBundleElement
void ShopMonitor__RefreshBundleElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Bundle_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$RefreshBundleElement
   void ShopMonitor__RefreshBundleElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Bundle_o data, const MethodInfo* method);
    */

void ShopMonitor__RefreshBundleElement_246129c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar16 = tpidr_el0;
  lStack_68 = *(long *)(lVar16 + 0x28);
  if ((bRam0000000004f4b942 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5070);
    FUN_021f03f8(PTR_DAT_049c4ae8);
    FUN_021f03f8(PTR_DAT_049b6098);
    FUN_021f03f8(PTR_DAT_049b60a0);
    FUN_021f03f8(PTR_DAT_049b60a8);
    FUN_021f03f8(PTR_DAT_049b60b8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2e38);
    bRam0000000004f4b942 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (param_2,0xb4ce0c4e,0);
  if (*(long *)(param_1 + 0xa0) == 0) {
LAB_02561b4c:
    lVar16 = *(long *)(lVar16 + 0x28);
  }
  else {
    uVar10 = PurchasingModule__GetProductMetadata_2549880
                       (&uStack_f8,*(long *)(param_1 + 0xa0),*(undefined8 *)(param_3 + 8),0);
    uStack_90 = CONCAT44(uStack_e4,iStack_e8);
    uStack_168 = uStack_b8;
    uStack_170 = uStack_c0;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_88 = uStack_e0;
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    uStack_128 = uStack_d0;
    uStack_130 = uStack_d8;
    uStack_148 = uStack_f0;
    uStack_150 = uStack_f8;
    uStack_138 = uStack_e0;
    uStack_98 = uStack_f0;
    uStack_a0 = uStack_f8;
    lStack_120 = lStack_c8;
    uStack_100 = uStack_a8;
    uStack_108 = uStack_b0;
    uStack_110 = uStack_b8;
    uStack_118 = uStack_c0;
    ShopMonitor__SetBuyButtonData_2461c64(uVar10,param_2,&uStack_150);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (param_2,0x8ec81543,0);
    if (lVar11 == 0) goto LAB_02561b4c;
    lVar17 = *(long *)(lVar11 + 0x20);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (param_2,0xcaf67d6a,0);
    if (lVar11 == 0) goto LAB_02561b4c;
    lVar18 = *(long *)(lVar11 + 0x20);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (param_2,0xa66c4568,0);
    if (lVar11 == 0) goto LAB_02561b4c;
    lVar20 = *(long *)(lVar11 + 0x20);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (param_2,0xd00bbe49,0);
    if ((lVar11 == 0) || (lVar17 == 0)) goto LAB_02561b4c;
    lVar11 = *(long *)(lVar11 + 0x20);
    UnityEngine_GameObject__SetActive_3c1ce34(lVar17,0,0);
    if ((lVar18 == 0) ||
       ((UnityEngine_GameObject__SetActive_3c1ce34(lVar18,0,0), lVar20 == 0 ||
        (UnityEngine_GameObject__SetActive_3c1ce34(lVar20,0,0), lVar11 == 0)))) goto LAB_02561b4c;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar11,0,0);
    puVar7 = PTR_DAT_049c2e38;
    puVar6 = PTR_DAT_049b60a8;
    puVar5 = PTR_DAT_049b60a0;
    if (lStack_c8 == 0) {
      lVar16 = *(long *)(lVar16 + 0x28);
    }
    else {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_c8,&uStack_f8,*(undefined8 *)PTR_DAT_049b60b8);
      uStack_180 = CONCAT44(uStack_e4,iStack_e8);
      bVar4 = false;
      puStack_198 = &uStack_190;
      uStack_188 = uStack_f0;
      uStack_190 = uStack_f8;
      uStack_178 = uStack_e0;
      uStack_1a0 = 0;
      uVar10 = uStack_f8;
      uVar1 = 0x44543658;
      while (uVar19 = uVar1,
            uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (uVar10,&uStack_190,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
        lVar21 = *(long *)puVar6;
        lVar13 = *(long *)(lVar21 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
        lVar14 = lVar13;
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar13 = *(long *)(lVar21 + 0x20);
          uVar3 = *(ushort *)(lVar13 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_190,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        uVar10 = func_0x04608620(&uStack_f8,uVar10,uVar1);
        uVar9 = uStack_f0;
        iVar8 = (int)uStack_f8;
        if ((int)uStack_f8 < 0xb) {
          if ((int)uStack_f8 == 1) {
            uVar10 = ShopMonitor__FormatGoldQuantity_2461cac();
            uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                               (param_2,0xf6f322b4,uVar10,0);
          }
          else if ((int)uStack_f8 == 2) {
            uVar10 = ShopMonitor__FormatLifeQuantity_2461e38();
            uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                               (param_2,0xce15919c,uVar10,0);
          }
          else {
            uVar10 = uStack_f0;
            if ((int)uStack_f8 == 10) {
              UnityEngine_GameObject__SetActive_3c1ce34(lVar17,1,0);
              uStack_f8 = uVar9;
              uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_f8);
              uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
              uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                                 (param_2,0x8ec81543,uVar10,0);
              goto LAB_02561880;
            }
          }
        }
        else {
          if ((int)uStack_f8 < 0xd) {
            if ((int)uStack_f8 == 0xb) {
              UnityEngine_GameObject__SetActive_3c1ce34(lVar20,1,0);
              uStack_f8 = uVar9;
              uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_f8);
              uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
              uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                                 (param_2,0xa66c4568,uVar10,0);
            }
            else {
              if ((int)uStack_f8 != 0xc) goto LAB_02561884;
              UnityEngine_GameObject__SetActive_3c1ce34(lVar18,1,0);
              uStack_f8 = uVar9;
              uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_f8);
              uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
              uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                                 (param_2,0xcaf67d6a,uVar10,0);
            }
          }
          else if ((int)uStack_f8 == 0xd) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar11,1,0);
            uStack_f8 = uVar9;
            uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_f8);
            uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
            uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                               (param_2,0xd00bbe49,uVar10,0);
          }
          else {
            if ((int)uStack_f8 != 0x13) goto LAB_02561884;
            UnityEngine_GameObject__SetActive_3c1ce34(lVar17,1,0);
            UnityEngine_GameObject__SetActive_3c1ce34(lVar18,1,0);
            UnityEngine_GameObject__SetActive_3c1ce34(lVar20,1,0);
            UnityEngine_GameObject__SetActive_3c1ce34(lVar11,1,0);
            uStack_f8 = uVar9;
            uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_f8);
            uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (param_2,0x8ec81543,uVar10,0);
            uStack_1a8 = uVar9;
            uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_1a8);
            uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (param_2,0xcaf67d6a,uVar10,0);
            uStack_1b0 = uVar9;
            uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_1b0);
            uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (param_2,0xa66c4568,uVar10,0);
            uStack_1b8 = uVar9;
            uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x80),&uStack_1b8);
            uVar10 = System_String__Format_2f73700(*(undefined8 *)puVar7,uVar10,0);
            uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                               (param_2,0xd00bbe49,uVar10,0);
          }
LAB_02561880:
          bVar4 = true;
        }
LAB_02561884:
        uVar1 = 0xd0da26ce;
        if (iVar8 != 3) {
          uVar1 = uVar19;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_190,*(undefined8 *)PTR_DAT_049b6098);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,uVar19,0);
      if (bVar4) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (param_2,0xbc1c109a,0);
      }
      puVar5 = PTR_DAT_049b3b98;
      uVar10 = *(undefined8 *)(param_3 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
      if ((uVar12 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (param_2,0x13d626de,*(undefined8 *)(param_3 + 0x30),0);
      }
      uVar10 = *(undefined8 *)(param_3 + 0x38);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
      if ((uVar12 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (param_2,0xbcdc2f95,*(undefined8 *)(param_3 + 0x38),0);
      }
      uVar10 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
      if ((uVar12 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                  (param_2,0x89a31dce,*(undefined8 *)(param_3 + 0x40),0);
      }
      uVar10 = *(undefined8 *)(param_3 + 0x48);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
      if ((uVar12 & 1) == 0) {
LAB_02561a0c:
        if (*(int *)(param_3 + 0x28) != 0) {
          uStack_f8 = *(undefined8 *)PTR_DAT_049c5070;
          uStack_f0 = 0xffffffffffffffff;
          iStack_e8 = *(int *)(param_3 + 0x28);
          uVar10 = System_Enum__ToString_3135e00(&uStack_f8,0);
          if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
            FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0x98));
          }
          System_Enum__Parse___Il2CppFullySharedGenericStructType__25d8104
                    (uVar10,&uStack_1a0,*(undefined8 *)PTR_DAT_049c4ae8);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (param_2,uStack_1a0 & 0xffffffff,0);
        }
        uVar2 = *(uint *)(param_3 + 0x24);
        if ((uVar2 & 1) != 0) {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (param_2,0x62f1b194,0);
          uVar2 = *(uint *)(param_3 + 0x24);
        }
        if ((uVar2 >> 1 & 1) != 0) {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                    (param_2,0xfe1f7e09,0);
          uVar2 = *(uint *)(param_3 + 0x24);
        }
        if ((uVar2 >> 2 & 1) != 0) {
          lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                             (param_1,0xdbf7a871,0);
          if (((param_2 == 0) ||
              (lVar17 = UnityEngine_Component__get_transform_3c18724(param_2,0), lVar11 == 0)) ||
             (uVar10 = StatefulUI_Runtime_Core_ContainerView__get_Root_3346698(lVar11,0),
             lVar17 == 0)) goto LAB_02561b54;
          UnityEngine_Transform__SetParent_3c2e01c(lVar17,uVar10,0);
        }
        if (*(long *)(lVar16 + 0x28) == lStack_68) {
          return;
        }
        goto LAB_02561c5c;
      }
      lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                         (param_2,0x8ac5d12b,0);
      if ((lVar11 != 0) && (plVar15 = *(long **)(lVar11 + 0x38), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x578))
                  (plVar15,*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(*plVar15 + 0x580));
        goto LAB_02561a0c;
      }
LAB_02561b54:
      lVar16 = *(long *)(lVar16 + 0x28);
    }
  }
  if (lVar16 == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02561c5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

