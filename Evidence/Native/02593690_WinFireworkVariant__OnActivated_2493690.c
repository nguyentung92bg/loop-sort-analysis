/* IL2CPP: WinFireworkVariant$$OnActivated
void WinFireworkVariant__OnActivated (WinFireworkVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinFireworkVariant$$OnActivated
   void WinFireworkVariant__OnActivated (WinFireworkVariant_o* __this, const MethodInfo* method); */

void WinFireworkVariant__OnActivated_2493690(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5fb8);
    bRam0000000004f4ba8b = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,0x61f37587,0);
  puVar1 = PTR_DAT_049c5fb8;
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    uStack_28 = *(undefined8 *)(lVar4 + 0xa0);
    uStack_30 = *(undefined8 *)(lVar4 + 0x98);
    uVar3 = System_Int32__ToString_30fbaa0(&uStack_30,0);
    uVar3 = System_String__Concat_2f72b28(*(undefined8 *)puVar1,uVar3,0);
    if (lVar2 != 0) {
      StatefulUI_Runtime_References_TextReference__SetText_334627c(lVar2,uVar3,0);
      WinFireworkVariant__HandleMotion_24937d4(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

