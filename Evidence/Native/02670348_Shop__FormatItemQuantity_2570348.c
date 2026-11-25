/* IL2CPP: Shop$$FormatItemQuantity
System_String_o* Shop__FormatItemQuantity (Shop_o* __this, RewardInfo_o reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Shop$$FormatItemQuantity
   System_String_o* Shop__FormatItemQuantity (Shop_o* __this, RewardInfo_o reward, const MethodInfo*
   method); */

undefined8 Shop__FormatItemQuantity_2570348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uStack_4c;
  undefined8 auStack_48 [2];
  
  iVar7 = (int)param_2;
  if ((bRam0000000004f4c1cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c1cd = 1;
  }
  puVar1 = PTR_DAT_049be928;
  if (iVar7 < 0xb) {
    if (iVar7 < 3) {
      if ((iVar7 != 1) && (iVar7 == 2)) {
        if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_48[0] =
             System_TimeSpan__FromMinutes_311700c((double)(int)((ulong)param_2 >> 0x20),0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b6110);
        }
        puVar1 = PTR_DAT_049b6110;
        if ((bRam0000000004f4bc95 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b6110,2,0);
          FUN_021f03f8(PTR_DAT_049c2ea8);
          FUN_021f03f8(PTR_DAT_049b6128);
          FUN_021f03f8(PTR_DAT_049c5078);
          FUN_021f03f8(PTR_DAT_049c7c80);
          FUN_021f03f8(PTR_DAT_049c7c88);
          FUN_021f03f8(PTR_DAT_049c5080);
          bRam0000000004f4bc95 = 1;
        }
        lVar8 = *(long *)puVar1;
        uStack_4c = 0;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_021f0574();
          lVar8 = *(long *)puVar1;
        }
        puVar6 = PTR_DAT_049c7c88;
        puVar5 = PTR_DAT_049c7c80;
        puVar4 = PTR_DAT_049c5080;
        puVar3 = PTR_DAT_049c5078;
        puVar2 = PTR_DAT_049b6128;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar8 != 0) {
          System_Text_StringBuilder__Clear_2f8ba20(lVar8,0);
          uStack_4c = 0;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar9 = System_TimeSpan__get_Days_3116a70(auStack_48,0);
          Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar6,2,&uStack_4c);
          uVar9 = System_TimeSpan__get_Hours_3116a9c(auStack_48,0);
          Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar4,2,&uStack_4c);
          uVar9 = System_TimeSpan__get_Minutes_3116ae0(auStack_48,0);
          Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar3,2,&uStack_4c);
          uVar9 = System_TimeSpan__get_Seconds_3116b28(auStack_48,0);
          Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar5,2,&uStack_4c);
          lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if (lVar8 != 0) {
            iVar7 = System_Text_StringBuilder__get_Length_2f84c30(lVar8,0);
            if (iVar7 == 0) {
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                FUN_021f0574();
                lVar8 = *(long *)puVar1;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 == 0) goto LAB_025e7268;
              lVar8 = System_Text_StringBuilder__Append_2f843e0(lVar8,0x30,0);
              if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
                FUN_021f0574(*(long *)PTR_DAT_049c2ea8);
              }
              uVar9 = Localization__Get_252dbe0(*(undefined8 *)puVar5,0);
              if (lVar8 == 0) goto LAB_025e7268;
              System_Text_StringBuilder__Append_2f84430(lVar8,uVar9,0);
            }
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              FUN_021f0574();
              lVar8 = *(long *)puVar1;
            }
            plVar10 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
            if (plVar10 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              return uVar9;
            }
          }
        }
LAB_025e7268:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      if (iVar7 == 3) {
        return **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
      if (iVar7 == 10) goto Shop__FormatBoosterQuantity_25702e8;
    }
  }
  else if (iVar7 < 0xd) {
    if ((iVar7 == 0xb) || (iVar7 == 0xc)) {
Shop__FormatBoosterQuantity_25702e8:
      if ((bRam0000000004f4c1ce & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049be928);
        bRam0000000004f4c1ce = 1;
      }
      uVar9 = System_Single__ToString_3112274(&stack0xffffffffffffffec,0);
      uVar9 = System_String__Concat_2f72b28(*(undefined8 *)puVar1,uVar9,0);
      return uVar9;
    }
  }
  else if ((iVar7 == 0xd) || (iVar7 == 0x13)) goto Shop__FormatBoosterQuantity_25702e8;
  if (*(int *)(*(long *)PTR_DAT_049b44e8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar9 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  uVar9 = System_Int32__ToString_30fbbe4(&stack0xffffffffffffffdc,uVar9,0);
  return uVar9;
}

