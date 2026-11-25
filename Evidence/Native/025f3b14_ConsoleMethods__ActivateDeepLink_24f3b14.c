/* IL2CPP: ConsoleMethods$$ActivateDeepLink
void ConsoleMethods__ActivateDeepLink (System_String_o* url, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$ActivateDeepLink
   void ConsoleMethods__ActivateDeepLink (System_String_o* url, const MethodInfo* method); */

void ConsoleMethods__ActivateDeepLink_24f3b14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bd0d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8320);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c8328);
    FUN_021f03f8(PTR_DAT_049c8330);
    bRam0000000004f4bd0d = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_049c8328;
  if (lVar3 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8320);
    uVar4 = System_String__Concat_2f72b28(*(undefined8 *)puVar1,param_1,0);
    puVar2 = PTR_DAT_049c8330;
    puVar1 = PTR_DAT_049b3c58;
    if (lStack_28 != 0) {
      DeepLinkModule__Activate_2532a40(lStack_28,uVar4,0);
      uVar4 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      UnityEngine_Debug__Log_3bd0be4(uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

