/* IL2CPP: ReviveMultiplePageVariant$$Setup
void ReviveMultiplePageVariant__Setup (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$Setup
   void ReviveMultiplePageVariant__Setup (ReviveMultiplePageVariant_o* __this, const MethodInfo*
   method); */

void ReviveMultiplePageVariant__Setup_2492178(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_DAT_049c5f80;
  puVar4 = PTR_DAT_049c5f78;
  puVar3 = PTR_DAT_049c5f70;
  puVar2 = PTR_DAT_049c5f68;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba7c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c47e0);
    FUN_021f03f8(PTR_DAT_049c5f80);
    FUN_021f03f8(PTR_DAT_049c5f78);
    FUN_021f03f8(PTR_DAT_049c5f70);
    FUN_021f03f8(PTR_DAT_049c5f68);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049b61b0);
    bRam0000000004f4ba7c = 1;
  }
  uVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xeca14f6a,0);
  puVar7 = (undefined8 *)(param_1 + 0xa0);
  *puVar7 = uVar6;
  thunk_FUN_021f190c(puVar7,uVar6);
  uVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x99f4e89d,0);
  puVar8 = (undefined8 *)(param_1 + 0xa8);
  *puVar8 = uVar6;
  thunk_FUN_021f190c(puVar8,uVar6);
  uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                    (*puVar8,0xa3d244a8,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  thunk_FUN_021f190c();
  uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                    (*puVar8,0xd6355f58,0);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  thunk_FUN_021f190c();
  uVar9 = *puVar7;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0x5ecc1a93,uVar6,0);
  uVar9 = *puVar7;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0xbb3ee9fe,uVar6,0);
  uVar9 = *puVar7;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0x4c676fd6,uVar6,0);
  uVar9 = *puVar8;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0x5ecc1a93,uVar6,0);
  uVar9 = *puVar8;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0xb4ce0c4e,uVar6,0);
  uVar9 = *puVar8;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar9,0x4c676fd6,uVar6,0);
  uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                    (*puVar7,0xf6f322b4,0);
  puVar1 = PTR_DAT_049b61b0;
  if (*(long *)(param_1 + 0x38) != 0) {
    EconomyMonitor__AddItemView_243c7e8
              (*(long *)(param_1 + 0x38),1,uVar6,*(undefined8 *)PTR_DAT_049b61b0,0);
    uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                      (*(undefined8 *)(param_1 + 0xa8),0xf6f322b4,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      EconomyMonitor__AddItemView_243c7e8(*(long *)(param_1 + 0x38),1,uVar6,*(undefined8 *)puVar1,0)
      ;
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar6 = RemoteConfigModule__GetDataClassNew_object__26a494c
                          (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_049c47e0);
        puVar7 = (undefined8 *)(param_1 + 0xc0);
        *puVar7 = uVar6;
        if (iRam0000000005174518 != 0) {
          FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                       ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

