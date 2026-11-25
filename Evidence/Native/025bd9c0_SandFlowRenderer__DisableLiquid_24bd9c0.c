/* IL2CPP: SandFlowRenderer$$DisableLiquid
void SandFlowRenderer__DisableLiquid (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$DisableLiquid
   void SandFlowRenderer__DisableLiquid (SandFlowRenderer_o* __this, const MethodInfo* method); */

void SandFlowRenderer__DisableLiquid_24bd9c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbbd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bceb8);
    FUN_021f03f8(PTR_DAT_049bcea0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e70);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c6e98);
    bRam0000000004f4bbbd = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar10,0,0);
  puVar4 = PTR_DAT_049c6e70;
  puVar3 = PTR_DAT_049bceb8;
  puVar2 = PTR_DAT_049bcea0;
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bcea0 + 0xb8) + 8);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bceb8);
  UnityEngine_Camera_CameraCallback___ctor_3bcfd68(uVar10,param_1,*(undefined8 *)puVar4,0);
  plVar6 = (long *)System_Delegate__Remove_314582c(uVar11,uVar10,0);
  if (plVar6 == (long *)0x0) {
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = 0;
  }
  else {
    lVar8 = *(long *)puVar3;
    if (*plVar6 != lVar8) {
LAB_025bdaf8:
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar6);
    }
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = (long)plVar6;
    if (*plVar6 != lVar8) goto LAB_025bdaf8;
  }
  thunk_FUN_021f190c(plVar7,plVar6);
  plVar6 = (long *)(param_1 + 0x50);
  lVar8 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar6 == 0) goto LAB_025bdc24;
    UnityEngine_Camera__RemoveCommandBuffer_3bcfa14(*plVar6,0xb,*(undefined8 *)(param_1 + 0x28),0);
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    UnityEngine_Material__DisableKeyword_3be7528
              (*(long *)(param_1 + 0x2d0),*(undefined8 *)PTR_DAT_049c6e98,0);
    SandFlowRenderer__SetLiquidState_24bdc28(param_1,0);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
      FUN_021f0574();
    }
    SandFlowRenderer__DestroyObject_24be4c4(uVar10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),0);
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
      UnityEngine_Rendering_CommandBuffer__Release_3c3e76c(lVar8,0);
      *(undefined8 *)(param_1 + 0x20) = 0;
      thunk_FUN_021f190c((long *)(param_1 + 0x20),0);
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 != 0) {
        UnityEngine_Rendering_CommandBuffer__Release_3c3e76c(lVar8,0);
        *(undefined8 *)(param_1 + 0x28) = 0;
        thunk_FUN_021f190c((long *)(param_1 + 0x28),0);
        *(undefined8 *)(param_1 + 0x50) = 0;
        thunk_FUN_021f190c(plVar6,0);
        puVar1 = PTR_DAT_049b3b98;
        if ((bRam0000000004f4bbbf & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3b98);
          FUN_021f03f8(PTR_DAT_049c6e10);
          bRam0000000004f4bbbf = 1;
        }
        plVar6 = (long *)(param_1 + 0x30);
        lVar8 = *plVar6;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
        if ((uVar5 & 1) != 0) {
          return;
        }
        if (*plVar6 != 0) {
          UnityEngine_RenderTexture__Release_3bff874(*plVar6,0);
          lVar8 = *plVar6;
          if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
            FUN_021f0574();
          }
          SandFlowRenderer__DestroyObject_24be4c4(lVar8);
          *(undefined8 *)(param_1 + 0x30) = 0;
          thunk_FUN_021f190c(plVar6,0);
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 != 0) {
            UnityEngine_RenderTexture__Release_3bff874(lVar8,0);
            SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_1 + 0x38));
            *(undefined8 *)(param_1 + 0x38) = 0;
            thunk_FUN_021f190c((long *)(param_1 + 0x38),0);
            lVar8 = *(long *)(param_1 + 0x40);
            if (lVar8 != 0) {
              UnityEngine_RenderTexture__Release_3bff874(lVar8,0);
              SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_1 + 0x40));
              *(undefined8 *)(param_1 + 0x40) = 0;
              thunk_FUN_021f190c((long *)(param_1 + 0x40),0);
              puVar9 = (undefined8 *)(param_1 + 0x48);
              *puVar9 = 0;
              if (iRam0000000005174518 != 0) {
                FUN_023118d0(1L << ((ulong)puVar9 >> 0xc & 0x3f),
                             ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
              }
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_025bdc24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

