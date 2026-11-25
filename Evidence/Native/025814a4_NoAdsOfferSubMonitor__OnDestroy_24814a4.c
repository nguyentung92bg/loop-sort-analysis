/* IL2CPP: NoAdsOfferSubMonitor$$OnDestroy
void NoAdsOfferSubMonitor__OnDestroy (NoAdsOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoAdsOfferSubMonitor$$OnDestroy
   void NoAdsOfferSubMonitor__OnDestroy (NoAdsOfferSubMonitor_o* __this, const MethodInfo* method);
    */

void NoAdsOfferSubMonitor__OnDestroy_24814a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_38;
  
  puVar4 = PTR_DAT_049c5a48;
  puVar3 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4ba02 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5a48);
    bRam0000000004f4ba02 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c02c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,uVar1,uVar5,0);
    FUN_021f03f8(PTR_DAT_049ca930);
    FUN_021f03f8(PTR_DAT_049ca938);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02c = 1;
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(lVar2 + 0x50),uVar1,*(undefined8 *)PTR_DAT_049ca930);
    puVar3 = PTR_DAT_049ca920;
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(lVar2 + 0x50);
    if (lVar9 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar9,uVar1,&lStack_38,*(undefined8 *)PTR_DAT_049ca920);
      lVar7 = System_Delegate__Remove_314582c(lStack_38,uVar5,0);
      if (lVar7 == 0) {
        lVar8 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar8 = thunk_FUN_0222c938(lVar7,uVar5);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar7,uVar5);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar9,uVar1,lVar8,*(undefined8 *)PTR_DAT_049ca928);
      if (*(long *)(lVar2 + 0x50) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(lVar2 + 0x50),uVar1,&lStack_38,*(undefined8 *)puVar3);
        if (lStack_38 == 0) {
          if (*(long *)(lVar2 + 0x50) == 0) goto LAB_0264a60c;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(lVar2 + 0x50),uVar1,*(undefined8 *)PTR_DAT_049ca938);
        }
        return;
      }
    }
  }
LAB_0264a60c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

