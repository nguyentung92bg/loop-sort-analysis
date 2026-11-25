/* IL2CPP: HomeMonitor.<>c__DisplayClass63_0$$<HandleHomeViewItem>b__0
void HomeMonitor___c__DisplayClass63_0___HandleHomeViewItem_b__0 (HomeMonitor___c__DisplayClass63_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<>c__DisplayClass63_0$$<HandleHomeViewItem>b__0
   void HomeMonitor___c__DisplayClass63_0___HandleHomeViewItem_b__0
   (HomeMonitor___c__DisplayClass63_0_o* __this, const MethodInfo* method); */

void HomeMonitor___c__DisplayClass63_0___HandleHomeViewItem_b__0_24489ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0), lVar1 != 0)) {
    uStack_14 = EconomyModule__GetAmount_2523ed0(lVar1,*(undefined4 *)(param_1 + 0x5c),0);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = System_Int32__ToString_30fbaa0(&uStack_14,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar3,0xbcdc2f95,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

