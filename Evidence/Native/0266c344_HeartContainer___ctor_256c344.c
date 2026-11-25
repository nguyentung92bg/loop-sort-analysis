/* IL2CPP: HeartContainer$$.ctor
void HeartContainer___ctor (HeartContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HeartContainer$$.ctor
   void HeartContainer___ctor (HeartContainer_o* __this, const MethodInfo* method); */

undefined1  [16] HeartContainer___ctor_256c344(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049cbef0;
  puVar1 = PTR_DAT_049cbee8;
                    /* try { // try from 0266c358 to 0276c36f has its CatchHandler @ 0266c3d0 */
  if ((bRam0000000004f4c198 & 1) == 0) {
                    /* try { // try from 0266c370 to 0276c3bf has its CatchHandler @ 0266b824 */
    FUN_021f03f8(PTR_DAT_049cbef0);
    FUN_021f03f8(PTR_DAT_049cbee8);
    bRam0000000004f4c198 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar3);
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0266c3c0 to 0276c3cf has its CatchHandler @ 0266c3d0 */
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

