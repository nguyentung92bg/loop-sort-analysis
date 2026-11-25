/* IL2CPP: FulfillSummary$$ToString
System_String_o* FulfillSummary__ToString (FulfillSummary_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillSummary$$ToString
   System_String_o* FulfillSummary__ToString (FulfillSummary_o __this, const MethodInfo* method); */

void FulfillSummary__ToString_254ae5c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_049ca9b8;
  puVar1 = PTR_DAT_049b4b60;
  if ((bRam0000000004f4c03b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b5298);
    FUN_021f03f8(PTR_DAT_049c40c8);
    FUN_021f03f8(PTR_DAT_049c40d0);
    FUN_021f03f8(PTR_DAT_049b4b60);
    FUN_021f03f8(PTR_DAT_049ca9b8);
    bRam0000000004f4c03b = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plVar4 = (long *)thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Text_StringBuilder___ctor_2f8ad68(plVar4,*(undefined8 *)puVar2,0);
  puVar3 = PTR_DAT_049c40d0;
  puVar2 = PTR_DAT_049b5298;
  puVar1 = PTR_DAT_049b44e8;
  lVar5 = *param_1;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
    if (plVar4 != (long *)0x0) {
      System_Text_StringBuilder__Append_2f843e0(plVar4,0x2d,0);
LAB_0264b018:
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
  else {
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar5 + 0x18)) {
      if (iVar7 != 0) {
        if (plVar4 == (long *)0x0) goto LAB_0264aff8;
        System_Text_StringBuilder__Append_2f843e0(plVar4,0x2b,0);
        lVar5 = *param_1;
        if (lVar5 == 0) goto LAB_0264aff8;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar5,iVar7,&uStack_60,*(undefined8 *)puVar3);
      uStack_70 = CONCAT44(uStack_5c,uStack_60);
      uStack_68 = uStack_58;
      uVar6 = thunk_FUN_0222c66c(*(undefined8 *)puVar2,&uStack_60);
      if ((plVar4 == (long *)0x0) ||
         (lVar5 = System_Text_StringBuilder__Append_2f8cfb0(plVar4,uVar6,0), lVar5 == 0))
      goto LAB_0264aff8;
      lVar5 = System_Text_StringBuilder__Append_2f843e0(lVar5,0x78,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
      uVar6 = System_Double__ToString_30e4fdc((ulong)&uStack_70 | 8,uVar6,0);
      if (lVar5 == 0) goto LAB_0264aff8;
      System_Text_StringBuilder__Append_2f84430(lVar5,uVar6,0);
      lVar5 = *param_1;
      iVar7 = iVar7 + 1;
      if (lVar5 == 0) goto LAB_0264aff8;
    }
    if (plVar4 != (long *)0x0) goto LAB_0264b018;
  }
LAB_0264aff8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

