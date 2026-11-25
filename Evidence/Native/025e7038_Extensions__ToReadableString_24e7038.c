/* IL2CPP: Extensions$$ToReadableString
System_String_o* Extensions__ToReadableString (System_TimeSpan_o timeSpan, int32_t maxUnits, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToReadableString
   System_String_o* Extensions__ToReadableString (System_TimeSpan_o timeSpan, int32_t maxUnits,
   const MethodInfo* method); */

void Extensions__ToReadableString_24e7038(undefined8 param_1,undefined4 param_2)

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
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b6110;
  uStack_48 = param_1;
  if ((bRam0000000004f4bc95 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
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
                    /* try { // try from 025e7118 to 026e72cb has its CatchHandler @ 025e7118
                       catch() { ... } // from try @ 025e7118 with catch @ 025e7118
                       catch() { ... } // from try @ 025e7338 with catch @ 025e7118
                       catch() { ... } // from try @ 025e7414 with catch @ 025e7118
                       catch() { ... } // from try @ 025e77d8 with catch @ 025e7118
                       catch() { ... } // from try @ 025e7838 with catch @ 025e7118
                       catch() { ... } // from try @ 025e7864 with catch @ 025e7118 */
    uStack_4c = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = System_TimeSpan__get_Days_3116a70(&uStack_48,0);
    Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar6,param_2,&uStack_4c);
    uVar9 = System_TimeSpan__get_Hours_3116a9c(&uStack_48,0);
    Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar4,param_2,&uStack_4c);
    uVar9 = System_TimeSpan__get_Minutes_3116ae0(&uStack_48,0);
    Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar3,param_2,&uStack_4c);
    uVar9 = System_TimeSpan__get_Seconds_3116b28(&uStack_48,0);
    Extensions__AppendUnit_24e726c(uVar9,*(undefined8 *)puVar5,param_2,&uStack_4c);
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
        (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        return;
      }
    }
  }
LAB_025e7268:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

