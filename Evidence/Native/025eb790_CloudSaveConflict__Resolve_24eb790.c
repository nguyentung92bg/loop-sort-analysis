/* IL2CPP: CloudSaveConflict$$Resolve
void CloudSaveConflict__Resolve (CloudSaveConflict_o* __this, int32_t conflictResolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict$$Resolve
   void CloudSaveConflict__Resolve (CloudSaveConflict_o* __this, int32_t conflictResolution, const
   MethodInfo* method); */

void CloudSaveConflict__Resolve_24eb790(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_049b5048;
  if ((bRam0000000004f4bcd0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5048);
    bRam0000000004f4bcd0 = 1;
  }
  lVar2 = *(long *)puVar1;
  *(int *)(param_1 + 0x14) = param_2;
  uVar3 = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(bool *)uVar3 = param_2 == 1;
  return;
}

