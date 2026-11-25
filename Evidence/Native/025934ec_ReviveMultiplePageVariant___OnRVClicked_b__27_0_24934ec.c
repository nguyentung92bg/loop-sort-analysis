/* IL2CPP: ReviveMultiplePageVariant$$<OnRVClicked>b__27_0
void ReviveMultiplePageVariant___OnRVClicked_b__27_0 (ReviveMultiplePageVariant_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$<OnRVClicked>b__27_0
   void ReviveMultiplePageVariant___OnRVClicked_b__27_0 (ReviveMultiplePageVariant_o* __this, bool
   watched, const MethodInfo* method); */

void ReviveMultiplePageVariant___OnRVClicked_b__27_0_24934ec(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  if ((bRam0000000004f4ba89 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c48b0);
    bRam0000000004f4ba89 = 1;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x90);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar1 = *(undefined4 *)(param_1 + 200);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c48b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02593590;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c48b0,0);
LAB_02593590:
    uStack_30 = 0;
    uStack_28 = 1;
    uStack_27 = 0;
    uStack_23 = 0;
    uStack_38 = 0;
    uStack_2c = uVar1;
    (*(code *)*puVar2)(plVar6,&uStack_38,puVar2[1]);
    if (*(long *)(param_1 + 0x48) != 0) {
      GameMachine__RequestStateChange_object__261a650
                (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_049c4650);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

