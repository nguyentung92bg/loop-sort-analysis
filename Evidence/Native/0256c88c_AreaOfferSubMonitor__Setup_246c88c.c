/* IL2CPP: AreaOfferSubMonitor$$Setup
void AreaOfferSubMonitor__Setup (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$Setup
   void AreaOfferSubMonitor__Setup (AreaOfferSubMonitor_o* __this, const MethodInfo* method); */

void AreaOfferSubMonitor__Setup_246c88c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  double *pdVar18;
  double dVar19;
  
  puVar4 = PTR_DAT_049b6110;
  if ((bRam0000000004f4b984 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5430);
    FUN_021f03f8(PTR_DAT_049c5438);
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b984 = 1;
  }
  SubMonitorBase__Setup_2481334(param_1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar9 = (long *)Extensions__ToClassInstance_24e79d0(uVar2,0);
  if (plVar9 != (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_049c5440;
    bVar3 = *(byte *)(lVar12 + 0x130);
    if ((bVar3 <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) == lVar12)) {
      *(long **)(param_1 + 0x68) = plVar9;
      if ((bVar3 <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) == lVar12)) goto LAB_0256c9a8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(plVar9);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
LAB_0256c9a8:
  plVar14 = (long *)(param_1 + 0x68);
  thunk_FUN_021f190c(plVar14,plVar9);
  puVar7 = PTR_DAT_049c5438;
  puVar6 = PTR_DAT_049c5430;
  puVar5 = PTR_DAT_049c2f50;
  puVar4 = PTR_DAT_049b8d80;
  if (*plVar14 != 0) {
    uVar10 = AreaOffer__get_ProductId_2509624(*plVar14,0);
    puVar15 = (undefined8 *)(param_1 + 0x70);
    *puVar15 = uVar10;
    thunk_FUN_021f190c(puVar15,uVar10);
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,param_1,*(undefined8 *)puVar6,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
              (param_1,0x89a31dce,uVar10,0);
    lVar12 = *(long *)(param_1 + 0x48);
    uVar16 = *puVar15;
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar10,param_1,*(undefined8 *)puVar7,0);
    if (lVar12 != 0) {
      PurchasingModule__AddPurchaseListener_254a360(lVar12,uVar16,uVar10,0);
      if (*plVar14 != 0) {
        uVar10 = AreaOffer__GetTitle_250a0e8(*plVar14,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0x91273900,uVar10,0);
        AreaOfferSubMonitor__UpdateArt_246cabc(param_1);
        AreaOfferSubMonitor__UpdatePrice_246cc3c(param_1);
        puVar4 = PTR_DAT_049c5458;
        if ((bRam0000000004f4b988 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c5458);
          FUN_021f03f8(PTR_DAT_049b6110);
          bRam0000000004f4b988 = 1;
        }
        lVar12 = *(long *)puVar4;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          FUN_021f0574();
          lVar12 = *(long *)puVar4;
        }
        lVar12 = **(long **)(lVar12 + 0xb8);
        if (lVar12 != 0) {
          if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
            uVar17 = 0;
            uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar17) goto LAB_0256cf00;
              uVar2 = *(undefined4 *)(lVar12 + 0x20 + uVar17 * 4);
              uVar13 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                                 (param_1,uVar2,0);
              if ((uVar13 & 1) != 0) {
                lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                   (param_1,uVar2,0);
                if (lVar11 == 0) goto LAB_0256cf04;
                UnityEngine_GameObject__SetActive_3c1ce34(lVar11,0,0);
              }
              uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar12 = Payouts__Get_2570084
                                 (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70),0),
             puVar4 = PTR_DAT_049b6110, lVar12 != 0)) {
            if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
              uVar17 = 0;
              uVar13 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
              pdVar18 = (double *)(lVar12 + 0x28);
              do {
                if (uVar13 <= uVar17) {
LAB_0256cf00:
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a8();
                }
                uVar2 = *(undefined4 *)(pdVar18 + -1);
                dVar19 = *pdVar18;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                iVar8 = Extensions__ToObjectRole_24e6ae4(uVar2,0);
                if ((iVar8 != 0) &&
                   (uVar13 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                                       (param_1,iVar8,0), (uVar13 & 1) != 0)) {
                  lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                     (param_1,iVar8,0);
                  if (lVar11 == 0) goto LAB_0256cf04;
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar11,1,0);
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                iVar8 = Extensions__ToTextRole_24e6ac0(uVar2,0);
                if (iVar8 != 0) {
                  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0256cf04;
                  iVar1 = -0x80000000;
                  if (dVar19 != INFINITY) {
                    iVar1 = (int)dVar19;
                  }
                  uVar10 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x58),uVar2,iVar1,0)
                  ;
                  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                            (param_1,iVar8,uVar10,0);
                }
                uVar13 = (ulong)*(uint *)(lVar12 + 0x18);
                uVar17 = uVar17 + 1;
                pdVar18 = pdVar18 + 2;
              } while ((long)uVar17 < (long)(int)*(uint *)(lVar12 + 0x18));
            }
            return;
          }
        }
LAB_0256cf04:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

