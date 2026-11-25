/* IL2CPP: WeeklyMissions$$GetQuantityOf
int32_t WeeklyMissions__GetQuantityOf (WeeklyMissions_o* __this, int32_t missionType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$GetQuantityOf
   int32_t WeeklyMissions__GetQuantityOf (WeeklyMissions_o* __this, int32_t missionType, const
   MethodInfo* method); */

int WeeklyMissions__GetQuantityOf_252ac34(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bec3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bec3 = 1;
  }
  puVar2 = PTR_DAT_049c9bb0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar3 + 0xb8) + 0x488,&iStack_70,*(undefined8 *)puVar2);
  switch(param_2) {
  case 0:
    iStack_6c = iStack_3c;
    break;
  case 1:
    iStack_6c = iStack_60 + iStack_64 + iStack_5c + iStack_58;
    break;
  case 2:
    iStack_6c = iStack_64;
    break;
  case 3:
    iStack_6c = iStack_60;
    break;
  case 4:
    iStack_6c = iStack_5c;
    break;
  case 5:
    iStack_6c = iStack_40;
    break;
  case 6:
    iStack_6c = iStack_70;
    break;
  case 7:
    break;
  case 8:
    iStack_6c = iStack_68;
    break;
  case 9:
    iStack_6c = iStack_48;
    break;
  case 10:
    iStack_6c = iStack_4c;
    break;
  case 0xb:
    iStack_6c = iStack_54;
    break;
  case 0xc:
    iStack_6c = iStack_50;
    break;
  case 0xd:
    iStack_6c = iStack_38;
    break;
  case 0xe:
    iStack_6c = iStack_34;
    break;
  case 0xf:
    iStack_6c = iStack_30;
    break;
  case 0x10:
    iStack_6c = iStack_28;
    break;
  case 0x11:
    iStack_6c = iStack_24;
    break;
  case 0x12:
    iStack_6c = iStack_2c;
    break;
  default:
    iStack_6c = 0;
  }
  return iStack_6c;
}

