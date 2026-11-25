/* IL2CPP: SandFlowRenderer$$ReleaseLiquidTexture
void SandFlowRenderer__ReleaseLiquidTexture (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$ReleaseLiquidTexture
   void SandFlowRenderer__ReleaseLiquidTexture (SandFlowRenderer_o* __this, const MethodInfo*
   method); */

void SandFlowRenderer__ReleaseLiquidTexture_24bdcf4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbbf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbbf = 1;
  }
  plVar4 = (long *)(param_1 + 0x30);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*plVar4 != 0) {
    UnityEngine_RenderTexture__Release_3bff874(*plVar4,0);
    lVar5 = *plVar4;
    if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
      FUN_021f0574();
    }
    SandFlowRenderer__DestroyObject_24be4c4(lVar5);
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_021f190c(plVar4,0);
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      UnityEngine_RenderTexture__Release_3bff874(lVar5,0);
      SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_021f190c((long *)(param_1 + 0x38),0);
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        UnityEngine_RenderTexture__Release_3bff874(lVar5,0);
        SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
        thunk_FUN_021f190c((long *)(param_1 + 0x40),0);
        puVar3 = (undefined8 *)(param_1 + 0x48);
        *puVar3 = 0;
        if (iRam0000000005174518 != 0) {
          FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                       ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

