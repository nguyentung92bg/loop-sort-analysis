/* IL2CPP: AreaSheet.Elem$$set_Rewards
void AreaSheet_Elem__set_Rewards (AreaSheet_Elem_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Elem$$set_Rewards
   void AreaSheet_Elem__set_Rewards (AreaSheet_Elem_o* __this, System_String_o* value, const
   MethodInfo* method); */

void AreaSheet_Elem__set_Rewards_2558f6c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

