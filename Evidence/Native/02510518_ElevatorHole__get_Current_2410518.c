/* IL2CPP: ElevatorHole$$get_Current
Carrier_o* ElevatorHole__get_Current (ElevatorHole_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$get_Current
   Carrier_o* ElevatorHole__get_Current (ElevatorHole_o* __this, const MethodInfo* method); */

undefined8 ElevatorHole__get_Current_2410518(long param_1)

{
  undefined8 uStack_18;
  
  if ((bRam0000000004f4b71b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2680);
    bRam0000000004f4b71b = 1;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8),&uStack_18,
               *(undefined8 *)PTR_DAT_049c2680);
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

