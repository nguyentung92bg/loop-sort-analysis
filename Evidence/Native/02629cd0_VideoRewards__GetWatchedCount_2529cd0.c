/* IL2CPP: VideoRewards$$GetWatchedCount
int32_t VideoRewards__GetWatchedCount (VideoRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$GetWatchedCount
   int32_t VideoRewards__GetWatchedCount (VideoRewards_o* __this, const MethodInfo* method); */

undefined8 VideoRewards__GetWatchedCount_2529cd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bebf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bebf = 1;
  }
  puVar1 = PTR_DAT_049b5f98;
  lVar6 = *(long *)puVar2;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                    (*(long *)(lVar6 + 0xb8) + 0x9c8,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_049b5fa8;
  puVar1 = PTR_DAT_049b5050;
  if ((uVar7 & 1) != 0) {
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_049b5fc8;
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar6 + 0xb8) + 0x9c8,&uStack_40,*(undefined8 *)puVar3);
    auStack_50._8_8_ = uStack_38;
    auStack_50._0_8_ = uStack_40;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_049b5fb0;
    uVar8 = System_DateTimeOffset__get_Date_30e0fe4(auStack_50,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar4);
    }
    auStack_50 = TimeProvider__get_Now_24f4584(0);
    uVar9 = System_DateTimeOffset__get_Date_30e0fe4(auStack_50,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar7 = System_DateTime__op_LessThan_30df7d4(uVar8,uVar9,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar2;
      }
      uVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x9f8,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
        if (lVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(lVar6 + 0x18);
        }
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = System_Math__Min_30ff6e8(uVar5,uVar10,0);
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return 0;
}

