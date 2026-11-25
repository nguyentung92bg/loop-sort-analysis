/* IL2CPP: ConveyorSpeedSystem$$IsSpeedBoostActive
bool ConveyorSpeedSystem__IsSpeedBoostActive (ConveyorSpeedSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$IsSpeedBoostActive
   bool ConveyorSpeedSystem__IsSpeedBoostActive (ConveyorSpeedSystem_o* __this, const MethodInfo*
   method); */

bool ConveyorSpeedSystem__IsSpeedBoostActive_24b5ddc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  
                    /* try { // try from 025b5ddc to 026b5ddf has its CatchHandler @ 025b5de4 */
                    /* catch() { ... } // from try @ 025b5ddc with catch @ 025b5de4 */
                    /* try { // try from 025b5de8 to 026b5def has its CatchHandler @ 025b5df8 */
                    /* try { // try from 025b5df0 to 026b5dfb has its CatchHandler @ 025b534c */
  if ((bRam0000000004f4bb8f & 1) == 0) {
                    /* catch() { ... } // from try @ 025b5d68 with catch @ 025b5df8
                       catch() { ... } // from try @ 025b5de8 with catch @ 025b5df8 */
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bb8f = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    if (1.0 < *(float *)(*(long *)(param_1 + 0x68) + 0x1c)) {
      if ((*(long *)(param_1 + 0x48) == 0) ||
         (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0x48),0),
         plVar2 == (long *)0x0)) goto LAB_025b5eb8;
      uVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
      puVar1 = PTR_DAT_049b5310;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = PlayerPrefsBool__get_Value_3f0e6dc(*(long *)(*(long *)puVar1 + 0xb8) + 0x9a8,0);
        if ((uVar3 & 1) != 0) {
          return 0.0 < *(float *)(param_1 + 0x70);
        }
      }
    }
    return false;
  }
LAB_025b5eb8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

