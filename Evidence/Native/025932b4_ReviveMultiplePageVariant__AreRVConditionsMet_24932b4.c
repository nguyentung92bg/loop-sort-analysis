/* IL2CPP: ReviveMultiplePageVariant$$AreRVConditionsMet
bool ReviveMultiplePageVariant__AreRVConditionsMet (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$AreRVConditionsMet
   bool ReviveMultiplePageVariant__AreRVConditionsMet (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

bool ReviveMultiplePageVariant__AreRVConditionsMet_24932b4(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba85 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4ba85 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(long *)(param_1 + 0xc0) != 0) {
    if (*(char *)(*(long *)(param_1 + 0xc0) + 0x10) == '\0') {
      bVar2 = false;
    }
    else {
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      uStack_38 = *(undefined8 *)(lVar4 + 0x68);
      uStack_40 = *(undefined8 *)(lVar4 + 0x60);
      uStack_28 = *(undefined8 *)(lVar4 + 0x78);
      uStack_30 = *(undefined8 *)(lVar4 + 0x70);
      iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_02593358;
      bVar2 = *(int *)(*(long *)(param_1 + 0xc0) + 0x14) <= iVar3 + 1;
    }
    return bVar2;
  }
LAB_02593358:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

