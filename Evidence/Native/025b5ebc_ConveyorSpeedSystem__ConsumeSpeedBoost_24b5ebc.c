/* IL2CPP: ConveyorSpeedSystem$$ConsumeSpeedBoost
void ConveyorSpeedSystem__ConsumeSpeedBoost (ConveyorSpeedSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$ConsumeSpeedBoost
   void ConveyorSpeedSystem__ConsumeSpeedBoost (ConveyorSpeedSystem_o* __this, float deltaTime,
   const MethodInfo* method); */

void ConveyorSpeedSystem__ConsumeSpeedBoost_24b5ebc(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4bb92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049c6ca0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bb92 = 1;
  }
  fVar9 = *(float *)(param_2 + 0x70);
  if (cRam0000000004f4b79c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  puVar4 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
    bVar5 = cRam0000000004f4b79c == '\0';
  }
  else {
    bVar5 = false;
  }
  param_1 = *(float *)(param_2 + 0x70) - param_1;
  iVar1 = -0x80000000;
  if ((float)(int)fVar9 != INFINITY) {
    iVar1 = (int)fVar9;
  }
  fVar9 = 0.0;
  if (0.0 <= param_1) {
    fVar9 = param_1;
  }
  *(float *)(param_2 + 0x70) = fVar9;
  if (bVar5) {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c6ca0;
  puVar4 = PTR_DAT_049b5310;
  iVar2 = -0x80000000;
  if ((float)(int)fVar9 != INFINITY) {
    iVar2 = (int)fVar9;
  }
  if (iVar2 != iVar1) {
    if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = *(undefined4 *)(param_2 + 0x70);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsFloat__set_Value_3f0def4(uVar8,*(long *)(*(long *)puVar4 + 0xb8) + 0x998,0);
    if (*(float *)(param_2 + 0x70) <= 0.0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar3 = PTR_DAT_049b52a8;
      lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
                    /* catch() { ... } // from try @ 025b60a0 with catch @ 025b608c
                       catch() { ... } // from try @ 025b60d8 with catch @ 025b608c
                       catch() { ... } // from try @ 025b6110 with catch @ 025b608c */
      if ((bRam0000000004f5c3f2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cfad8,0,0);
        FUN_021f03f8(PTR_DAT_049b52a8);
        bRam0000000004f5c3f2 = 1;
      }
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        auStack_24[0] = 0;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (**(long **)(lVar6 + 0xb8),*(undefined8 *)(lVar7 + 0x9b0),auStack_24,
                   *(undefined8 *)PTR_DAT_049cfad8);
        UnityEngine_PlayerPrefs__SetInt_3c0faec(*(undefined8 *)(lVar7 + 0x9b0),0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

