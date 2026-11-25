/* IL2CPP: ShopMonitor$$FormatLifeQuantity
System_String_o* ShopMonitor__FormatLifeQuantity (ShopMonitor_o* __this, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$FormatLifeQuantity
   System_String_o* ShopMonitor__FormatLifeQuantity (ShopMonitor_o* __this, double quantity, const
   MethodInfo* method); */

void ShopMonitor__FormatLifeQuantity_2461e38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  int iStack_34;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b6128;
  if ((bRam0000000004f4b948 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049ba8a8);
    FUN_021f03f8(PTR_DAT_049c5078);
    FUN_021f03f8(PTR_DAT_049c5080);
    bRam0000000004f4b948 = 1;
  }
  puVar3 = PTR_DAT_049c2ea8;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049ba8a8;
  uStack_28 = System_TimeSpan__FromMinutes_311700c(param_1,0);
  dVar8 = (double)System_TimeSpan__get_TotalHours_3116b8c(&uStack_28,0);
  puVar5 = PTR_DAT_049c5080;
  puVar4 = PTR_DAT_049c5078;
  if (1.0 <= dVar8) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = Localization__Get_252dbe0(*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    dVar8 = (double)System_TimeSpan__get_TotalHours_3116b8c(&uStack_28,0);
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = Localization__Get_252dbe0(*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    dVar8 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_28,0);
  }
  iStack_34 = -0x80000000;
  if (dVar8 != INFINITY) {
    iStack_34 = (int)dVar8;
  }
  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_34);
  System_String__Format_2f7dfac(*(undefined8 *)puVar2,uVar7,uVar6,0);
  return;
}

