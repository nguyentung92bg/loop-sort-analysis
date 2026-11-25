/* IL2CPP: SandFlowSystem$$HomeOf
UnityEngine_Vector3_o SandFlowSystem__HomeOf (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$HomeOf
   UnityEngine_Vector3_o SandFlowSystem__HomeOf (SandFlowSystem_o* __this, Block_o* block, const
   MethodInfo* method); */

undefined1  [16] SandFlowSystem__HomeOf_24ca368(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bbf0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbf0 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 0x100);
    if (((plVar3 == (long *)0x0) || (*plVar3 != *(long *)PTR_DAT_049c1818)) ||
       (*(char *)(param_2 + 0x158) == '\0')) {
      lVar1 = UnityEngine_Component__get_transform_3c18724(param_2,0);
      if (lVar1 != 0) {
        if ((bRam0000000004f58a08 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a08 = 1;
        }
        if (lVar1 != 0) {
          lVar4 = *(long *)(lVar1 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
          }
          if (pcRam0000000004f58a30 == (code *)0x0) {
            pcRam0000000004f58a30 = (code *)FUN_021f03bc(&UNK_013d10f7);
          }
          (*pcRam0000000004f58a30)(lVar4,&stack0xffffffffffffffd0);
          return ZEXT416(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      auVar5 = Carrier__GetBlockCoordinate_2408c2c(plVar3,param_2,0);
      if ((*(char *)(param_1 + 0x1c2) != '\0') &&
         (uVar2 = SandFlowSystem__IsJelly_24c9cc8(param_1,param_2), (uVar2 & 1) != 0)) {
        SandFlowSystem__Shape_24ce8c4(&uStack_60,param_1,plVar3);
        if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar5 = SandFlowSystem__JellyHome_24ce9dc
                           (plVar3,&uStack_60,auVar5._0_8_,auVar5._8_8_ & 0xffffffff);
        return auVar5;
      }
      lVar1 = plVar3[0x18];
      Carrier__CoordinateToLocalPosition_2408cbc(plVar3,auVar5._0_8_,auVar5._8_8_ & 0xffffffff,0);
      if (lVar1 != 0) {
        if ((bRam0000000004f58a1e & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a1e = 1;
        }
        uStack_38 = 0;
        if (lVar1 != 0) {
          lVar4 = *(long *)(lVar1 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
          }
          if (pcRam0000000004f58ad8 == (code *)0x0) {
            pcRam0000000004f58ad8 = (code *)FUN_021f03bc(&UNK_013dca65);
          }
          (*pcRam0000000004f58ad8)(lVar4,&stack0xffffffffffffffd4,&uStack_38);
          return ZEXT416((uint)uStack_38);
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

