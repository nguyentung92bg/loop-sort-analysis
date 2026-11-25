/* IL2CPP: MainPlaySession$$get_LevelIdx
int32_t MainPlaySession__get_LevelIdx (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_LevelIdx
   int32_t MainPlaySession__get_LevelIdx (MainPlaySession_o* __this, const MethodInfo* method); */

void MainPlaySession__get_LevelIdx_24fbb70(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd50 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd50 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049c5aa8;
  lVar2 = *(long *)(lVar2 + 0xb8);
  if ((bRam0000000004f4bcb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8);
    bRam0000000004f4bcb0 = 1;
  }
  uStack_28 = *(undefined8 *)(lVar2 + 0x68);
  uStack_30 = *(undefined8 *)(lVar2 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__get_Value_3f0d974(&uStack_30,0);
  return;
}

