/* IL2CPP: ShopMonitor$$CreateProductElement
void ShopMonitor__CreateProductElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Product_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$CreateProductElement
   void ShopMonitor__CreateProductElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, Shop_Product_o data, const MethodInfo*
   method); */

void ShopMonitor__CreateProductElement_2461fd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c5088;
  if ((bRam0000000004f4b944 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c49d8);
    FUN_021f03f8(PTR_DAT_049c5090);
    FUN_021f03f8(PTR_DAT_049c5088);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b944 = 1;
  }
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar2 + 0x10),param_1);
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    uVar4 = param_3[4];
    uVar8 = param_3[1];
    uVar7 = *param_3;
    *(undefined8 *)(lVar2 + 0x40) = param_3[5];
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    *(undefined8 *)(lVar2 + 0x28) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    *(undefined8 *)(lVar2 + 0x18) = uVar7;
    thunk_FUN_021f190c(lVar2 + 0x18,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x100),*(undefined8 *)(lVar2 + 0x18),param_2,
                 *(undefined8 *)PTR_DAT_049c49d8);
      uStack_58 = *(undefined8 *)(lVar2 + 0x20);
      uStack_60 = *(undefined8 *)(lVar2 + 0x18);
      uStack_48 = *(undefined8 *)(lVar2 + 0x30);
      uStack_50 = *(undefined8 *)(lVar2 + 0x28);
      uStack_38 = *(undefined8 *)(lVar2 + 0x40);
      uStack_40 = *(undefined8 *)(lVar2 + 0x38);
      ShopMonitor__RefreshProductElement_2462148(param_1,param_2,&uStack_60);
      lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                        (param_2,0x89a31dce,0);
      puVar1 = PTR_DAT_049c5090;
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x100);
        uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,lVar2,*(undefined8 *)puVar1,0);
        if (lVar3 != 0) {
          uVar4 = UnityEngine_Events_UnityEvent__GetDelegate_3c32a30(uVar4,uVar4,0);
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if ((bRam0000000004f58b7c & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26d90);
            bRam0000000004f58b7c = 1;
          }
          if (*(long *)(lVar2 + 0x18) != 0) {
            FUN_02333498(*(long *)(lVar2 + 0x18),uVar4,*(undefined8 *)PTR_DAT_04a26d90);
            *(undefined1 *)(lVar2 + 0x28) = 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

