/* IL2CPP: HomeMonitor$$IncrementTime
void HomeMonitor__IncrementTime (HomeMonitor_o* __this, System_TimeSpan_o increment, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$IncrementTime
   void HomeMonitor__IncrementTime (HomeMonitor_o* __this, System_TimeSpan_o increment, const
   MethodInfo* method); */

void HomeMonitor__IncrementTime_2448604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4b87e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4438);
    FUN_021f03f8(PTR_DAT_049c4440);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4b87e = 1;
  }
  puVar3 = PTR_DAT_049c4438;
  puVar2 = PTR_DAT_049b6128;
  fVar7 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049c4440;
  uVar6 = *(undefined8 *)(lVar4 + 0xb8);
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (uVar6,&uStack_48,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_TimeSpan__op_Multiply_3117758((double)fVar7,param_2,0);
  uVar5 = System_TimeSpan__op_Multiply_3117758((double)*(float *)(param_1 + 0x1c8),uVar5,0);
  uStack_48 = System_TimeSpan__op_Addition_31176f0(uStack_48,uVar5,0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___set_Value_28023e4
            (uVar6,&uStack_48,*(undefined8 *)puVar1);
  UniTimer__Expire_3f0f24c(param_1 + 0x188,0);
  return;
}

