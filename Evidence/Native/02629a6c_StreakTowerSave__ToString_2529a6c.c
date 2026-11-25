/* IL2CPP: StreakTowerSave$$ToString
System_String_o* StreakTowerSave__ToString (StreakTowerSave_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSave$$ToString
   System_String_o* StreakTowerSave__ToString (StreakTowerSave_o __this, const MethodInfo* method);
    */

void StreakTowerSave__ToString_2529a6c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_049c9ad0;
  if ((bRam0000000004f4bebc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ad0);
    bRam0000000004f4bebc = 1;
  }
  uStack_30 = *param_1;
  uStack_28 = *(undefined4 *)(param_1 + 1);
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_30);
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

