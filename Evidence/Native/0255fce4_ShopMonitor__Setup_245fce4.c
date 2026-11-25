/* IL2CPP: ShopMonitor$$Setup
void ShopMonitor__Setup (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$Setup
   void ShopMonitor__Setup (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__Setup_245fce4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_049c4f88;
  puVar5 = PTR_DAT_049c4f80;
  puVar4 = PTR_DAT_049c4f78;
  puVar3 = PTR_DAT_049c3df8;
  puVar2 = PTR_DAT_049c3de8;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b93e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3de8);
    FUN_021f03f8(PTR_DAT_049c4a88);
    FUN_021f03f8(PTR_DAT_049c4a90);
    FUN_021f03f8(PTR_DAT_049c3df8);
    FUN_021f03f8(PTR_DAT_049c4f90);
    FUN_021f03f8(PTR_DAT_049c4f80);
    FUN_021f03f8(PTR_DAT_049c4f98);
    FUN_021f03f8(PTR_DAT_049c4f78);
    FUN_021f03f8(PTR_DAT_049c4f88);
    FUN_021f03f8(PTR_DAT_049c3e20);
    FUN_021f03f8(PTR_DAT_049c4ac0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b93e = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  ShopMonitor__FillBundleElements_2460034(param_1);
  ShopMonitor__FillProductElements_2460100(param_1);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x4f9c846c,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar8,0);
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar6,0);
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
  puVar4 = PTR_DAT_049c4f98;
  puVar3 = PTR_DAT_049c4a90;
  puVar2 = PTR_DAT_049c4a88;
  puVar1 = PTR_DAT_049c3e20;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar8,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar1);
  uVar10 = *(undefined8 *)(param_1 + 0xf8);
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
  puVar1 = PTR_DAT_049c4ac0;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar8,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar1);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0xb4ce0c4e,0);
  uVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x72fe097c,0);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  thunk_FUN_021f190c(param_1 + 0x120,uVar8);
  ShopMonitor__CreateRewardedElement_24601cc(param_1,*(undefined8 *)(param_1 + 0x120));
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0xe8),*(undefined8 *)PTR_DAT_049c4f90);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                       (param_1,0x4c676fd6,0);
    if ((lVar9 != 0) && (lVar11 != 0)) {
      bVar7 = *(char *)(lVar9 + 0x10) == '\0';
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,bVar7,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar11 != 0) {
        lVar9 = *(long *)(lVar11 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar11,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar9,bVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

