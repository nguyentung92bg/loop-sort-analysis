/* IL2CPP: InteractionModule$$.ctor
void InteractionModule___ctor (InteractionModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$.ctor
   void InteractionModule___ctor (InteractionModule_o* __this, const MethodInfo* method); */

undefined1  [16] InteractionModule___ctor_2535e90(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049bb8c0;
  puVar1 = PTR_DAT_049bb8b8;
                    /* try { // try from 02635eac to 02735ecb has its CatchHandler @ 0263603c */
  if ((bRam0000000004f4bf5c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b8);
    FUN_021f03f8(PTR_DAT_049bb8c0);
    bRam0000000004f4bf5c = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 02635ee4 to 02735eef has its CatchHandler @ 02636024 */
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 02635f00 to 02735f17 has its CatchHandler @ 02636018 */
  return auVar4;
}

