/* IL2CPP: CloudSaveConflict$$get_GoldKey
System_String_o* CloudSaveConflict__get_GoldKey (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$get_GoldKey
   System_String_o* CloudSaveConflict__get_GoldKey (const MethodInfo* method); */

undefined8 CloudSaveConflict__get_GoldKey_24ebbcc(void)

{
  undefined *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bcd4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bcd4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__GetPrefs_24e7680(auStack_40,1,0,0);
  return uStack_28;
}

