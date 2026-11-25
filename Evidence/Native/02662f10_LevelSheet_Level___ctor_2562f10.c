/* IL2CPP: LevelSheet.Level$$.ctor
void LevelSheet_Level___ctor (LevelSheet_Level_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelSheet.Level$$.ctor
   void LevelSheet_Level___ctor (LevelSheet_Level_o* __this, const MethodInfo* method); */

undefined1  [16] LevelSheet_Level___ctor_2562f10(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049cb460;
                    /* try { // try from 02662f14 to 02762f2b has its CatchHandler @ 026633f0 */
  if ((bRam0000000004f4c139 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb460);
                    /* try { // try from 02662f40 to 02762f43 has its CatchHandler @ 026633c8 */
    bRam0000000004f4c139 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
                    /* try { // try from 02662f54 to 02762f5b has its CatchHandler @ 026633ec */
  return auVar3;
}

