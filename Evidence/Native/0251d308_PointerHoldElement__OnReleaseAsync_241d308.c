/* IL2CPP: PointerHoldElement$$OnReleaseAsync
Cysharp_Threading_Tasks_UniTask_o PointerHoldElement__OnReleaseAsync (PointerHoldElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PointerHoldElement$$OnReleaseAsync
   Cysharp_Threading_Tasks_UniTask_o PointerHoldElement__OnReleaseAsync (PointerHoldElement_o*
   __this, const MethodInfo* method); */

undefined1  [16] PointerHoldElement__OnReleaseAsync_241d308(long param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined2 *puVar6;
  long lStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  
  puVar3 = PTR_DAT_049cf670;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if ((bRam0000000004f535f1 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cf670,0);
      bRam0000000004f535f1 = 1;
    }
    lVar5 = *(long *)(*(long *)puVar3 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    puVar6 = (undefined2 *)
             thunk_FUN_0224e54c(lVar4 + 0x18,
                                *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80) + 0x40);
    uVar1 = *puVar6;
    uStack_28 = 0;
    uStack_26 = 0;
    lStack_30 = lVar4;
    thunk_FUN_021f190c(&lStack_30,lVar4);
    auVar2._8_2_ = uVar1;
    auVar2._0_8_ = lStack_30;
    auVar2._10_6_ = uStack_26;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

