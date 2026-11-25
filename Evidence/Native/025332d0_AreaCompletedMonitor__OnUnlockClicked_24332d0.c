/* IL2CPP: AreaCompletedMonitor$$OnUnlockClicked
void AreaCompletedMonitor__OnUnlockClicked (AreaCompletedMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaCompletedMonitor$$OnUnlockClicked
   void AreaCompletedMonitor__OnUnlockClicked (AreaCompletedMonitor_o* __this, const MethodInfo*
   method); */

void AreaCompletedMonitor__OnUnlockClicked_24332d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  int iStack_48;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_049b4340;
  puVar2 = PTR_DAT_049b4338;
  if ((bRam0000000004f4b7e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c39c8);
    FUN_021f03f8(PTR_DAT_049c39d0);
    FUN_021f03f8(PTR_DAT_049c39d8);
    FUN_021f03f8(PTR_DAT_049bf580);
    FUN_021f03f8(PTR_DAT_049c39e0);
    bRam0000000004f4b7e9 = 1;
  }
  lVar10 = *(long *)(param_1 + 0xb0);
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar6,*(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0xb8) != 0) {
    uStack_58 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x20);
    uStack_68 = *(undefined8 *)PTR_DAT_049c39c0;
    uStack_60 = 0xffffffffffffffff;
    lVar7 = System_Enum__ToString_3135e00(&uStack_68,0);
    if ((lVar7 != 0) &&
       (uVar8 = System_String__ToLowerInvariant_2f81e54(lVar7,0), puVar2 = PTR_DAT_049b4358,
       lVar6 != 0)) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar6,*(undefined8 *)PTR_DAT_049c39d8,uVar8,*(undefined8 *)PTR_DAT_049b4358);
      puVar5 = PTR_DAT_049c39d0;
      puVar4 = PTR_DAT_049bf580;
      puVar3 = PTR_DAT_049b5310;
      if (*(long *)(param_1 + 0xb8) != 0) {
        puVar9 = (undefined4 *)
                 thunk_FUN_0224e54c(*(long *)(param_1 + 0xb8),
                                    *(long *)(**(long **)(*(long *)(*(long *)PTR_DAT_049c39c8 + 0x20
                                                                   ) + 0xc0) + 0x80) + 0x20);
        puVar1 = PTR_DAT_049b3bd0;
        uStack_44 = *puVar9;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_44);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar6,*(undefined8 *)puVar5,uVar8,*(undefined8 *)puVar2);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar3;
        }
        iStack_48 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x60,0);
        iStack_48 = iStack_48 + 1;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&iStack_48);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar6,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar2);
        if (lVar10 != 0) {
          AnalyticsModule__CustomEvent_253ef80(lVar10,*(undefined8 *)PTR_DAT_049c39e0,lVar6,0);
          if (*(long *)(param_1 + 0xb8) != 0) {
            AreaSheet_Row__Unlock_2558844(*(long *)(param_1 + 0xb8),0);
            if (*(long *)(param_1 + 0xa0) != 0) {
              HomeMonitor__SetArea_24476a4
                        (*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb8),0);
              if (*(long *)(param_1 + 0xa0) != 0) {
                HomeMonitor__UpdateLiveOpsIcons_2447a3c(*(long *)(param_1 + 0xa0),0);
                if (*(long *)(param_1 + 0x30) != 0) {
                  Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

