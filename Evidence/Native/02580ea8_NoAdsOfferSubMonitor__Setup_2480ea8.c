/* IL2CPP: NoAdsOfferSubMonitor$$Setup
void NoAdsOfferSubMonitor__Setup (NoAdsOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoAdsOfferSubMonitor$$Setup
   void NoAdsOfferSubMonitor__Setup (NoAdsOfferSubMonitor_o* __this, const MethodInfo* method); */

void NoAdsOfferSubMonitor__Setup_2480ea8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [5];
  undefined8 uStack_98;
  long lStack_68;
  
  puVar4 = PTR_DAT_049c5a40;
  puVar3 = PTR_DAT_049b8d80;
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4ba01 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5a40);
    FUN_021f03f8(PTR_DAT_049c5a48);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c2e38);
    bRam0000000004f4ba01 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  SubMonitorBase__Setup_2481334(param_1);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x89a31dce,uVar5,0);
  if (*(long *)(param_1 + 0x48) != 0) {
    PurchasingModule__GetProductMetadata_2549880
              (auStack_c0,*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
              (param_1,0x8bf4b3bd,uStack_98,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0xcaf67d6a,0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x8ec81543,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0xa66c4568,0);
    if (((lVar6 != 0) && (UnityEngine_GameObject__SetActive_3c1ce34(lVar6,0,0), lVar7 != 0)) &&
       (UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0), lVar8 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (lVar9 = Payouts__Get_2570084(*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),0),
         puVar4 = PTR_DAT_049c2e38, puVar3 = PTR_DAT_049b3bd0, lVar9 != 0)) {
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) {
              if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              goto LAB_02581330;
            }
            puVar10 = (undefined8 *)(lVar9 + 0x20 + uVar13 * 0x10);
            uStack_c8 = puVar10[1];
            uStack_d0 = *puVar10;
            iVar2 = (int)uStack_d0;
            if (iVar2 < 0xb) {
              if (iVar2 == 1) {
                uVar5 = System_Double__ToString_30e4ed8((ulong)&uStack_d0 | 8,0);
                uVar11 = 0xf6f322b4;
                goto LAB_02581278;
              }
              if (iVar2 == 10) {
                UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0);
                auStack_c0[0] = uStack_c8;
                uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x80),auStack_c0);
                uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
                uVar11 = 0x8ec81543;
                goto LAB_02581278;
              }
            }
            else {
              if (iVar2 == 0xb) {
                UnityEngine_GameObject__SetActive_3c1ce34(lVar8,1,0);
                uVar5 = *(undefined8 *)(puVar3 + 0x80);
                puVar10 = auStack_c0;
                auStack_c0[0] = uStack_c8;
              }
              else {
                if (iVar2 == 0xc) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
                  auStack_c0[0] = uStack_c8;
                  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x80),auStack_c0);
                  uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
                  uVar11 = 0xcaf67d6a;
                  goto LAB_02581278;
                }
                if (iVar2 != 0x13) goto LAB_02581280;
                UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
                UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0);
                UnityEngine_GameObject__SetActive_3c1ce34(lVar8,1,0);
                auStack_c0[0] = uStack_c8;
                uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x80),auStack_c0);
                uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
                StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                          (param_1,0xcaf67d6a,uVar5,0);
                uStack_d8 = uStack_c8;
                uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x80),&uStack_d8);
                uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
                StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                          (param_1,0x8ec81543,uVar5,0);
                uVar5 = *(undefined8 *)(puVar3 + 0x80);
                uStack_e0 = uStack_c8;
                puVar10 = &uStack_e0;
              }
              uVar5 = thunk_FUN_0222c66c(uVar5,puVar10);
              uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
              uVar11 = 0xa66c4568;
LAB_02581278:
              StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                        (param_1,uVar11,uVar5,0);
            }
LAB_02581280:
            uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        puVar3 = PTR_DAT_049c5a48;
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        lVar6 = *(long *)(param_1 + 0x48);
        uVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2f50);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar11,param_1,*(undefined8 *)puVar3,0);
        if (lVar6 != 0) {
          PurchasingModule__AddPurchaseListener_254a360(lVar6,uVar5,uVar11,0);
          if (*(long *)(lVar1 + 0x28) == lStack_68) {
            return;
          }
          goto LAB_02581330;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02581330:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

