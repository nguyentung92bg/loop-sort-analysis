/* IL2CPP: AreaSheet.Row.<>c$$<PostLoad>b__23_2
bool AreaSheet_Row___c___PostLoad_b__23_2 (AreaSheet_Row___c_o* __this, AreaSheet_Elem_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row.<>c$$<PostLoad>b__23_2
   bool AreaSheet_Row___c___PostLoad_b__23_2 (AreaSheet_Row___c_o* __this, AreaSheet_Elem_o* x,
   const MethodInfo* method); */

uint AreaSheet_Row___c___PostLoad_b__23_2_2558ec0(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02658ed0 to 02758edf has its CatchHandler @ 02659448 */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c0c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4c0c6 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x18),0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar1 = System_String__Equals_2f7b508
                    (*(undefined8 *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_049b61a0,0);
  return (uVar1 ^ 0xffffffff) & 1;
}

