/* IL2CPP: ReviveSystem$$GetContinueBoosterType
int32_t ReviveSystem__GetContinueBoosterType (ReviveSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSystem$$GetContinueBoosterType
   int32_t ReviveSystem__GetContinueBoosterType (ReviveSystem_o* __this, const MethodInfo* method);
    */

undefined4 ReviveSystem__GetContinueBoosterType_24e10e0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bc67 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4948);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bc67 = 1;
  }
  lVar4 = ReviveSystem__GetRevive_24e0f1c(param_1);
  puVar2 = PTR_DAT_049b5310;
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_025e11dc;
  uVar1 = *(undefined4 *)(lVar4 + 0x18);
  uVar6 = uVar1;
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x10) != '\0') {
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
    uStack_48 = *(undefined8 *)(lVar4 + 0x778);
    uStack_50 = *(undefined8 *)(lVar4 + 0x770);
    uStack_38 = *(undefined8 *)(lVar4 + 0x788);
    uStack_40 = *(undefined8 *)(lVar4 + 0x780);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_50,0);
    if (iVar3 < 1) {
      if ((*(long *)(param_1 + 0x58) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x40), lVar4 == 0)) {
LAB_025e11dc:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_24 = 4;
      uVar5 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                        (lVar4,&uStack_24,*(undefined8 *)PTR_DAT_049c4948);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_025e11dc;
        uVar5 = CapacityBoosterSystem__HasCapacityCarrier_23f48e4(*(long *)(param_1 + 0x30),0);
        uVar6 = 4;
        if ((uVar5 & 1) == 0) {
          uVar6 = uVar1;
        }
      }
    }
  }
  return uVar6;
}

