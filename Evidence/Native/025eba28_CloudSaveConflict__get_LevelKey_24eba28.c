/* IL2CPP: CloudSaveConflict$$get_LevelKey
System_String_o* CloudSaveConflict__get_LevelKey (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$get_LevelKey
   System_String_o* CloudSaveConflict__get_LevelKey (const MethodInfo* method); */

undefined8 CloudSaveConflict__get_LevelKey_24eba28(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bcd3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bcd3 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x78);
}

