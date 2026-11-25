/* IL2CPP: LevelAnimationSystem$$.ctor
void LevelAnimationSystem___ctor (LevelAnimationSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem$$.ctor
   void LevelAnimationSystem___ctor (LevelAnimationSystem_o* __this, const MethodInfo* method); */

undefined1  [16] LevelAnimationSystem___ctor_24d8dbc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c7818;
  puVar1 = PTR_DAT_049c7810;
  if ((bRam0000000004f4bc48 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7818);
    FUN_021f03f8(PTR_DAT_049c7810);
    bRam0000000004f4bc48 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x118,uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

