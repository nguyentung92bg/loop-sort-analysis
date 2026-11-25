/* IL2CPP: WinStandartVariant.<>c__DisplayClass29_0$$<HandleContinueClickAsync>b__1
void WinStandartVariant___c__DisplayClass29_0___HandleContinueClickAsync_b__1 (WinStandartVariant___c__DisplayClass29_0_o* __this, bool __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant.<>c__DisplayClass29_0$$<HandleContinueClickAsync>b__1
   void WinStandartVariant___c__DisplayClass29_0___HandleContinueClickAsync_b__1
   (WinStandartVariant___c__DisplayClass29_0_o* __this, bool __, const MethodInfo* method); */

void WinStandartVariant___c__DisplayClass29_0___HandleContinueClickAsync_b__1_24955b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_049cc020;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c1b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc020,0,0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1b4 = 1;
  }
  lVar3 = Monitors__Get_object__26889d0(lVar2,*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    RaycastBlockerMonitor__Unblock_245bb2c(lVar3,0,0);
    if (*(long *)(lVar2 + 0x50) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0x50) + 0x28);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if ((*(long *)(lVar2 + 0x50) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar2 + 0x50) + 0x28), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0266ebc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

