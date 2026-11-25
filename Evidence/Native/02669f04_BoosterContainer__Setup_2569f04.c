/* IL2CPP: BoosterContainer$$Setup
void BoosterContainer__Setup (BoosterContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$Setup
   void BoosterContainer__Setup (BoosterContainer_o* __this, const MethodInfo* method); */

void BoosterContainer__Setup_2569f04(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((bRam0000000004f4c18a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbdd8);
    FUN_021f03f8(PTR_DAT_049cbde0);
    FUN_021f03f8(PTR_DAT_049c70e8);
    FUN_021f03f8(PTR_DAT_049cbde8);
    FUN_021f03f8(PTR_DAT_049c70f8);
    FUN_021f03f8(PTR_DAT_049cbdf0);
    FUN_021f03f8(PTR_DAT_049cbdf8);
    FUN_021f03f8(PTR_DAT_049cbe00);
    FUN_021f03f8(PTR_DAT_049cbe08);
    FUN_021f03f8(PTR_DAT_049cbe10);
    FUN_021f03f8(PTR_DAT_049c47d8);
    FUN_021f03f8(PTR_DAT_049c47e0);
    FUN_021f03f8(PTR_DAT_049cbe18);
    FUN_021f03f8(PTR_DAT_049c7140);
    FUN_021f03f8(PTR_DAT_049cbe20);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4c18a = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_0266a294:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049c47d8);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar9);
  puVar6 = PTR_DAT_049cbe00;
  puVar5 = PTR_DAT_049cbdf8;
  puVar4 = PTR_DAT_049cbdf0;
  puVar3 = PTR_DAT_049cbde0;
  puVar2 = PTR_DAT_049b8d80;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0266a294;
  uVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049c47e0);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  thunk_FUN_021f190c();
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x8c922de4,uVar9,0);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar6,0);
  lVar13 = *(long *)puVar4;
  lVar11 = *(long *)(lVar13 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar13);
    lVar11 = *(long *)(lVar13 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049cbe20;
  puVar4 = PTR_DAT_049cbe08;
  puVar3 = PTR_DAT_049cbde8;
  puVar2 = PTR_DAT_049cbdd8;
  lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar9,**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)puVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar11 = *(long *)(lVar13 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar13);
    lVar11 = *(long *)(lVar13 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049cbe18;
  puVar4 = PTR_DAT_049cbe10;
  puVar3 = PTR_DAT_049c70f8;
  puVar2 = PTR_DAT_049c70e8;
  lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar9,**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)puVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar11 = *(long *)(lVar13 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar13);
    lVar11 = *(long *)(lVar13 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c7140;
  lVar11 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar9,**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c192 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4c192 = 1;
  }
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar2;
  }
  uVar10 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar11 + 0xb8) + 0x790,0);
  if ((uVar10 & 1) == 0) {
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)puVar2;
    }
    CloudPrefsBool__Set_24eb1bc(*(long *)(lVar11 + 0xb8) + 0x790,1,0);
    iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar2 + 0xb8) + 0x750,0);
    if (0 < iVar7) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_0266a42c;
      lVar11 = *(long *)puVar2;
      iVar7 = *(int *)(*(long *)(param_1 + 0x80) + 0x10);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar2;
      }
      iVar8 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar11 + 0xb8) + 0x750,0);
      uVar1 = iVar7 - iVar8;
      lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
      iVar7 = CloudPrefsInt__get_Value_24e99c0(lVar11 + 0x770,0);
      CloudPrefsInt__set_Value_24e9a2c
                (lVar11 + 0x770,iVar7 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),0);
    }
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)puVar2;
    }
    iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar11 + 0xb8) + 0x60,0);
    if (iVar7 < 2) {
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar2;
      }
      iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar11 + 0xb8) + 0x770,0);
      puVar2 = PTR_DAT_049c5aa8;
      if (*(long *)(param_1 + 0x80) != 0) {
        iVar7 = *(int *)(*(long *)(param_1 + 0x80) + 0x10) + iVar7;
        if ((bRam0000000004f4bcb1 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c5aa8,iVar7,0);
          bRam0000000004f4bcb1 = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        PlayerPrefsInt__Set_3f0dba4(&stack0xffffffffffffffc0,iVar7,0);
        return;
      }
LAB_0266a42c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

