/* IL2CPP: ChooseOneSubMonitor$$OnDestroy
void ChooseOneSubMonitor__OnDestroy (ChooseOneSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ChooseOneSubMonitor$$OnDestroy
   void ChooseOneSubMonitor__OnDestroy (ChooseOneSubMonitor_o* __this, const MethodInfo* method); */

void ChooseOneSubMonitor__OnDestroy_24702c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049c5578;
  puVar1 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4b99d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5578);
    bRam0000000004f4b99d = 1;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c02e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,10,uVar3,0);
    FUN_021f03f8(PTR_DAT_049ca958);
    FUN_021f03f8(PTR_DAT_049ca960);
    FUN_021f03f8(PTR_DAT_049ca948);
    FUN_021f03f8(PTR_DAT_049ca950);
    bRam0000000004f4c02e = 1;
  }
  if (*(long *)(lVar7 + 0x58) != 0) {
    uStack_48 = 10;
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(lVar7 + 0x58),&uStack_48,*(undefined8 *)PTR_DAT_049ca958);
    puVar1 = PTR_DAT_049ca948;
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x58);
    if (lVar8 != 0) {
      uStack_34 = 10;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar8,&uStack_34,&uStack_48,*(undefined8 *)PTR_DAT_049ca948);
      lVar5 = System_Delegate__Remove_314582c(CONCAT44(uStack_44,uStack_48),uVar3,0);
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
      uStack_48 = 10;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar8,&uStack_48,lVar6,*(undefined8 *)PTR_DAT_049ca950);
      if (*(long *)(lVar7 + 0x58) != 0) {
        uStack_34 = 10;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(lVar7 + 0x58),&uStack_34,&uStack_48,*(undefined8 *)puVar1);
        if (CONCAT44(uStack_44,uStack_48) == 0) {
          if (*(long *)(lVar7 + 0x58) == 0) goto LAB_0264a8e8;
          uStack_48 = 10;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (*(long *)(lVar7 + 0x58),&uStack_48,*(undefined8 *)PTR_DAT_049ca960);
        }
        return;
      }
    }
  }
LAB_0264a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

