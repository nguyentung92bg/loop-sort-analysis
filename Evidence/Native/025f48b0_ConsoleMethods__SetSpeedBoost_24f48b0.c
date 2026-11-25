/* IL2CPP: ConsoleMethods$$SetSpeedBoost
void ConsoleMethods__SetSpeedBoost (int32_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetSpeedBoost
   void ConsoleMethods__SetSpeedBoost (int32_t seconds, const MethodInfo* method); */

void ConsoleMethods__SetSpeedBoost_24f48b0(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lStack_38;
  long lStack_28;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c62a0);
    FUN_021f03f8(PTR_DAT_049c8390);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c6ca0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd16 = 1;
  }
  puVar3 = PTR_DAT_049c6ca0;
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b5228;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b5f80;
  PlayerPrefsFloat__Set_3f0e028
            ((float)(int)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)),
             *(long *)(*(long *)puVar2 + 0xb8) + 0x998,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar4 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c62a0);
    if (lStack_28 != 0) {
      if ((*(char *)(lStack_28 + 0x20) != '\0') &&
         (uVar5 = FUN_024f7024(*(undefined8 *)(lStack_28 + 0x18),&lStack_38,
                               *(undefined8 *)PTR_DAT_049c8390), (uVar5 & 1) != 0)) {
        if (lStack_38 == 0) goto LAB_025f4a08;
        ConveyorSpeedSystem__SetSpeedBoostRemainingSeconds_24b6134((float)(int)param_1,lStack_38,0);
      }
      return;
    }
  }
LAB_025f4a08:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

