/* IL2CPP: ShopMonitor$$RefreshProductElement
void ShopMonitor__RefreshProductElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Product_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$RefreshProductElement
   void ShopMonitor__RefreshProductElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Product_o data, const MethodInfo*
   method); */

void ShopMonitor__RefreshProductElement_2462148(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4b946 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c40c8);
    FUN_021f03f8(PTR_DAT_049c40d0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b946 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    PurchasingModule__GetProductMetadata_2549880(aiStack_f8,*(long *)(param_1 + 0xa0),*param_3,0);
    uVar10 = uStack_f0;
    puVar2 = PTR_DAT_049c40d0;
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    if (lStack_c8 != 0) {
      if (*(int *)(lStack_c8 + 0x18) == 0) goto LAB_02562448;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lStack_c8,0,aiStack_f8,*(undefined8 *)PTR_DAT_049c40d0);
      iVar3 = aiStack_f8[0];
      bVar4 = false;
      if (1 < *(int *)(lStack_c8 + 0x18)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lStack_c8,1,aiStack_f8,*(undefined8 *)puVar2);
        bVar4 = aiStack_f8[0] == 3;
      }
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (param_2,0x1a9a2c8b,0);
      if (lVar5 != 0) {
        UnityEngine_UI_Image__set_sprite_3cee6e8(lVar5,param_3[1],0);
        lVar5 = UnityEngine_Component__get_transform_3c18724(lVar5,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        if (lVar5 != 0) {
          fVar11 = *(float *)(param_3 + 2);
          lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          auVar12 = UnityEngine_Transform__set_localScale_3c2ddfc
                              (fVar11 * *(float *)(lVar9 + 0xc),fVar11 * *(float *)(lVar9 + 0x10),
                               *(float *)(lVar9 + 0x14) * fVar11,lVar5,0);
          uVar6 = uVar10;
          if (iVar3 == 1) {
            uVar6 = ShopMonitor__FormatGoldQuantity_2461cac
                              (uStack_f0,auVar12._0_8_,auVar12._8_8_,uVar10);
          }
          uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                            (param_2,0x993134c1,uVar6,0);
          uStack_148 = uVar10;
          lStack_120 = lStack_c8;
          uStack_138 = uStack_98;
          uStack_140 = uStack_a0;
          uStack_128 = uStack_88;
          uStack_130 = uStack_90;
          uStack_110 = uStack_b8;
          uStack_118 = uStack_c0;
          uStack_100 = uStack_a8;
          uStack_108 = uStack_b0;
          ShopMonitor__SetBuyButtonData_2461c64(uVar6,param_2,auStack_150);
          lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                            (param_2,0x221849f,0);
          if ((lVar5 != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0),
             puVar2 = PTR_DAT_049b3b98, lVar5 != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar5,bVar4,0);
            uVar10 = param_3[3];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar7 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
            if ((uVar7 & 1) != 0) {
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                        (param_2,0x13d626de,param_3[3],0);
            }
            uVar10 = param_3[4];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar7 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
            if ((uVar7 & 1) != 0) {
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                        (param_2,0x89a31dce,param_3[4],0);
            }
            uVar10 = param_3[5];
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar7 = UnityEngine_Object__op_Implicit_3c23140(uVar10,0);
            if ((uVar7 & 1) != 0) {
              lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                                (param_2,0x993134c1,0);
              if ((lVar5 == 0) || (plVar8 = *(long **)(lVar5 + 0x38), plVar8 == (long *)0x0))
              goto LAB_0256247c;
              (**(code **)(*plVar8 + 0x578))(plVar8,param_3[5],*(undefined8 *)(*plVar8 + 0x580));
            }
LAB_02562448:
            if (*(long *)(lVar1 + 0x28) == lStack_78) {
              return;
            }
            goto LAB_02562490;
          }
        }
      }
    }
  }
LAB_0256247c:
  if (*(long *)(lVar1 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02562490:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

