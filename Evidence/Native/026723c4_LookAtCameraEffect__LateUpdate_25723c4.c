/* IL2CPP: LookAtCameraEffect$$LateUpdate
void LookAtCameraEffect__LateUpdate (LookAtCameraEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LookAtCameraEffect$$LateUpdate
   void LookAtCameraEffect__LateUpdate (LookAtCameraEffect_o* __this, const MethodInfo* method); */

void LookAtCameraEffect__LateUpdate_25723c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_049cc198;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c1e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc198);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1e2 = 1;
  }
  uVar6 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar5 != 0) && (lVar5 = UnityEngine_Component__get_transform_3c18724(lVar5,0), lVar5 != 0)) {
    UnityEngine_Transform__get_forward_3c2db78(lVar5,0);
    UnityEngine_Quaternion__LookRotation_3c0a214(0);
    if (lVar4 != 0) {
      UnityEngine_Transform__set_rotation_3c2d86c(lVar4,0);
      UnityEngine_Transform__get_rotation_3c2d7a8(lVar4,0);
      UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                ((float)*(undefined8 *)(param_1 + 0x24) * 0.017453292,0);
      if ((bRam0000000004f58a0d & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0d = 1;
      }
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
        }
        if (pcRam0000000004f58a58 == (code *)0x0) {
          pcRam0000000004f58a58 = (code *)FUN_021f03bc(&UNK_013b3a78);
        }
        (*pcRam0000000004f58a58)(lVar5,&stack0xffffffffffffffd0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

