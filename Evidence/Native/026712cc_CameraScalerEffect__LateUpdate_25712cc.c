/* IL2CPP: CameraScalerEffect$$LateUpdate
void CameraScalerEffect__LateUpdate (CameraScalerEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CameraScalerEffect$$LateUpdate
   void CameraScalerEffect__LateUpdate (CameraScalerEffect_o* __this, const MethodInfo* method); */

void CameraScalerEffect__LateUpdate_25712cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_049cc188;
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4c1dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc188);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4c1dc = 1;
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
  if (lVar5 != 0) {
    UnityEngine_Camera__get_orthographicSize_3bcb8e8(lVar5,0);
    if (cRam0000000004f4c1f6 == '\0') {
      FUN_021f03f8(PTR_DAT_049c5ba0);
      cRam0000000004f4c1f6 = '\x01';
    }
    puVar1 = PTR_DAT_049c5ba0;
    if (*(int *)(*(long *)PTR_DAT_049c5ba0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4c1f7 == '\0') {
      FUN_021f03f8(PTR_DAT_049c5ba0);
      cRam0000000004f4c1f7 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar4 != 0) {
      if ((bRam0000000004f58a11 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a11 = 1;
      }
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
        }
        if (pcRam0000000004f58a78 == (code *)0x0) {
          pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
        }
        (*pcRam0000000004f58a78)(lVar5,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

