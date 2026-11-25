/* IL2CPP: SandFlowSystem$$IsHiddenJelly
bool SandFlowSystem__IsHiddenJelly (SandFlowSystem_o* __this, Carrier_o* carrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$IsHiddenJelly
   bool SandFlowSystem__IsHiddenJelly (SandFlowSystem_o* __this, Carrier_o* carrier, Block_o* block,
   const MethodInfo* method); */

undefined8 SandFlowSystem__IsHiddenJelly_24cec6c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbfc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbfc = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x240);
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) goto LAB_025cee38;
  uVar5 = *(undefined8 *)(param_3 + 0x138);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (param_2 == 0) goto LAB_025cee38;
  uVar2 = Carrier__TryGetGroupBlockOf_23ff3b0(param_2,param_3,&lStack_38,0);
  if ((uVar2 & 1) == 0) {
LAB_025ced50:
    lVar3 = *(long *)(param_3 + 0x138);
  }
  else {
    if ((lStack_38 == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0), lVar3 == 0))
    goto LAB_025cee38;
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar3,0);
    lVar3 = lStack_38;
    if ((uVar2 & 1) == 0) goto LAB_025ced50;
  }
  if (lVar3 == 0) {
LAB_025cee38:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar3 == 0) goto LAB_025cee38;
    uVar5 = UnityEngine_Material__get_shader_3be6058(lVar3,0);
    uVar4 = *(undefined8 *)(param_1 + 0x240);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,uVar4,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x248);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,lVar3,0);
      if ((uVar2 & 1) != 0) {
        *(long *)(param_1 + 0x248) = lVar3;
        thunk_FUN_021f190c(param_1 + 0x248,lVar3);
        if (*(long *)(param_1 + 0x1c8) != 0) {
          SandJellyRenderer__SetHidden_24d2bb4(*(long *)(param_1 + 0x1c8),lVar3,0);
        }
      }
      return 1;
    }
  }
  return 0;
}

