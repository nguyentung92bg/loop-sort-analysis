/* IL2CPP: LookAtCameraEffect$$Start
void LookAtCameraEffect__Start (LookAtCameraEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LookAtCameraEffect$$Start
   void LookAtCameraEffect__Start (LookAtCameraEffect_o* __this, const MethodInfo* method); */

void LookAtCameraEffect__Start_25722b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049cc198;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c1e1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc190);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049cc198);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1e1 = 1;
  }
  uVar5 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  puVar1 = PTR_DAT_049b5f80;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar4 + 0x50),&uStack_28,*(undefined8 *)PTR_DAT_049cc190);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uStack_28;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8));
  }
  return;
}

