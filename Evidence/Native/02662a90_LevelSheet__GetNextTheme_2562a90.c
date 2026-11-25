/* IL2CPP: LevelSheet$$GetNextTheme
int32_t LevelSheet__GetNextTheme (LevelSheet_o* __this, int32_t frequency, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelSheet$$GetNextTheme
   int32_t LevelSheet__GetNextTheme (LevelSheet_o* __this, int32_t frequency, const MethodInfo*
   method); */

undefined4 LevelSheet__GetNextTheme_2562a90(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_28 = *(undefined8 *)(param_1 + 0x60);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_40,0);
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = (iVar4 + 1) / param_2;
  }
  iVar4 = 0;
  if (uVar1 != 0) {
    iVar4 = iVar3 / (int)uVar1;
  }
  uVar2 = iVar3 - iVar4 * uVar1;
  if (uVar2 < uVar1) {
    return *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

