/* IL2CPP: LavaQuestGame$$ToString
System_String_o* LavaQuestGame__ToString (LavaQuestGame_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestGame$$ToString
   System_String_o* LavaQuestGame__ToString (LavaQuestGame_o __this, const MethodInfo* method); */

void LavaQuestGame__ToString_251cb08(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c95c8;
  if ((bRam0000000004f4be4c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c95c8);
    bRam0000000004f4be4c = 1;
  }
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_40);
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

