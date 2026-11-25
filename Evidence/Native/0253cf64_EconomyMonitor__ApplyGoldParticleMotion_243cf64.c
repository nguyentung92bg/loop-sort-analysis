/* IL2CPP: EconomyMonitor$$ApplyGoldParticleMotion
void EconomyMonitor__ApplyGoldParticleMotion (EconomyMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t from, int32_t to, UnityEngine_Vector3_o worldPosition, System_Nullable_float__o particleCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: EconomyMonitor$$ApplyGoldParticleMotion
   void EconomyMonitor__ApplyGoldParticleMotion (EconomyMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t from, int32_t to,
   UnityEngine_Vector3_o worldPosition, System_Nullable_float__o particleCount, const MethodInfo*
   method); */

void EconomyMonitor__ApplyGoldParticleMotion_243cf64
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [12];
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_049c3e98;
  uStack_88 = param_8;
  if ((bRam0000000004f4b82d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5238);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c3ea0);
    FUN_021f03f8(PTR_DAT_049c3ea8);
    FUN_021f03f8(PTR_DAT_049c3eb0);
    FUN_021f03f8(PTR_DAT_049c3eb8);
    FUN_021f03f8(PTR_DAT_049c1f78);
    FUN_021f03f8(PTR_DAT_049c3ec0);
    FUN_021f03f8(PTR_DAT_049c3ec8);
    FUN_021f03f8(PTR_DAT_049c3ed0);
    FUN_021f03f8(PTR_DAT_049c3ed8);
    FUN_021f03f8(PTR_DAT_049c3ee0);
    FUN_021f03f8(PTR_DAT_049c3ee8);
    FUN_021f03f8(PTR_DAT_049c3ef0);
    FUN_021f03f8(PTR_DAT_049c3ef8);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c3f00);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c3f08);
    FUN_021f03f8(PTR_DAT_049c3f10);
    FUN_021f03f8(PTR_DAT_049c3e98);
    bRam0000000004f4b82d = 1;
  }
  uStack_90 = 0;
  uStack_98 = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar3,0);
  puVar2 = PTR_DAT_049b3b98;
  if (lVar3 == 0) {
LAB_0253d594:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(long *)(lVar3 + 0x18) = param_4;
  thunk_FUN_021f190c((long *)(lVar3 + 0x18),param_4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_5,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__HasText_3351454
                      (param_5,0x9927ed9b,0);
    lVar9 = 0;
    if ((uVar4 & 1) != 0) {
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                        (param_5,0x9927ed9b,0);
    }
    uVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__HasText_3351454
                      (param_5,0xf6f322b4,0);
    if (((uVar4 & 1) != 0) && (lVar9 == 0)) {
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                        (param_5,0xf6f322b4,0);
    }
    if (lVar9 != 0) {
      lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_5,0xc616a039,0);
      if (lVar5 != 0) {
        uVar6 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar5,0);
        lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                          (param_4,0xf6f322b4,0);
        if (lVar5 != 0) {
          StatefulUI_Runtime_Core_ContainerView__AddInstance___Il2CppFullySharedGenericType__25c841c
                    (lVar5,auStack_80,*(undefined8 *)PTR_DAT_049c3ea0);
          plVar10 = (long *)(lVar3 + 0x10);
          *plVar10 = auStack_80._0_8_;
          thunk_FUN_021f190c(plVar10);
          if (*plVar10 != 0) {
            uVar7 = UnityEngine_Component__get_transform_3c18724(*plVar10,0);
            MonitorBase__WorldToCanvasSpace_256cc8c(param_1,param_2,param_3,param_4,uVar7,0);
            lVar5 = *plVar10;
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x5f8) = uVar6;
              thunk_FUN_021f190c(lVar5 + 0x5f8,uVar6);
              lVar5 = *plVar10;
              auStack_80._0_4_ = 0x42480000;
              System_Nullable___Il2CppFullySharedGenericStructType___GetValueOrDefault_2903ebc
                        (&uStack_88,auStack_80,&uStack_64,*(undefined8 *)PTR_DAT_049c3f00);
              auVar14._8_4_ = auStack_80._8_4_;
              auVar14._0_8_ = auStack_80._0_8_;
              auVar13._8_8_ = auStack_d0._8_8_;
              auVar13._0_8_ = auStack_d0._0_8_;
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x3124) = uStack_64;
                auStack_d0 = auVar13;
                auStack_80 = auVar14;
                if (*plVar10 != 0) {
                  AssetKits_ParticleImage_ParticleImage__Clear_32a75c8(*plVar10,0);
                  if (*plVar10 != 0) {
                    AssetKits_ParticleImage_ParticleImage__Play_32a75e0(*plVar10,0);
                    lVar5 = *plVar10;
                    if (lVar5 != 0) {
                      uStack_b8 = *(undefined8 *)(lVar5 + 0x240);
                      uStack_c0 = *(undefined8 *)(lVar5 + 0x238);
                      uStack_a8 = *(undefined8 *)(lVar5 + 0x250);
                      uStack_b0 = *(undefined8 *)(lVar5 + 0x248);
                      uVar11 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate_3c7fee8
                                         (0,0,&uStack_c0,0);
                      auStack_d0 = LitMotion_LMotion__Create_2eaa070
                                             (_UNK_013aa4b8,param_6,param_7,0);
                      puVar2 = PTR_DAT_049c2288;
                      lVar5 = *(long *)PTR_DAT_049c2288;
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        FUN_021f0574();
                        lVar5 = *(long *)puVar2;
                      }
                      auVar13 = FUN_02526574(auStack_d0,
                                             *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                                             *(undefined8 *)PTR_DAT_049c3ef0);
                      auStack_d0 = auVar13;
                      auVar13 = FUN_024f6e90(uVar11,auStack_d0,0,0,*(undefined8 *)PTR_DAT_049c3ec8);
                      auStack_d0 = auVar13;
                      auVar13 = FUN_02551adc(auStack_d0,1,*(undefined8 *)PTR_DAT_049c3ed0);
                      auStack_d0 = auVar13;
                      uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
                      System_Action___ctor_306b98c(uVar7,lVar3,*(undefined8 *)PTR_DAT_049c3f08,0);
                      auVar13 = FUN_024f6b84(auStack_d0,uVar7,*(undefined8 *)PTR_DAT_049c3ee0);
                      auVar14 = LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f34c
                                          (auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(lVar9 + 0x38)
                                           ,*(undefined8 *)PTR_DAT_049c3eb8);
                      if (*(long *)(param_4 + 0xd0) != 0) {
                        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                  (*(long *)(param_4 + 0xd0),param_5,&uStack_98,
                                   *(undefined8 *)PTR_DAT_049c3ea8);
                        FUN_024f75b8(uStack_98,uStack_90,1,0);
                        if (*(long *)(param_4 + 0xd0) != 0) {
                          auStack_80 = auVar14;
                          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                    (*(long *)(param_4 + 0xd0),param_5,auStack_80,
                                     *(undefined8 *)PTR_DAT_049c3eb0);
                          if (*plVar10 != 0) {
                            fVar12 = *(float *)(*plVar10 + 0x3124);
                            iVar8 = (int)fVar12;
                            if (4 < iVar8) {
                              iVar8 = 5;
                            }
                            iVar1 = -0x80000000;
                            if (fVar12 != INFINITY) {
                              iVar1 = iVar8;
                            }
                            if (cRam0000000004f4a190 == '\0') {
                              FUN_021f03f8(PTR_DAT_049bbf90);
                              cRam0000000004f4a190 = '\x01';
                            }
                            auStack_e0 = LitMotion_LMotion_Punch__Create_2eaa764(0);
                            auVar13 = FUN_02526574(auStack_e0,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                                                   *(undefined8 *)PTR_DAT_049c3ef8);
                            auStack_e0 = auVar13;
                            auVar13 = FUN_024f6e90(uVar11,auStack_e0,0,1,
                                                   *(undefined8 *)PTR_DAT_049c3ec0);
                            auStack_e0 = auVar13;
                            uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5238);
                            System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                                      (uVar7,lVar3,*(undefined8 *)PTR_DAT_049c3f10,0);
                            auVar13 = FUN_02551be8(auStack_e0,uVar7,*(undefined8 *)PTR_DAT_049c3ee8)
                            ;
                            auStack_e0 = auVar13;
                            auVar13 = FUN_0253a3a4(auStack_e0,iVar1,0,
                                                   *(undefined8 *)PTR_DAT_049c3ed8);
                            LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                      (auVar13._0_8_,auVar13._8_8_,uVar6,
                                       *(undefined8 *)PTR_DAT_049c1f78);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0253d594;
    }
  }
  return;
}

