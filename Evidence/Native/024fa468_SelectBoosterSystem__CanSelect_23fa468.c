/* IL2CPP: SelectBoosterSystem$$CanSelect
bool SelectBoosterSystem__CanSelect (SelectBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBoosterSystem$$CanSelect
   bool SelectBoosterSystem__CanSelect (SelectBoosterSystem_o* __this, const MethodInfo* method); */

undefined8 SelectBoosterSystem__CanSelect_23fa468(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4b675 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4b675 = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar2 = Conveyor__GetTotalSlotCount_24b0e24(*(long *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar3 = Conveyor__GetOccupiedSlotCount_24b0dfc(*(long *)(param_1 + 0x30),0);
      if (*(long *)(param_1 + 0x30) != 0) {
        if (iVar2 - iVar3 < *(int *)(*(long *)(param_1 + 0x30) + 0x158)) {
LAB_024fa4f0:
          uVar4 = 0;
        }
        else {
          lVar7 = *(long *)(param_1 + 0x60);
          if (lVar7 == 0) goto LAB_024fa5d8;
          lStack_40 = 0;
          lStack_38 = 0;
          lStack_48 = (ulong)*(uint *)(lVar7 + 0x30) << 0x20;
          thunk_FUN_021f190c(&lStack_40,0);
          lStack_38 = *(long *)(lVar7 + 0x28);
          thunk_FUN_021f190c(&lStack_38);
          puVar1 = PTR_DAT_049c22d8;
          lStack_58 = lStack_40;
          uStack_60 = lStack_48;
          lStack_50 = lStack_38;
          do {
            iVar2 = (int)uStack_60 + -1;
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
            if (iVar2 < 0) {
              uStack_60._4_4_ = uStack_60._4_4_ - 1;
              if ((int)uStack_60._4_4_ < 0) goto LAB_024fa4f0;
              lVar7 = *(long *)(lStack_50 + (ulong)uStack_60._4_4_ * 8 + 0x20);
              lStack_58 = *(long *)(lVar7 + 0x18);
              uStack_60._0_4_ = iVar2;
              thunk_FUN_021f190c((ulong)&uStack_60 | 8);
              iVar2 = *(int *)(lVar7 + 0x30) + -1;
              uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
            }
            if (*(long *)(param_1 + 0x68) == 0) goto LAB_024fa5d8;
            puVar5 = (undefined8 *)
                     FUN_024f6008(*(long *)(param_1 + 0x68),
                                  *(undefined8 *)(lStack_58 + (long)iVar2 * 8 + 0x20),
                                  *(undefined8 *)puVar1);
            uVar6 = SelectBoosterSystem__CanSelect_23fac3c(param_1,*puVar5);
          } while ((uVar6 & 1) == 0);
          uVar4 = 1;
        }
        return uVar4;
      }
    }
  }
LAB_024fa5d8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

