/* IL2CPP: ElevatorHole$$Unlock
void ElevatorHole__Unlock (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Unlock
   void ElevatorHole__Unlock (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
    */

void ElevatorHole__Unlock_2411d1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__EnableInteraction_2404130(param_2,uVar1);
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  Carrier__EnableTransferEnter_24089a4(param_2,uVar1);
  if ((bRam0000000004f4b6d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b6d3 = 1;
  }
  if (*(long *)(param_2 + 0x218) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_2 + 0x218),uVar1,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(param_2 + 0x218) != 0) {
      if (*(int *)(*(long *)(param_2 + 0x218) + 0x20) < 1) {
        *(undefined1 *)(param_2 + 0x1b4) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

