/* IL2CPP: SandFlowSystem$$IsJelly
bool SandFlowSystem__IsJelly (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$IsJelly
   bool SandFlowSystem__IsJelly (SandFlowSystem_o* __this, Block_o* block, const MethodInfo*
   method); */

uint SandFlowSystem__IsJelly_24c9cc8(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_50 [4];
  long lStack_28;
  
  if ((bRam0000000004f4bbff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbff = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  lStack_28 = 0;
  if (param_2 == 0) {
LAB_025c9e58:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *(long *)(param_2 + 0x138);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar6,0,0);
  if (((uVar3 & 1) == 0) && ((int)*(undefined8 *)(param_2 + 0xe4) != -1)) {
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (Colors__Get_24f5718(auStack_50,*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0xe4),0),
       lVar6 == 0)) goto LAB_025c9e58;
    uVar4 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(lVar6,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574(lVar6);
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar4,auStack_50[0],0);
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(param_2 + 0x100);
      if (((plVar5 != (long *)0x0) && (*plVar5 == *(long *)PTR_DAT_049c1818)) &&
         (uVar3 = Carrier__TryGetGroupBlockOf_23ff3b0(plVar5,param_2,&lStack_28,0), (uVar3 & 1) != 0
         )) {
        if ((lStack_28 == 0) ||
           (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lStack_28,0), lVar6 == 0))
        goto LAB_025c9e58;
        uVar3 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar6,0);
        if ((uVar3 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_025c9e58;
          uVar4 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(lStack_28,0);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_021f0574(lVar6);
          }
          uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,auStack_50[0],0);
          goto LAB_025c9da8;
        }
      }
      uVar2 = 1;
      goto LAB_025c9da8;
    }
  }
  uVar2 = 0;
LAB_025c9da8:
  return uVar2 & 1;
}

