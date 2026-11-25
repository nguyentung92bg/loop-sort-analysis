/* IL2CPP: ConveyorSpeedSystem$$AddSpeedBoost
void ConveyorSpeedSystem__AddSpeedBoost (ConveyorSpeedSystem_o* __this, float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$AddSpeedBoost
   void ConveyorSpeedSystem__AddSpeedBoost (ConveyorSpeedSystem_o* __this, float seconds, const
   MethodInfo* method); */

void ConveyorSpeedSystem__AddSpeedBoost_24b6128(float param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fStack_24;
  
  puVar2 = PTR_DAT_049b5310;
  param_1 = *(float *)(param_2 + 0x70) + param_1;
  if ((bRam0000000004f4bb91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ca0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bb91 = 1;
  }
  puVar3 = PTR_DAT_049c6ca0;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = param_1;
  }
  *(float *)(param_2 + 0x70) = fVar6;
  if (iVar1 == 0) {
    FUN_021f0574();
    fVar6 = *(float *)(param_2 + 0x70);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c6ca0;
  lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
  if ((bRam0000000004f5c3e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39b78,0);
    FUN_021f03f8(PTR_DAT_049c6ca0);
    bRam0000000004f5c3e2 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar3;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    fStack_24 = fVar6;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar5 + 0x9a0),&fStack_24,
               *(undefined8 *)PTR_DAT_04a39b78);
    UnityEngine_PlayerPrefs__SetFloat_3c0fd08(fVar6,*(undefined8 *)(lVar5 + 0x9a0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

