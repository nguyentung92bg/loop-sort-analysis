/* IL2CPP: LevelFunnelConfig$$.ctor
void LevelFunnelConfig___ctor (LevelFunnelConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelFunnelConfig$$.ctor
   void LevelFunnelConfig___ctor (LevelFunnelConfig_o* __this, const MethodInfo* method); */

undefined1  [16] LevelFunnelConfig___ctor_25535f0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = PTR_DAT_049caef8;
  puVar1 = PTR_DAT_049b4500;
  if ((bRam0000000004f4c08e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caef8);
    FUN_021f03f8(PTR_DAT_049b4500);
    bRam0000000004f4c08e = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar2;
  thunk_FUN_021f190c();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar1;
  thunk_FUN_021f190c();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

