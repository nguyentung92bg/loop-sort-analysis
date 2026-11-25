/* IL2CPP: SingleProductOfferSubMonitor$$Setup
void SingleProductOfferSubMonitor__Setup (SingleProductOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SingleProductOfferSubMonitor$$Setup
   void SingleProductOfferSubMonitor__Setup (SingleProductOfferSubMonitor_o* __this, const
   MethodInfo* method); */

void SingleProductOfferSubMonitor__Setup_2482074(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  double *pdVar13;
  double dVar14;
  
  puVar6 = PTR_DAT_049c5ab8;
  puVar5 = PTR_DAT_049c5ab0;
  puVar4 = PTR_DAT_049c2f50;
  puVar3 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba0d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5ab0);
    FUN_021f03f8(PTR_DAT_049c5ab8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba0d = 1;
  }
  SubMonitorBase__Setup_2481334(param_1);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x89a31dce,uVar8,0);
  lVar10 = *(long *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar8,param_1,*(undefined8 *)puVar6,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  PurchasingModule__AddPurchaseListener_254a360(lVar10,uVar11,uVar8,0);
  SingleProductOfferSubMonitor__UpdatePrice_2482188(param_1);
  if ((bRam0000000004f4ba10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4ba10 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar10 = Payouts__Get_2570084(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40),0),
     puVar3 = PTR_DAT_049b6110, lVar10 != 0)) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar12 = 0;
      uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      pdVar13 = (double *)(lVar10 + 0x28);
      do {
        if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar2 = *(undefined4 *)(pdVar13 + -1);
        dVar14 = *pdVar13;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar7 = Extensions__ToTextRole_24e6ac0(uVar2,0);
        if (iVar7 != 0) {
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_0258235c;
          iVar1 = -0x80000000;
          if (dVar14 != INFINITY) {
            iVar1 = (int)dVar14;
          }
          uVar8 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x68),uVar2,iVar1,0);
          StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,iVar7,uVar8,0);
        }
        uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar12 = uVar12 + 1;
        pdVar13 = pdVar13 + 2;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    return;
  }
LAB_0258235c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

