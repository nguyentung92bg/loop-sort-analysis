/* IL2CPP: LoseSystem$$OnLevelLose
void LoseSystem__OnLevelLose (LoseSystem_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$OnLevelLose
   void LoseSystem__OnLevelLose (LoseSystem_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void LoseSystem__OnLevelLose_24e0b20(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x40,0);
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,iVar2 + 1,0);
    bRam0000000004f4bcb1 = 1;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar2 + 1,0);
  return;
}

