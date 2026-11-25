/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_1
int32_t SandFlowSystem___c____cctor_b__195_1 (SandFlowSystem___c_o* __this, Block_o* a, Block_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_1
   int32_t SandFlowSystem___c____cctor_b__195_1 (SandFlowSystem___c_o* __this, Block_o* a, Block_o*
   b, const MethodInfo* method); */

void SandFlowSystem___c____cctor_b__195_1_24d1f48(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bc1e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    bRam0000000004f4bc1e = 1;
  }
  uStack_24 = 0;
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 0x100);
    if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_049c1818)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar3);
    }
    if (param_3 != 0) {
      plVar4 = *(long **)(param_3 + 0x100);
      if (plVar4 == (long *)0x0) {
        if (plVar3 != (long *)0x0) {
          uStack_24 = UnityEngine_Object__GetInstanceID_3c22f1c(plVar3,0);
        }
      }
      else {
        if (*plVar4 != *(long *)PTR_DAT_049c1818) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(plVar4);
        }
        if (plVar3 != (long *)0x0) {
          uStack_24 = UnityEngine_Object__GetInstanceID_3c22f1c(plVar3,0);
          uVar1 = UnityEngine_Object__GetInstanceID_3c22f1c(plVar4,0);
          iVar2 = System_Int32__CompareTo_30fba2c(&uStack_24,uVar1,0);
          if (iVar2 == 0) {
            uStack_24 = Carrier__GetBlockIdx_2408c50(plVar3,param_2,0);
            uVar1 = Carrier__GetBlockIdx_2408c50(plVar4,param_3,0);
            System_Int32__CompareTo_30fba2c(&uStack_24,uVar1,0);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

