/* IL2CPP: ElevatorHoleSystem$$OnCarrierComplete
void ElevatorHoleSystem__OnCarrierComplete (ElevatorHoleSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$OnCarrierComplete
   void ElevatorHoleSystem__OnCarrierComplete (ElevatorHoleSystem_o* __this,
   CarrierCompleteMessage_o m, const MethodInfo* method); */

void ElevatorHoleSystem__OnCarrierComplete_24a3ac8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_2c [4];
  long lStack_28;
  
  if ((bRam0000000004f4baf4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6620);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4baf4 = 1;
  }
  lStack_28 = 0;
  auStack_2c[0] = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0xa0),param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c6620)
    ;
    if ((uVar1 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_025a3bd4;
      uVar2 = ElevatorHole__get_Current_2410518(lStack_28,0);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
      uVar1 = UnityEngine_Object__op_Inequality_3c1b96c(uVar2,param_2,0);
      if ((uVar1 & 1) == 0) {
        if (lStack_28 == 0) goto LAB_025a3bd4;
        uVar1 = ElevatorHole__get_HasNext_2410578(lStack_28,0);
        if ((uVar1 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_025a3bd4;
          auVar3 = ElevatorHole__Swap_241130c(lStack_28,0);
          auStack_2c[0] = ElevatorHoleSystem__Move_24a3bd8(param_1,auVar3._0_8_,auVar3._8_8_);
          Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_2c,0);
        }
      }
    }
    return;
  }
LAB_025a3bd4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

