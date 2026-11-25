/* IL2CPP: TimeTracker$$Begin
TimeTracker_o TimeTracker__Begin (System_String_o* format, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeTracker$$Begin
   TimeTracker_o TimeTracker__Begin (System_String_o* format, const MethodInfo* method); */

undefined1  [16] TimeTracker__Begin_24a07c0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_049c6540;
  if ((bRam0000000004f4bae8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6540);
    bRam0000000004f4bae8 = 1;
  }
  uStack_28 = 0;
  uVar4 = UnityEngine_Time__get_realtimeSinceStartupAsDouble_3c26990(0);
  uVar3 = System_String__IsNullOrEmpty_2f7c924(param_1,0);
  uStack_28 = *(undefined8 *)puVar2;
  if ((uVar3 & 1) == 0) {
    uStack_28 = param_1;
  }
  thunk_FUN_021f190c(&uStack_28);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uVar4;
  return auVar1;
}

