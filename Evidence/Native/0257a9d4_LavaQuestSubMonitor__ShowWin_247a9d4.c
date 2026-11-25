/* IL2CPP: LavaQuestSubMonitor$$ShowWin
void LavaQuestSubMonitor__ShowWin (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$ShowWin
   void LavaQuestSubMonitor__ShowWin (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const
   MethodInfo* method); */

void LavaQuestSubMonitor__ShowWin_247a9d4(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_34;
  
  puVar2 = PTR_DAT_049b4540;
  if ((bRam0000000004f4b9e3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a8);
    FUN_021f03f8(PTR_DAT_049c4660);
    FUN_021f03f8(PTR_DAT_049c3eb8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b9e3 = 1;
  }
  iStack_34 = 0;
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x1440f1d8,0);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  iStack_34 = *(int *)(param_2 + 4) + -1;
  lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,1);
  uVar5 = System_Int32__ToString_30fbaa0(&iStack_34,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0257acd8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_021f190c();
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
              (uVar7,0x33cebc0d,lVar4,0);
    auVar9 = LitMotion_LMotion__Create_2eaa070(0x3f800000,0,*(undefined4 *)(param_2 + 0x10),0);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                      (*(undefined8 *)(param_1 + 0x88),0xfe88e3fa,0);
    if (lVar4 != 0) {
      LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f34c
                (auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar4 + 0x38),
                 *(undefined8 *)PTR_DAT_049c3eb8);
      uVar7 = *(undefined8 *)(param_1 + 0x88);
      lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,1);
      uVar5 = System_Int32__ToString_30fbaa0(param_2 + 0x14,0);
      puVar3 = PTR_DAT_049b54a8;
      puVar2 = PTR_DAT_049b5310;
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0257acd8;
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        thunk_FUN_021f190c();
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                  (uVar7,0x72c5b6c8,lVar4,0);
        uVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                          (*(undefined8 *)(param_1 + 0x88),0xa41ab296,0);
        lVar4 = *(long *)puVar2;
        lVar8 = *(long *)(param_1 + 0x58);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574(lVar4);
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        uStack_88 = *(undefined8 *)(lVar4 + 0x1b8);
        uStack_90 = *(undefined8 *)(lVar4 + 0x1b0);
        uStack_78 = *(undefined8 *)(lVar4 + 0x1c8);
        uStack_80 = *(undefined8 *)(lVar4 + 0x1c0);
        uStack_68 = *(undefined8 *)(lVar4 + 0x1d8);
        uStack_70 = *(undefined8 *)(lVar4 + 0x1d0);
        uStack_60 = *(undefined8 *)(lVar4 + 0x1e0);
        CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                  (&uStack_90,&uStack_58,*(undefined8 *)puVar3);
        if (lVar8 != 0) {
          uStack_a8 = uStack_50;
          uStack_b0 = uStack_58;
          uStack_a0 = uStack_48;
          uVar7 = Avatars__GetProfileAvatar_256fe34(lVar8,&uStack_b0,0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                    (uVar5,0xbd13b84d,uVar7,0);
          lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                            (*(undefined8 *)(param_1 + 0x88),0x6fcf623b,0);
          puVar2 = PTR_DAT_049c4660;
          if (lVar4 != 0) {
            iVar1 = iStack_34;
            if (4 < iStack_34) {
              iVar1 = 5;
            }
            if (0 < iStack_34) {
              lVar4 = *(long *)(lVar4 + 0x20);
              if (lVar4 == 0) goto LAB_0257acd4;
              iVar6 = 0;
              do {
                uVar5 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar4,0)
                ;
                if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0257acd4;
                iVar6 = iVar6 + 1;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (*(long *)(param_1 + 0xb0),iVar6,&uStack_58,*(undefined8 *)puVar2);
                lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                  (uStack_58,0xbd13b84d,0);
                if (lVar8 == 0) goto LAB_0257acd4;
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                          (uVar5,0xbd13b84d,*(undefined8 *)(lVar8 + 0xd8),0);
              } while (iVar1 != iVar6);
            }
            return;
          }
        }
      }
    }
  }
LAB_0257acd4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

