/* IL2CPP: SupportMonitor$$GetPurchaseHistoryText
System_String_o* SupportMonitor__GetPurchaseHistoryText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$GetPurchaseHistoryText
   System_String_o* SupportMonitor__GetPurchaseHistoryText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetPurchaseHistoryText_2465c64(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b965 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c52a8);
    bRam0000000004f4b965 = 1;
  }
  puVar1 = PTR_DAT_049c5120;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsString___ctor_3f0e250(&uStack_40,*(undefined8 *)PTR_DAT_049c52a8,0,0);
  lVar2 = PlayerPrefsString__get_Value_3f0e288(&uStack_40,0);
  if (lVar2 != 0) {
    lVar2 = System_String__Split_2f802dc(lVar2,0x3b,0,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        System_Text_StringBuilder__AppendLine_2f8c724
                  (param_2,*(undefined8 *)(lVar2 + 0x20 + uVar4 * 8),0);
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

