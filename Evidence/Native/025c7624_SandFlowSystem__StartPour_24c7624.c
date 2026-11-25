/* IL2CPP: SandFlowSystem$$StartPour
void SandFlowSystem__StartPour (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Vector3_o destination, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$StartPour
   void SandFlowSystem__StartPour (SandFlowSystem_o* __this, Block_o* block, UnityEngine_Vector3_o
   destination, float duration, const MethodInfo* method); */

void SandFlowSystem__StartPour_24c7624
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,long param_5,
               long param_6)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_64;
  
  uStack_64 = 0;
  uVar10 = param_2;
  uVar11 = param_3;
  uVar3 = SandFlowSystem__TryAdd_24c7750(param_5,param_6,&uStack_64);
  uVar2 = uStack_64;
  puVar1 = PTR_DAT_049b3b98;
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(param_5 + 0xb0);
    if (((lVar5 == 0) || (param_6 == 0)) ||
       (lVar4 = UnityEngine_Component__get_transform_3c18724(param_6,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = UnityEngine_Transform__get_position_3c2d540(lVar4,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar5 = lVar5 + (long)(int)uVar2 * 0x90;
    uVar8 = UnityEngine_Time__get_time_3c295c8(0);
    *(undefined4 *)(lVar5 + 0x20) = uVar7;
    *(undefined4 *)(lVar5 + 0x24) = uVar10;
    fVar9 = _UNK_013aa688;
    *(undefined4 *)(lVar5 + 0x30) = param_1;
    *(undefined4 *)(lVar5 + 0x34) = param_2;
    *(undefined4 *)(lVar5 + 0x40) = uVar7;
    *(undefined4 *)(lVar5 + 0x44) = uVar10;
    *(undefined4 *)(lVar5 + 0x48) = uVar11;
    *(undefined4 *)(lVar5 + 0x28) = uVar11;
    *(undefined4 *)(lVar5 + 0x2c) = uVar8;
    *(undefined4 *)(lVar5 + 0x4c) = 0;
    if (fVar9 <= param_4) {
      fVar9 = param_4;
    }
    *(undefined4 *)(lVar5 + 0x38) = param_3;
    *(float *)(lVar5 + 0x3c) = fVar9;
    if ((param_6 != 0) && (*(long *)(param_6 + 0x138) != 0)) {
      UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc
                (*(long *)(param_6 + 0x138),0.0 <= _UNK_013aa688,0);
      lVar5 = UnityEngine_Component__get_transform_3c18724(param_6,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if ((*(long *)(param_5 + 0x50) != 0) && (lVar5 != 0)) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 != 0) {
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar4,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bc03 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7238);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc03 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(param_6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_6 != 0) {
    uVar6 = *(undefined8 *)(param_6 + 0x138);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(param_5 + 0xf8) != 0) {
      uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282f498
                        (*(long *)(param_5 + 0xf8),*(undefined8 *)(param_6 + 0x138),
                         &stack0xffffffffffffffdc,*(undefined8 *)PTR_DAT_049c7238);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_6 + 0x138) != 0) {
        UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(*(long *)(param_6 + 0x138),0,0);
        lVar5 = UnityEngine_Component__get_transform_3c18724(param_6,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        if ((*(long *)(param_5 + 0x50) != 0) && (lVar5 != 0)) {
          fVar9 = *(float *)(*(long *)(param_5 + 0x50) + 0x34);
          lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (fVar9 * *(float *)(lVar4 + 0xc),fVar9 * *(float *)(lVar4 + 0x10),
                     *(float *)(lVar4 + 0x14) * fVar9,lVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

