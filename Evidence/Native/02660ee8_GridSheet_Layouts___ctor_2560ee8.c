/* IL2CPP: GridSheet.Layouts$$.ctor
void GridSheet_Layouts___ctor (GridSheet_Layouts_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$.ctor
   void GridSheet_Layouts___ctor (GridSheet_Layouts_o* __this, const MethodInfo* method); */

undefined1  [16] GridSheet_Layouts___ctor_2560ee8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049cb9a8;
  puVar2 = PTR_DAT_049cb9a0;
                    /* try { // try from 02660ee8 to 02760eef has its CatchHandler @ 02660fd4 */
  puVar1 = PTR_DAT_049cb460;
                    /* try { // try from 02660ef8 to 02760f03 has its CatchHandler @ 02660fd0 */
                    /* try { // try from 02660f04 to 02760f6b has its CatchHandler @ 02660d04 */
  if ((bRam0000000004f4c11a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb9a8);
    FUN_021f03f8(PTR_DAT_049cb9a0);
    FUN_021f03f8(PTR_DAT_049cb460);
    bRam0000000004f4c11a = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x40),uVar4);
                    /* try { // try from 02660f6c to 02760f6f has its CatchHandler @ 02660fdc */
  uVar4 = *(undefined8 *)puVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
                    /* try { // try from 02660f70 to 02760f93 has its CatchHandler @ 02660d04 */
  return auVar5;
}

