/* IL2CPP: AccountModule$$.ctor
void AccountModule___ctor (AccountModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule$$.ctor
   void AccountModule___ctor (AccountModule_o* __this, const MethodInfo* method); */

void AccountModule___ctor_253b5bc(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049ca3d0;
                    /* try { // try from 0263b5c4 to 0273b5db has its CatchHandler @ 0263b7a8 */
  if ((bRam0000000004f4bf86 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca3d0);
                    /* try { // try from 0263b5ec to 0273b603 has its CatchHandler @ 0263b7a4 */
    bRam0000000004f4bf86 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  PlayerPrefsBool___ctor_3f0e6ac(&uStack_30,*(undefined8 *)puVar1,0,0);
                    /* try { // try from 0263b614 to 0273b617 has its CatchHandler @ 0263b7a0 */
                    /* try { // try from 0263b618 to 0273b623 has its CatchHandler @ 0263b79c */
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  *(undefined8 *)(param_1 + 0x20) = uStack_30;
  thunk_FUN_021f190c(param_1 + 0x28,0);
  System_Object___ctor_3142338(param_1,0);
                    /* try { // try from 0263b62c to 0273b637 has its CatchHandler @ 0263b798 */
  return;
}

