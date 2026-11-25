/* IL2CPP: SandFlowSystem$$Restore
void SandFlowSystem__Restore (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Restore
   void SandFlowSystem__Restore (SandFlowSystem_o* __this, Block_o* block, const MethodInfo*
   method); */

void SandFlowSystem__Restore_24c7bc4(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc03 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7238);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc03 = 1;
  }
  auStack_24[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x138);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282f498
                        (*(long *)(param_1 + 0xf8),*(undefined8 *)(param_2 + 0x138),auStack_24,
                         *(undefined8 *)PTR_DAT_049c7238);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_2 + 0x138) != 0) {
        UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc
                  (*(long *)(param_2 + 0x138),auStack_24[0],0);
        lVar3 = UnityEngine_Component__get_transform_3c18724(param_2,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        if ((*(long *)(param_1 + 0x50) != 0) && (lVar3 != 0)) {
          fVar6 = *(float *)(*(long *)(param_1 + 0x50) + 0x34);
          lVar4 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (fVar6 * *(float *)(lVar4 + 0xc),fVar6 * *(float *)(lVar4 + 0x10),
                     *(float *)(lVar4 + 0x14) * fVar6,lVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

