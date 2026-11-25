/* IL2CPP: AreaOfferSubMonitor$$UpdatePayouts
void AreaOfferSubMonitor__UpdatePayouts (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$UpdatePayouts
   void AreaOfferSubMonitor__UpdatePayouts (AreaOfferSubMonitor_o* __this, const MethodInfo*
   method); */

void AreaOfferSubMonitor__UpdatePayouts_246ccf0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  double *pdVar10;
  double dVar11;
  
  puVar3 = PTR_DAT_049c5458;
  if ((bRam0000000004f4b988 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5458);
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4b988 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar9 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar9) goto LAB_0256cf00;
        uVar2 = *(undefined4 *)(lVar5 + 0x20 + uVar9 * 4);
        uVar8 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                          (param_1,uVar2,0);
        if ((uVar8 & 1) != 0) {
          lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                            (param_1,uVar2,0);
          if (lVar6 == 0) goto LAB_0256cf04;
          UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0);
        }
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar5 = Payouts__Get_2570084(*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70),0),
       puVar3 = PTR_DAT_049b6110, lVar5 != 0)) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar9 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        pdVar10 = (double *)(lVar5 + 0x28);
        do {
          if (uVar8 <= uVar9) {
LAB_0256cf00:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar2 = *(undefined4 *)(pdVar10 + -1);
          dVar11 = *pdVar10;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar4 = Extensions__ToObjectRole_24e6ae4(uVar2,0);
          if ((iVar4 != 0) &&
             (uVar8 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                                (param_1,iVar4,0), (uVar8 & 1) != 0)) {
            lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                              (param_1,iVar4,0);
            if (lVar6 == 0) goto LAB_0256cf04;
            UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          iVar4 = Extensions__ToTextRole_24e6ac0(uVar2,0);
          if (iVar4 != 0) {
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_0256cf04;
            iVar1 = -0x80000000;
            if (dVar11 != INFINITY) {
              iVar1 = (int)dVar11;
            }
            uVar7 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x58),uVar2,iVar1,0);
            StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                      (param_1,iVar4,uVar7,0);
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar9 = uVar9 + 1;
          pdVar10 = pdVar10 + 2;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      return;
    }
  }
LAB_0256cf04:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

