/* IL2CPP: CloudSaveModule$$OnQuitting
void CloudSaveModule__OnQuitting (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$OnQuitting
   void CloudSaveModule__OnQuitting (CloudSaveModule_o* __this, const MethodInfo* method); */

void CloudSaveModule__OnQuitting_24ec460(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_DAT_049c7ff8;
  puVar3 = PTR_DAT_049b5230;
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4bcde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c7ff8);
    FUN_021f03f8(PTR_DAT_049c8000);
    bRam0000000004f4bcde = 1;
  }
  puVar5 = PTR_DAT_049c8000;
  puVar2 = PTR_DAT_049b4308;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Application__remove_focusChanged_3bc8a50(uVar6,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___ctor_306b98c(uVar6,param_1,*(undefined8 *)puVar5,0);
  UnityEngine_Application__remove_quitting_3bc8e08(uVar6,0);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return;
}

