/* IL2CPP: SingleProductOfferSubMonitor$$UpdatePayouts
void SingleProductOfferSubMonitor__UpdatePayouts (SingleProductOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SingleProductOfferSubMonitor$$UpdatePayouts
   void SingleProductOfferSubMonitor__UpdatePayouts (SingleProductOfferSubMonitor_o* __this, const
   MethodInfo* method); */

void SingleProductOfferSubMonitor__UpdatePayouts_248223c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  double *pdVar9;
  double dVar10;
  
  if ((bRam0000000004f4ba10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4ba10 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar5 = Payouts__Get_2570084(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40),0),
     puVar3 = PTR_DAT_049b6110, lVar5 != 0)) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      pdVar9 = (double *)(lVar5 + 0x28);
      do {
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar2 = *(undefined4 *)(pdVar9 + -1);
        dVar10 = *pdVar9;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar4 = Extensions__ToTextRole_24e6ac0(uVar2,0);
        if (iVar4 != 0) {
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_0258235c;
          iVar1 = -0x80000000;
          if (dVar10 != INFINITY) {
            iVar1 = (int)dVar10;
          }
          uVar6 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x68),uVar2,iVar1,0);
          StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,iVar4,uVar6,0);
        }
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
        pdVar9 = pdVar9 + 2;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
LAB_0258235c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

