/* IL2CPP: AreaSheet.<>c$$<PostLoad>b__6_0
bool AreaSheet___c___PostLoad_b__6_0 (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.<>c$$<PostLoad>b__6_0
   bool AreaSheet___c___PostLoad_b__6_0 (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const
   MethodInfo* method); */

bool AreaSheet___c___PostLoad_b__6_0_2559200(undefined8 param_1,long param_2)

{
  if ((bRam0000000004f4c0ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c10);
    bRam0000000004f4c0ca = 1;
  }
                    /* try { // try from 02659234 to 0275923b has its CatchHandler @ 02659638 */
  if ((param_2 != 0) && (*(long *)(param_2 + 0x30) != 0)) {
    return 0 < *(int *)(*(long *)(param_2 + 0x30) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

