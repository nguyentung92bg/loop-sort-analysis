/* IL2CPP: ElevatorHole$$Lock
void ElevatorHole__Lock (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Lock
   void ElevatorHole__Lock (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
    */

void ElevatorHole__Lock_2410b50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__DisableInteraction_2403394(param_2,uVar1);
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  Carrier__DisableTransferEnter_2408aa4(param_2,uVar1);
  if ((bRam0000000004f4b6d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b6d4 = 1;
  }
  if (*(long *)(param_2 + 0x218) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_2 + 0x218),uVar1,*(undefined8 *)PTR_DAT_049bb8b0);
    *(undefined1 *)(param_2 + 0x1b4) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

