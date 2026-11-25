/* IL2CPP: GameDebugger$$GetLevel
System_String_o* GameDebugger__GetLevel (GameDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$GetLevel
   System_String_o* GameDebugger__GetLevel (GameDebugger_o* __this, const MethodInfo* method); */

void GameDebugger__GetLevel_2240658(void)

{
  undefined *puVar1;
  long lVar2;
  int iStack_14;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f49b07 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f49b07 = 1;
  }
                    /* try { // try from 02340688 to 02440693 has its CatchHandler @ 023408a4 */
  lVar2 = *(long *)puVar1;
  iStack_14 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 023406a8 to 024406b3 has its CatchHandler @ 023408a8 */
  iStack_14 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar2 + 0xb8) + 0x60,0);
  iStack_14 = iStack_14 + 1;
                    /* try { // try from 023406b4 to 024407d7 has its CatchHandler @ 0234029c */
  System_Int32__ToString_30fbaa0(&iStack_14,0);
  return;
}

