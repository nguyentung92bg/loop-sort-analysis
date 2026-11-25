/* IL2CPP: AreaSheet.Elem$$get_HasRewards
bool AreaSheet_Elem__get_HasRewards (AreaSheet_Elem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Elem$$get_HasRewards
   bool AreaSheet_Elem__get_HasRewards (AreaSheet_Elem_o* __this, const MethodInfo* method); */

uint AreaSheet_Elem__get_HasRewards_2558ed4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
                    /* try { // try from 02658ee4 to 02758eef has its CatchHandler @ 02659440 */
  if ((bRam0000000004f4c0c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4c0c6 = 1;
  }
                    /* try { // try from 02658f00 to 02758f0b has its CatchHandler @ 0265943c */
  uVar2 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x18),0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
                    /* try { // try from 02658f2c to 02758f6b has its CatchHandler @ 02659480 */
  uVar1 = System_String__Equals_2f7b508
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049b61a0,0);
  return (uVar1 ^ 0xffffffff) & 1;
}

