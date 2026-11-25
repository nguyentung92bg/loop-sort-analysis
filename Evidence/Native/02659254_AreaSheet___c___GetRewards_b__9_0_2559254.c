/* IL2CPP: AreaSheet.<>c$$<GetRewards>b__9_0
System_Collections_Generic_IEnumerable_AreaSheet_Elem__o* AreaSheet___c___GetRewards_b__9_0 (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.<>c$$<GetRewards>b__9_0
   System_Collections_Generic_IEnumerable_AreaSheet_Elem__o* AreaSheet___c___GetRewards_b__9_0
   (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const MethodInfo* method); */

undefined8 AreaSheet___c___GetRewards_b__9_0_2559254(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 02659254 to 0275929f has its CatchHandler @ 0265963c */
  if ((bRam0000000004f4c0cb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb388);
    bRam0000000004f4c0cb = 1;
  }
  if (param_2 != 0) {
                    /* try { // try from 026592a0 to 027592c7 has its CatchHandler @ 02658d20 */
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(param_2,*(undefined8 *)
                                         (**(long **)(*(long *)(*(long *)PTR_DAT_049cb388 + 0x20) +
                                                     0xc0) + 0x80));
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

