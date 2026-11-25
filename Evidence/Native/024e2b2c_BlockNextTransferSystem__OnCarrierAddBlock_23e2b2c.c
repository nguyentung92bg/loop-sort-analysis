/* IL2CPP: BlockNextTransferSystem$$OnCarrierAddBlock
void BlockNextTransferSystem__OnCarrierAddBlock (BlockNextTransferSystem_o* __this, CarrierAddBlockMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockNextTransferSystem$$OnCarrierAddBlock
   void BlockNextTransferSystem__OnCarrierAddBlock (BlockNextTransferSystem_o* __this,
   CarrierAddBlockMessage_o m, const MethodInfo* method); */

void BlockNextTransferSystem__OnCarrierAddBlock_23e2b2c(long param_1,undefined8 ****param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long alStack_80 [2];
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b5e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c17c8);
    FUN_021f03f8(PTR_DAT_049c17d0);
    bRam0000000004f4b5e2 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar4 = System_Collections_Generic_Stack___Il2CppFullySharedGenericType___Contains_29a23f0
                      (*(long *)(param_1 + 0x78),param_2,*(undefined8 *)PTR_DAT_049c17c8);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 != 0) {
      lVar6 = *(long *)PTR_DAT_049c17d0;
      alStack_80[1] = tpidr_el0;
      lStack_68 = *(long *)(alStack_80[1] + 0x28);
      alStack_80[0] = *(long *)(*(long *)(lVar6 + 0x20) + 0xc0);
      uVar8 = (ulong)*(uint *)(*(long *)(alStack_80[0] + 0x28) + 0xfc);
      uVar4 = uVar8 + 0xf & 0x1fffffff0;
      plVar7 = (long *)((long)alStack_80 - uVar4);
      lVar9 = (long)plVar7 - uVar4;
      plVar10 = *(long **)(lVar5 + 0x10);
      pppuStack_70 = param_2;
      if (plVar10 == (long *)0x0) {
        if (*(long *)(alStack_80[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(alStack_80[0] + 0x28) + 0x28);
        uVar3 = *(uint *)(lVar5 + 0x18);
        uVar2 = *(uint *)(plVar10 + 3);
        if (-1 < iVar1) {
          param_2 = &pppuStack_70;
        }
        func_0x04608620(plVar7,param_2,uVar8);
        if (uVar3 < uVar2) {
          func_0x04608650((long)plVar10 +
                          (ulong)*(uint *)(*plVar10 + 0x104) * (long)(int)uVar3 + 0x20,param_2,uVar8
                         );
          lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02229718();
          }
          if (*(uint *)(plVar10 + 3) <= uVar3) {
            if (*(long *)(alStack_80[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            goto LAB_02aa2fa8;
          }
          FUN_021f03a8(lVar6,(long)plVar10 +
                             (ulong)*(uint *)(*plVar10 + 0x104) * (long)(int)uVar3 + 0x20,plVar7);
          *(uint *)(lVar5 + 0x18) = uVar3 + 1;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        }
        else {
          if (iVar1 < 0) {
            func_0x04608620(lVar9,param_2,uVar8);
          }
          else {
            lVar9 = *plVar7;
          }
          System_Collections_Generic_Stack___Il2CppFullySharedGenericType___PushWithResize_29a2fac
                    (lVar5,lVar9,*(undefined8 *)(alStack_80[0] + 0x60));
        }
        if (*(long *)(alStack_80[1] + 0x28) == lStack_68) {
          return;
        }
      }
LAB_02aa2fa8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

