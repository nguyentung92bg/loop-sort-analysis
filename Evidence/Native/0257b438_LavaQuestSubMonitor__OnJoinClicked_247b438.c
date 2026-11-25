/* IL2CPP: LavaQuestSubMonitor$$OnJoinClicked
void LavaQuestSubMonitor__OnJoinClicked (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$OnJoinClicked
   void LavaQuestSubMonitor__OnJoinClicked (LavaQuestSubMonitor_o* __this, const MethodInfo*
   method); */

void LavaQuestSubMonitor__OnJoinClicked_247b438(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar8 = LiveOpsModule__CanJoin_2547318(*(long *)(param_1 + 0x50),0xc,0);
    if ((uVar8 & 1) == 0) {
      if ((bRam0000000004f4b9e8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c5478);
        bRam0000000004f4b9e8 = 1;
      }
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *(long *)PTR_DAT_049c5478;
      puVar9 = *(undefined8 **)(lVar12 + 0x38);
      if (puVar9 == (undefined8 *)0x0) {
        FUN_02229774(lVar12);
        puVar9 = *(undefined8 **)(lVar12 + 0x38);
      }
      uVar7 = *puVar9;
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = System_Type__GetTypeFromHandle_310ebfc(uVar7,0);
      if ((bRam0000000004f4c1ac & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cbfc8,uVar7,0,0);
        bRam0000000004f4c1ac = 1;
      }
      if (*(long *)(lVar6 + 0x20) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(lVar6 + 0x20),uVar7,&stack0xffffffffffffffd8,
                   *(undefined8 *)PTR_DAT_049cbfc8);
        Monitors__Deactivate_256e214(lVar6,in_stack_ffffffffffffffd8,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      LavaQuest__JoinGame_251abf4(*(long *)(param_1 + 0x48),0);
      if ((bRam0000000004f4b9e4 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b54a8);
        FUN_021f03f8(PTR_DAT_049c5900);
        FUN_021f03f8(PTR_DAT_049c5908);
        FUN_021f03f8(PTR_DAT_049c3b08);
        FUN_021f03f8(PTR_DAT_049c5968);
        FUN_021f03f8(PTR_DAT_049b5480);
        FUN_021f03f8(PTR_DAT_049c5918);
        FUN_021f03f8(PTR_DAT_049c5920);
        FUN_021f03f8(PTR_DAT_049c5928);
        FUN_021f03f8(PTR_DAT_049c5930);
        FUN_021f03f8(PTR_DAT_049c5938);
        FUN_021f03f8(PTR_DAT_049b5310);
        FUN_021f03f8(PTR_DAT_049b4540);
        bRam0000000004f4b9e4 = 1;
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      auStack_70._0_8_ = 0;
      auStack_70._8_8_ = 0;
      lStack_38 = 0;
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x271db996,0);
      puVar2 = PTR_DAT_049b4540;
      if (*(long *)(param_1 + 0x48) != 0) {
        LavaQuest__GetNewGame_251acdc(&uStack_88,*(long *)(param_1 + 0x48),0);
        uVar11 = *(undefined8 *)(param_1 + 0x70);
        uStack_58 = uStack_80;
        uStack_60 = uStack_88;
        uStack_50 = uStack_78;
        lVar6 = FUN_021f04e4(*(undefined8 *)puVar2,1);
        uVar7 = System_Int32__ToString_30fbaa0((long)&uStack_50 + 4,0);
        puVar3 = PTR_DAT_049b54a8;
        puVar2 = PTR_DAT_049b5310;
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          *(undefined8 *)(lVar6 + 0x20) = uVar7;
          thunk_FUN_021f190c();
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                    (uVar11,0x72c5b6c8,lVar6,0);
          uVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                            (*(undefined8 *)(param_1 + 0x70),0xa41ab296,0);
          lVar6 = *(long *)puVar2;
          lVar12 = *(long *)(param_1 + 0x58);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_021f0574(lVar6);
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          uStack_d8 = *(undefined8 *)(lVar6 + 0x1b8);
          uStack_e0 = *(undefined8 *)(lVar6 + 0x1b0);
          uStack_c8 = *(undefined8 *)(lVar6 + 0x1c8);
          uStack_d0 = *(undefined8 *)(lVar6 + 0x1c0);
          uStack_b8 = *(undefined8 *)(lVar6 + 0x1d8);
          uStack_c0 = *(undefined8 *)(lVar6 + 0x1d0);
          uStack_b0 = *(undefined8 *)(lVar6 + 0x1e0);
          CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                    (&uStack_e0,&uStack_a0,*(undefined8 *)puVar3);
          puVar3 = PTR_DAT_049c5908;
          puVar2 = PTR_DAT_049c5900;
          if (lVar12 != 0) {
            uStack_f8 = puStack_98;
            uStack_100 = uStack_a0;
            uStack_f0 = uStack_90;
            uVar11 = Avatars__GetProfileAvatar_256fe34(lVar12,&uStack_100,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                      (uVar7,0xbd13b84d,uVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            puVar3 = PTR_DAT_049c5938;
            auStack_70 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                                   (&lStack_38,*(undefined8 *)puVar2);
            lVar6 = lStack_38;
            puStack_98 = auStack_70;
            uStack_a0 = 0;
            if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar12 = *(long *)(*(long *)(param_1 + 0x58) + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar7 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_2895908
                              (lVar12,*(undefined8 *)PTR_DAT_049c5918);
            if (lVar6 != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                        (lVar6,uVar7,*(undefined8 *)PTR_DAT_049c5920);
              lVar6 = lStack_38;
              if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__Shuffle___Il2CppFullySharedGenericType__25f01e8
                        (lVar6,*(undefined8 *)PTR_DAT_049c5968);
              lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                                (*(undefined8 *)(param_1 + 0x70),0xe0d1c46c,0);
              if (lVar6 != 0) {
                lVar6 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec
                                  (lVar6,0);
                puVar4 = PTR_DAT_049c5930;
                puVar2 = PTR_DAT_049c3b08;
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                iVar10 = 0;
                while( true ) {
                  iVar5 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar6,0);
                  if (iVar5 <= iVar10) {
                    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                              (auStack_70,*(undefined8 *)puVar3);
                    return;
                  }
                  lVar12 = UnityEngine_Transform__GetChild_3c2f8bc(lVar6,iVar10,0);
                  if (lVar12 == 0) break;
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                            (lVar12,&uStack_88,*(undefined8 *)puVar2);
                  uVar7 = uStack_88;
                  if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  iVar5 = *(int *)(lStack_38 + 0x18);
                  iVar1 = 0;
                  if (iVar5 != 0) {
                    iVar1 = iVar10 / iVar5;
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (lStack_38,iVar10 - iVar1 * iVar5,&uStack_88,*(undefined8 *)puVar4);
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                            (uVar7,0xbd13b84d,uStack_88,0);
                  iVar10 = iVar10 + 1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0(uVar7,uVar7);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

