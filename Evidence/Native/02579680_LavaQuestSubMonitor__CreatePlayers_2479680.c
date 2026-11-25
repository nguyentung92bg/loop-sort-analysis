/* IL2CPP: LavaQuestSubMonitor$$CreatePlayers
void LavaQuestSubMonitor__CreatePlayers (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LavaQuestSubMonitor$$CreatePlayers
   void LavaQuestSubMonitor__CreatePlayers (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game,
   const MethodInfo* method); */

void LavaQuestSubMonitor__CreatePlayers_2479680
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  float fStack_a8;
  
  if ((bRam0000000004f4b9dd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c4640);
    FUN_021f03f8(PTR_DAT_049bed78);
    bRam0000000004f4b9dd = 1;
  }
  lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                    (*(undefined8 *)(param_4 + 0x68),0x6fcf623b,0);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar9,0);
    iVar14 = param_5[1];
    uStack_c8 = *(undefined8 *)(param_5 + 2);
    uStack_d0 = *(undefined8 *)param_5;
    uStack_c0 = *(undefined8 *)(param_5 + 4);
    iVar1 = iVar14;
    if (0xb < iVar14) {
      iVar1 = 0xc;
    }
    uVar10 = LavaQuestSubMonitor__GetCurrentStage_2479e80(param_4,&uStack_d0);
    lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (uVar10,0x5cac527c,0);
    if ((lVar11 != 0) &&
       (lVar11 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar11,0),
       lVar11 != 0)) {
      uVar10 = UnityEngine_Transform__get_position_3c2d540(lVar11,0);
      lVar11 = LavaQuestSubMonitor__BuildPlayerOffsets_2479eec(iVar1);
      LavaQuestSubMonitor__FindClosestEliminatePoints_2479c64(uVar10,param_2,param_3,param_4);
      lVar15 = *(long *)(param_4 + 0xb0);
      if (lVar15 != 0) {
        lVar13 = *(long *)PTR_DAT_049c4640;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        uVar12 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if ((uVar12 & 1) == 0) {
          *(undefined4 *)(lVar15 + 0x18) = 0;
        }
        else {
          iVar2 = *(int *)(lVar15 + 0x18);
          *(undefined4 *)(lVar15 + 0x18) = 0;
          if (0 < iVar2) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar15 + 0x10),0,iVar2,0);
          }
        }
        puVar8 = PTR_DAT_049c3e40;
        puVar7 = PTR_DAT_049bed78;
        puVar6 = PTR_DAT_049bbf90;
        fVar5 = _UNK_013aa8fc;
        fVar4 = _UNK_013aa8c8;
        if (0 < iVar14) {
          uVar16 = NEON_fmov(0xbe800000,4);
          iVar14 = 0;
          do {
            lVar15 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar9,0);
            if (lVar11 == 0) goto LAB_02579a4c;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar11,iVar14,&uStack_b0,*(undefined8 *)puVar7);
            fVar19 = fStack_a8;
            uVar18 = uStack_b0;
            fVar3 = 1.0;
            if (*param_5 != 0) {
              fVar3 = fVar5;
            }
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(puVar6);
              cRam0000000004f4a190 = '\x01';
            }
            uVar12 = *(ulong *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc);
            fVar17 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                      (lVar15,0x5f10e269,0);
            if (iVar14 == 0) {
              *(long *)(param_4 + 0xa0) = lVar15;
              thunk_FUN_021f190c(param_4 + 0xa0,lVar15);
              if (cRam0000000004f4a55e == '\0') {
                FUN_021f03f8(puVar6);
                cRam0000000004f4a55e = '\x01';
              }
              lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
              uVar18 = *(undefined8 *)(lVar13 + 0x18);
              fVar19 = *(float *)(lVar13 + 0x20);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(puVar6);
                cRam0000000004f4a190 = '\x01';
                lVar13 = *(long *)(*(long *)puVar6 + 0xb8);
              }
              fVar20 = (float)uVar18 * (float)uVar16;
              fVar21 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
              fVar17 = *(float *)(lVar13 + 0x14) * fVar4;
              fVar19 = fVar19 * -0.25;
              uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0xc) >> 0x20) * 1.15,
                                (float)*(undefined8 *)(lVar13 + 0xc) * 1.15);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                        (lVar15,0xa41ab296,0);
            }
            else {
              fVar20 = (float)uVar18 * fVar3;
              fVar21 = (float)((ulong)uVar18 >> 0x20) * fVar3;
              fVar19 = fVar19 * fVar3;
            }
            if ((lVar15 == 0) ||
               (lVar13 = UnityEngine_Component__get_transform_3c18724(lVar15,0), lVar13 == 0))
            goto LAB_02579a4c;
            fVar21 = (float)param_2 + fVar21;
            UnityEngine_Transform__set_position_3c2d61c
                      (CONCAT44(fVar21,(float)uVar10 + fVar20),fVar21,param_3 + fVar19,lVar13,0);
            lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                               (lVar15,0xe079e024,0);
            if ((lVar13 == 0) ||
               (lVar13 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec
                                   (lVar13,0), lVar13 == 0)) goto LAB_02579a4c;
            UnityEngine_Transform__set_localScale_3c2ddfc(uVar12,uVar12 >> 0x20,fVar17,lVar13,0);
            if (*(long *)(param_4 + 0xb0) == 0) goto LAB_02579a4c;
            FUN_02333498(*(long *)(param_4 + 0xb0),lVar15,*(undefined8 *)puVar8);
            iVar14 = iVar14 + 1;
          } while (iVar1 != iVar14);
        }
        LavaQuestSubMonitor__SetPlayerAvatars_247a1cc(param_4);
        LavaQuestSubMonitor__UpdatePlayerRenderOrder_247a640(param_4);
        return;
      }
    }
  }
LAB_02579a4c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

