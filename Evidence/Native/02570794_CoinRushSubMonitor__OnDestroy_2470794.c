/* IL2CPP: CoinRushSubMonitor$$OnDestroy
void CoinRushSubMonitor__OnDestroy (CoinRushSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$OnDestroy
   void CoinRushSubMonitor__OnDestroy (CoinRushSubMonitor_o* __this, const MethodInfo* method); */

void CoinRushSubMonitor__OnDestroy_2470794(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_38;
  
  puVar2 = PTR_DAT_049c5588;
  puVar1 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4b9a1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5588);
    FUN_021f03f8(PTR_DAT_049c5598);
    bRam0000000004f4b9a1 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x50);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = *(undefined8 *)PTR_DAT_049c5598;
  if ((bRam0000000004f4c02c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,uVar7,uVar3,0);
    FUN_021f03f8(PTR_DAT_049ca930);
    FUN_021f03f8(PTR_DAT_049ca938);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02c = 1;
  }
  if (*(long *)(lVar8 + 0x50) != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(lVar8 + 0x50),uVar7,*(undefined8 *)PTR_DAT_049ca930);
    puVar1 = PTR_DAT_049ca920;
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(lVar8 + 0x50);
    if (lVar9 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar9,uVar7,&lStack_38,*(undefined8 *)PTR_DAT_049ca920);
      lVar5 = System_Delegate__Remove_314582c(lStack_38,uVar3,0);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        uVar3 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar6 = thunk_FUN_0222c938(lVar5,uVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar5,uVar3);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar9,uVar7,lVar6,*(undefined8 *)PTR_DAT_049ca928);
      if (*(long *)(lVar8 + 0x50) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(lVar8 + 0x50),uVar7,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) {
          if (*(long *)(lVar8 + 0x50) == 0) goto LAB_0264a60c;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(lVar8 + 0x50),uVar7,*(undefined8 *)PTR_DAT_049ca938);
        }
        return;
      }
    }
  }
LAB_0264a60c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

