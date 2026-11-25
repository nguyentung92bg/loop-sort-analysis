/* IL2CPP: AreaSheet.Elem$$.ctor
void AreaSheet_Elem___ctor (AreaSheet_Elem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Elem$$.ctor
   void AreaSheet_Elem___ctor (AreaSheet_Elem_o* __this, const MethodInfo* method); */

undefined1  [16] AreaSheet_Elem___ctor_2559108(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c5b78;
  puVar1 = PTR_DAT_049b6378;
                    /* try { // try from 0265910c to 02759133 has its CatchHandler @ 02659624 */
  if ((bRam0000000004f4c0c8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
    bRam0000000004f4c0c8 = 1;
  }
                    /* try { // try from 02659158 to 0275915f has its CatchHandler @ 02659454 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
                    /* try { // try from 02659168 to 0275916f has its CatchHandler @ 02659458 */
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

