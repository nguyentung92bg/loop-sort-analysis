/* IL2CPP: GameDebugger$$GetTitle
System_String_o* GameDebugger__GetTitle (GameDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$GetTitle
   System_String_o* GameDebugger__GetTitle (GameDebugger_o* __this, const MethodInfo* method); */

undefined8 GameDebugger__GetTitle_223fde4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5220;
  if ((bRam0000000004f49b05 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5220);
    bRam0000000004f49b05 = 1;
  }
  return *(undefined8 *)puVar1;
}

