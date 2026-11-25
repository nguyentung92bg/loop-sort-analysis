/* IL2CPP: MainMenuCarrier$$<HandleAnimation>b__8_0
bool MainMenuCarrier___HandleAnimation_b__8_0 (MainMenuCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainMenuCarrier$$<HandleAnimation>b__8_0
   bool MainMenuCarrier___HandleAnimation_b__8_0 (MainMenuCarrier_o* __this, const MethodInfo*
   method); */

undefined1 MainMenuCarrier___HandleAnimation_b__8_0_24b6c00(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  
  if ((bRam0000000004f4bba0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d30);
    bRam0000000004f4bba0 = 1;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar3 = *(long *)PTR_DAT_049c6d30;
    uVar1 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xb8),
                               *(long *)(**(long **)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x80) + 0x80)
    ;
    puVar2 = (undefined1 *)
             thunk_FUN_0224e54c(uVar1,*(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0)
                                                         + 0x38) + 0x80) + 0x40);
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

