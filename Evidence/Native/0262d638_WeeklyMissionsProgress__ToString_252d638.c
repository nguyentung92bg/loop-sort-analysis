/* IL2CPP: WeeklyMissionsProgress$$ToString
System_String_o* WeeklyMissionsProgress__ToString (WeeklyMissionsProgress_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsProgress$$ToString
   System_String_o* WeeklyMissionsProgress__ToString (WeeklyMissionsProgress_o __this, const
   MethodInfo* method); */

void WeeklyMissionsProgress__ToString_252d638(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [80];
  
  puVar1 = PTR_DAT_049c9c30;
  if ((bRam0000000004f4bedc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9c30);
    bRam0000000004f4bedc = 1;
  }
  func_0x04608620(auStack_70,param_1,0x50);
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,auStack_70);
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

