/* IL2CPP: CoinRushSubMonitor$$CreateMilestoneElement
void CoinRushSubMonitor__CreateMilestoneElement (CoinRushSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, CoinRushSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$CreateMilestoneElement
   void CoinRushSubMonitor__CreateMilestoneElement (CoinRushSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, CoinRushSheet_Row_o* data, const MethodInfo*
   method); */

void CoinRushSubMonitor__CreateMilestoneElement_2470b28
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar4 = PTR_DAT_049c55a8;
  if ((bRam0000000004f4b9a4 & 1) == 0) {
                    /* try { // try from 02570b6c to 02670ca3 has its CatchHandler @ 02570b6c
                       catch() { ... } // from try @ 02570b6c with catch @ 02570b6c
                       catch() { ... } // from try @ 02570d10 with catch @ 02570b6c
                       catch() { ... } // from try @ 02570f98 with catch @ 02570b6c
                       catch() { ... } // from try @ 02571474 with catch @ 02570b6c
                       catch() { ... } // from try @ 02571518 with catch @ 02570b6c
                       catch() { ... } // from try @ 0257156c with catch @ 02570b6c
                       catch() { ... } // from try @ 02571598 with catch @ 02570b6c */
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c55b0);
    FUN_021f03f8(PTR_DAT_049c55a8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4b9a4 = 1;
  }
  uStack_68 = 0;
  iStack_64 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Object___ctor_3142338(lVar8,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar8 + 0x10),param_1);
    puVar13 = (undefined8 *)(lVar8 + 0x18);
    *puVar13 = param_2;
    thunk_FUN_021f190c(puVar13,param_2);
    plVar14 = (long *)(lVar8 + 0x20);
    *plVar14 = param_3;
    thunk_FUN_021f190c(plVar14,param_3);
    lVar12 = *(long *)(param_1 + 0x40);
    if (lVar12 != 0) {
      uStack_a8 = *(undefined8 *)(lVar12 + 0x78);
      uStack_b0 = *(undefined8 *)(lVar12 + 0x70);
      uStack_98 = *(undefined8 *)(lVar12 + 0x88);
      uStack_a0 = *(undefined8 *)(lVar12 + 0x80);
      iVar5 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_b0,0);
      lVar12 = *plVar14;
      if (lVar12 != 0) {
        iStack_64 = *(int *)(lVar12 + 0x18);
        uStack_68 = *(undefined4 *)(lVar12 + 0x1c);
        if (iStack_64 <= iVar5) {
          iVar5 = iStack_64;
        }
        fVar17 = (float)iVar5 / (float)iStack_64;
        fVar2 = 1.0;
        if (fVar17 <= 1.0) {
          fVar2 = fVar17;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar17) {
          fVar18 = fVar2;
        }
        uVar9 = System_Int32__ToString_30fbaa0(&uStack_68,0);
        lVar12 = *plVar14;
        if (lVar12 != 0) {
          uStack_88 = *(undefined8 *)(lVar12 + 0x48);
          uStack_90 = *(undefined8 *)(lVar12 + 0x40);
          uStack_78 = *(undefined8 *)(lVar12 + 0x58);
          uStack_80 = *(undefined8 *)(lVar12 + 0x50);
          uVar6 = CloudPrefsBool__get_Value_24eb0d0(&uStack_90,0);
          puVar4 = PTR_DAT_049b4540;
          lVar12 = *plVar14;
          if (lVar12 != 0) {
            uStack_88 = *(undefined8 *)(lVar12 + 0x28);
            uStack_90 = *(undefined8 *)(lVar12 + 0x20);
            uStack_78 = *(undefined8 *)(lVar12 + 0x38);
            uStack_80 = *(undefined8 *)(lVar12 + 0x30);
                    /* try { // try from 02570ca4 to 02670cab has its CatchHandler @ 02571574 */
            uVar7 = CloudPrefsBool__get_Value_24eb0d0(&uStack_90,0);
            uVar15 = *puVar13;
                    /* try { // try from 02570cc4 to 02670d0f has its CatchHandler @ 02571578 */
            lVar12 = FUN_021f04e4(*(undefined8 *)puVar4,1);
            uVar10 = System_Int32__ToString_30fbaa0(&iStack_64,0);
            puVar4 = PTR_DAT_049c55b8;
            if (lVar12 != 0) {
              if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              *(undefined8 *)(lVar12 + 0x20) = uVar10;
              thunk_FUN_021f190c();
                    /* try { // try from 02570d10 to 02670f2b has its CatchHandler @ 02570b6c */
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                        (uVar15,0x993134c1,lVar12,0);
              puVar3 = PTR_DAT_049b3bd0;
              uVar16 = *puVar13;
              iStack_b4 = iVar5;
              uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_b4);
              iStack_b8 = iStack_64;
              uVar15 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&iStack_b8);
              uVar10 = System_String__Format_2f7dfac(*(undefined8 *)puVar4,uVar10,uVar15,0);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                        (uVar16,0x5cac0bbb,uVar10,0);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                        (*puVar13,0x78d4e5eb,uVar9,0);
              lVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                 (*puVar13,0x6d8b1339,0);
              if ((lVar12 != 0) &&
                 (lVar12 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar12,0), lVar12 != 0)
                 ) {
                UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar18,0x3f800000,lVar12,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (*puVar13,0x5f10e269,0);
                lVar12 = *(long *)(param_1 + 0x40);
                if (lVar12 != 0) {
                  uStack_d8 = *(undefined8 *)(lVar12 + 0x38);
                  uStack_e0 = *(undefined8 *)(lVar12 + 0x30);
                  uStack_c8 = *(undefined8 *)(lVar12 + 0x48);
                  uStack_d0 = *(undefined8 *)(lVar12 + 0x40);
                  uVar9 = *puVar13;
                  uVar11 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_e0,0);
                  uVar1 = 0xcbb1848a;
                  if ((uVar11 & 1) == 0) {
                    uVar1 = 0x39740faf;
                  }
                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                            (uVar9,uVar1,0);
                  if (((uVar7 | uVar6 ^ 0xffffffff) & 1) == 0) {
                    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                              (*puVar13,0x39cfe44a,0);
                  }
                  if ((uVar6 & uVar7 & 1) != 0) {
                    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                              (*puVar13,0x240695d9,0);
                  }
                  lVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                                     (*puVar13,0x39cfe44a,0);
                  puVar3 = PTR_DAT_049c55b0;
                  puVar4 = PTR_DAT_049b8d80;
                  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x100) != 0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                              (*(long *)(lVar12 + 0x100),0);
                    lVar12 = *(long *)(lVar12 + 0x100);
                    uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                    UnityEngine_Events_UnityAction___ctor_3c32934
                              (uVar9,lVar8,*(undefined8 *)puVar3,0);
                    if (lVar12 != 0) {
                      UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar12,uVar9,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

