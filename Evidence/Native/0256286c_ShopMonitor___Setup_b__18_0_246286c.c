/* IL2CPP: ShopMonitor$$<Setup>b__18_0
void ShopMonitor___Setup_b__18_0 (ShopMonitor_o* __this, EconomyUpdateMessage_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$<Setup>b__18_0
   void ShopMonitor___Setup_b__18_0 (ShopMonitor_o* __this, EconomyUpdateMessage_o __, const
   MethodInfo* method); */

void ShopMonitor___Setup_b__18_0_246286c(long param_1)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uStack_14 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0xe0),1,0);
    uVar1 = System_Int32__ToString_30fbaa0(&uStack_14,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xf6f322b4,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

