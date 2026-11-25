/* IL2CPP: LevelFunnel$$get_Loaded
System_String_o* LevelFunnel__get_Loaded (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnel$$get_Loaded
   System_String_o* LevelFunnel__get_Loaded (const MethodInfo* method); */

undefined8 LevelFunnel__get_Loaded_2561d18(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b6270;
  if ((bRam0000000004f4c130 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6270);
    bRam0000000004f4c130 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
}

