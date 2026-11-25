/* IL2CPP: WeeklyMissions$$AddBlock
void WeeklyMissions__AddBlock (WeeklyMissions_o* __this, int32_t quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$AddBlock
   void WeeklyMissions__AddBlock (WeeklyMissions_o* __this, int32_t quantity, const MethodInfo*
   method); */

void WeeklyMissions__AddBlock_252cb98(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bed7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bed7 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  iVar2 = CloudPrefsInt__get_Value_24e99c0(lVar3 + 0x438,0);
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,iVar2 + param_2,0);
    bRam0000000004f4bcb1 = 1;
  }
  uStack_38 = *(undefined8 *)(lVar3 + 0x440);
  uStack_40 = *(undefined8 *)(lVar3 + 0x438);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar2 + param_2,0);
  return;
}

