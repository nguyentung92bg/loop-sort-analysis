/* IL2CPP: ConveyorBlock$$Awake
void ConveyorBlock__Awake (ConveyorBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorBlock$$Awake
   void ConveyorBlock__Awake (ConveyorBlock_o* __this, const MethodInfo* method); */

void ConveyorBlock__Awake_24b23f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000004f4bb6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ba8);
    bRam0000000004f4bb6c = 1;
  }
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lVar3 = *(long *)PTR_DAT_049c6ba8;
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar3);
    lVar4 = *(long *)(lVar3 + 0x38);
  }
  lVar3 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02229774(lVar3);
  }
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0);
  if (lVar1 != 0) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 8);
    puVar5 = *(undefined8 **)(lVar3 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_02229774(lVar3);
      puVar5 = *(undefined8 **)(lVar3 + 0x38);
    }
    uVar6 = *puVar5;
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = System_Type__GetTypeFromHandle_310ebfc(uVar6,0);
    if ((bRam0000000004f581e6 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a251b8);
      bRam0000000004f581e6 = 1;
    }
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f58258 == (code *)0x0) {
        pcRam0000000004f58258 = (code *)FUN_021f03bc(&UNK_013ad6d2);
      }
                    /* WARNING: Could not recover jumptable at 0x03d1b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f58258)(lVar3,uVar6,1,1,0,0,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

