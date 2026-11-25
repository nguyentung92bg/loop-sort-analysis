/* IL2CPP: CollectionBarHomeElement$$Setup
void CollectionBarHomeElement__Setup (CollectionBarHomeElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$Setup
   void CollectionBarHomeElement__Setup (CollectionBarHomeElement_o* __this, const MethodInfo*
   method); */

void CollectionBarHomeElement__Setup_2413e10(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar6 = PTR_DAT_049c2c18;
  puVar5 = PTR_DAT_049c2c10;
  puVar4 = PTR_DAT_049c2c08;
  puVar3 = PTR_DAT_049c2c00;
  puVar2 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b738 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c20);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c2c28);
    FUN_021f03f8(PTR_DAT_049c2c30);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c2c38);
    FUN_021f03f8(PTR_DAT_049c2c40);
    FUN_021f03f8(PTR_DAT_049c2c10);
    FUN_021f03f8(PTR_DAT_049c2c00);
    FUN_021f03f8(PTR_DAT_049c2c48);
    FUN_021f03f8(PTR_DAT_049c2c50);
    FUN_021f03f8(PTR_DAT_049c2c58);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b738 = 1;
  }
  uVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x39cfe44a,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  thunk_FUN_021f190c();
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x854128ce,uVar8,0);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar5,0);
  lVar11 = *(long *)puVar6;
  lVar9 = *(long *)(lVar11 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar11);
    lVar9 = *(long *)(lVar11 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c2c60;
  puVar4 = PTR_DAT_049c2c40;
  puVar3 = PTR_DAT_049c2c30;
  puVar2 = PTR_DAT_049c2c20;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar8,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar4,0);
  lVar11 = *(long *)puVar3;
  lVar9 = *(long *)(lVar11 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar11);
    lVar9 = *(long *)(lVar11 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c2c58;
  puVar4 = PTR_DAT_049c2c48;
  puVar3 = PTR_DAT_049c2c38;
  puVar2 = PTR_DAT_049c2c28;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar8,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
            (uVar8,param_1,*(undefined8 *)puVar3,0);
  lVar11 = *(long *)puVar2;
  lVar9 = *(long *)(lVar11 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar11);
    lVar9 = *(long *)(lVar11 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c2c50;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d647c
            (uVar10,uVar8,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar2);
  if ((bRam0000000004f4b73c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b73c = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar8 = CollectionBar__GetCurrentProgressData_2511d90(*(long *)(param_1 + 0x40),0);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar8);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar7 = CollectionBar__GetCurrentTokenCount_251276c(*(long *)(param_1 + 0x40),0);
      *(int *)(param_1 + 0xb0) = iVar7;
      puVar2 = PTR_DAT_049bb3a0;
      if (*(long *)(param_1 + 0xa8) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0x20);
        if (iVar1 <= iVar7) {
          iVar7 = iVar1;
        }
        *(int *)(param_1 + 0xb0) = iVar7;
        uVar8 = System_Int32__ToString_30fbaa0((int *)(param_1 + 0xb0),0);
        uVar10 = System_Int32__ToString_30fbaa0(&stack0xffffffffffffffdc,0);
        uVar8 = System_String__Concat_2f7d424(uVar8,*(undefined8 *)puVar2,uVar10,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0x5f7a3f9f,uVar8,0);
        iVar7 = *(int *)(param_1 + 0xb0);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (param_1,0x85f8a9cf,0);
        if ((lVar9 != 0) &&
           (lVar9 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar9,0), lVar9 != 0)) {
          fVar12 = (float)iVar7 / (float)iVar1;
          fVar14 = 1.0;
          if (fVar12 <= 1.0) {
            fVar14 = fVar12;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar12) {
            fVar13 = fVar14;
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar13,0x3f800000,lVar9,0);
          CollectionBarHomeElement__UpdateBarReward_2414c58(param_1,*(undefined8 *)(param_1 + 0xa8))
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

