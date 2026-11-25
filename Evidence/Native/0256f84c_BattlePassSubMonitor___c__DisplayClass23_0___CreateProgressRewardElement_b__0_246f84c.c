/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass23_0$$<CreateProgressRewardElement>b__0
void BattlePassSubMonitor___c__DisplayClass23_0___CreateProgressRewardElement_b__0 (BattlePassSubMonitor___c__DisplayClass23_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass23_0$$<CreateProgressRewardElement>b__0
   void BattlePassSubMonitor___c__DisplayClass23_0___CreateProgressRewardElement_b__0
   (BattlePassSubMonitor___c__DisplayClass23_0_o* __this, const MethodInfo* method); */

void BattlePassSubMonitor___c__DisplayClass23_0___CreateProgressRewardElement_b__0_246f84c
               (long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  lVar11 = *(long *)(param_1 + 0x20);
  if ((bRam0000000004f4b996 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5528);
    FUN_021f03f8(PTR_DAT_049c5530);
    FUN_021f03f8(PTR_DAT_049c5538);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c5540);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b996 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (lVar13,0x803eb6ff,0);
  puVar3 = PTR_DAT_049b3b98;
  if (lVar7 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
    puVar15 = (undefined8 *)(lVar13 + 0xa8);
    uVar16 = *puVar15;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(uVar16,uVar12,0);
    if ((uVar8 & 1) != 0) {
      *puVar15 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)puVar15 >> 0xc & 0x3f),
                     ((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    *puVar15 = uVar12;
    thunk_FUN_021f190c(puVar15,uVar12);
    lVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0);
    if (lVar7 != 0) {
      lVar9 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                         (uVar12,0xbcdc2f95,0);
      if (((lVar10 != 0) &&
          (lVar10 = UnityEngine_Component__get_transform_3c18724(lVar10,0), lVar10 != 0)) &&
         (UnityEngine_Transform__get_position_3c2d540(lVar10,0), lVar9 != 0)) {
        UnityEngine_Transform__set_position_3c2d61c(lVar9,0);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                          (lVar7,0xbcdc2f95,0);
        if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) &&
           (StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar9,0), lVar11 != 0)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (lVar11,&uStack_98,*(undefined8 *)PTR_DAT_049c5540);
          puVar5 = PTR_DAT_049c5538;
          puVar4 = PTR_DAT_049c5530;
          puVar3 = PTR_DAT_049c2d00;
          uStack_68 = uStack_90;
          puStack_a0 = &uStack_70;
          uStack_60 = uStack_88;
          uStack_a8 = 0;
          while( true ) {
            uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_70,*(undefined8 *)puVar4);
            if ((uVar8 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_70,*(undefined8 *)PTR_DAT_049c5528);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
              auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                                     (*(float *)(lVar11 + 0xc) * 0.5,*(float *)(lVar11 + 0x10) * 0.5
                                      ,*(float *)(lVar11 + 0x14) * 0.5,0);
              auVar17 = FUN_024f4e50(auStack_80,0x1a,*(undefined8 *)PTR_DAT_049c1680);
              uVar12 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
              auVar17 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar17._0_8_,auVar17._8_8_,uVar12,
                                   *(undefined8 *)PTR_DAT_049c1670);
              LitMotion_MotionHandleExtensions__AddTo_2eace68
                        (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,lVar13,0);
              return;
            }
            lVar14 = *(long *)puVar5;
            lVar10 = *(long *)(lVar14 + 0x20);
            uVar2 = *(ushort *)(lVar10 + 0x135);
            lVar11 = lVar10;
            if ((uVar2 & 1) == 0) {
              lVar11 = FUN_02229718();
              lVar10 = *(long *)(lVar14 + 0x20);
              uVar2 = *(ushort *)(lVar10 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar10 = FUN_02229718();
            }
            uVar12 = thunk_FUN_0224e54c(&uStack_70,
                                        *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_98,uVar12,uVar1);
            uVar6 = uStack_94;
            uVar1 = uStack_98;
            uVar12 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar9,0);
            if (*(long *)(lVar13 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar11 = *(long *)(*(long *)(lVar13 + 0x60) + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_54 = uVar1;
            GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                      (lVar11,&uStack_54,&uStack_98,*(undefined8 *)puVar3);
            uStack_b8 = uStack_90;
            uStack_b0 = uStack_88;
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                      (uVar12,0x1a9a2c8b,auStack_c0,0);
            if (*(long *)(lVar13 + 0x60) == 0) break;
            uVar16 = Shop__FormatItemQuantity_257016c(*(long *)(lVar13 + 0x60),uVar1,uVar6,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (uVar12,0x9927ed9b,uVar16,0);
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

