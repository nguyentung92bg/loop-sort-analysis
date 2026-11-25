/* IL2CPP: VoodooTuneProvider$$GetActiveCohortNames
System_String_array* VoodooTuneProvider__GetActiveCohortNames (VoodooTuneProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooTuneProvider$$GetActiveCohortNames
   System_String_array* VoodooTuneProvider__GetActiveCohortNames (VoodooTuneProvider_o* __this,
   const MethodInfo* method); */

undefined8 VoodooTuneProvider__GetActiveCohortNames_2258d28(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 unaff_x30;
  
  puVar2 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bde = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b6238;
  if ((bRam0000000004f5f472 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ba9a0);
    FUN_021f03f8(PTR_DAT_049b6238);
    bRam0000000004f5f472 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = Voodoo_Sauce_Internal_VoodooTune_VoodooTuneManager__GetAbTestCohortNamesAsList_445f884(0);
  if (lVar4 != 0) {
    lVar5 = *(long *)PTR_DAT_049ba9a0;
    iVar1 = *(int *)(lVar4 + 0x18);
    lVar6 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
    if (iVar1 == 0) {
      lVar4 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    }
    else {
      lVar5 = *(long *)(lVar6 + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar3 = FUN_021f04e4(lVar5,iVar1);
      System_Array__Copy_3122c7c
                (*(undefined8 *)(lVar4 + 0x10),0,uVar3,0,*(undefined4 *)(lVar4 + 0x18),0,in_x6,in_x7
                 ,unaff_x30);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

