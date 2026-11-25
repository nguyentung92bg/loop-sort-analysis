/* IL2CPP: ElevatorHole$$Awake
void ElevatorHole__Awake (ElevatorHole_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Awake
   void ElevatorHole__Awake (ElevatorHole_o* __this, const MethodInfo* method); */

void ElevatorHole__Awake_24105d0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_4[0x15] != 0) {
    uVar1 = UnityEngine_Transform__get_localPosition_3c2c388(param_4[0x15],0);
    *(undefined4 *)(param_4 + 0x21) = uVar1;
    *(undefined4 *)((long)param_4 + 0x10c) = param_2;
    *(undefined4 *)(param_4 + 0x22) = param_3;
    if (param_4[0x15] != 0) {
      uVar1 = UnityEngine_Transform__get_localScale_3c2dd20(param_4[0x15],0);
      *(undefined4 *)((long)param_4 + 0x114) = uVar1;
      *(undefined4 *)(param_4 + 0x23) = param_2;
      *(undefined4 *)((long)param_4 + 0x11c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x025f68b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x1e8))(param_4,*(undefined8 *)(*param_4 + 0x1f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

