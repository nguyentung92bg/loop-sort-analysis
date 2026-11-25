/* IL2CPP: ReviveOfferElement$$OnActivated
void ReviveOfferElement__OnActivated (ReviveOfferElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveOfferElement$$OnActivated
   void ReviveOfferElement__OnActivated (ReviveOfferElement_o* __this, const MethodInfo* method); */

void ReviveOfferElement__OnActivated_241e3dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x23;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049c2f58;
  puVar1 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4b76b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c2f58);
    bRam0000000004f4b76b = 1;
  }
  ReviveOfferElement__UpdateView_241e47c(param_1);
  lVar7 = *(long *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c02b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,uVar8,uVar3,0);
    FUN_021f03f8(PTR_DAT_049ca918);
    FUN_021f03f8(PTR_DAT_049ca908);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02b = 1;
  }
  uStack_38 = 0;
  if (*(long *)(lVar7 + 0x50) != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(lVar7 + 0x50),uVar8,&uStack_38,*(undefined8 *)PTR_DAT_049ca908);
    lVar7 = *(long *)(lVar7 + 0x50);
    if ((uVar4 & 1) == 0) {
      if (lVar7 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar7,uVar8,uVar3,*(undefined8 *)PTR_DAT_049ca918);
    }
    else {
      if (lVar7 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar7,uVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049ca920);
      lVar5 = System_Delegate__Combine_3145640(unaff_x23,uVar3,0);
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
                (lVar7,uVar8,lVar6,*(undefined8 *)PTR_DAT_049ca928);
    }
    return;
  }
LAB_0264a4ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

