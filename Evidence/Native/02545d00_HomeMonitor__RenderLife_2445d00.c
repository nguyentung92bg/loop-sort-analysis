/* IL2CPP: HomeMonitor$$RenderLife
void HomeMonitor__RenderLife (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$RenderLife
   void HomeMonitor__RenderLife (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__RenderLife_2445d00(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = EconomyModule__IsUpdateIntercepted_2534488(*(long *)(param_1 + 0xc0),2,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((bRam0000000004f4b85e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c4310);
    bRam0000000004f4b85e = 1;
  }
  uStack_24 = 0;
  auStack_38[0] = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    uStack_24 = LifeModule__GetCurrentLife_2545fc4(*(long *)(param_1 + 0xb0),0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar4 = LifeModule__IsLifeFull_2545b10(*(long *)(param_1 + 0xb0),0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        auStack_38[0] = LifeModule__GetRemainingTime_2545e88(*(long *)(param_1 + 0xb0),0);
        if (*(long *)(param_1 + 0xb0) != 0) {
          uVar2 = LifeModule__IsUnlimited_2546110(*(long *)(param_1 + 0xb0),0);
          puVar1 = PTR_DAT_049b6110;
          if (*(long *)(param_1 + 0xb0) != 0) {
            uVar5 = LifeModule__GetUnlimitedTime_2546498(*(long *)(param_1 + 0xb0),0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar1);
            }
            uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
            if ((uVar2 & 1) == 0) {
              if ((uVar4 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar5 = System_TimeSpan__ToString_3117454
                                  (auStack_38,*(undefined8 *)PTR_DAT_049c4310,0);
              }
              else {
                uVar5 = Phrase__get_HomeLifeFull_252e854(0);
              }
            }
            StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                      (param_1,0xce1592a9,uVar5,0);
            uVar5 = System_Int32__ToString_30fbaa0(&uStack_24,0);
            StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                      (param_1,0xce15919c,uVar5,0);
            lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                              (param_1,0xce15919c,0);
            if ((*(long *)(param_1 + 0xb0) != 0) &&
               (uVar3 = LifeModule__IsEnabled_25460d4(*(long *)(param_1 + 0xb0),0), lVar6 != 0)) {
              UnityEngine_GameObject__SetActive_3c1ce34(lVar6,uVar3 & 1,0);
              lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                (param_1,0xb1bc8221,0);
              if (lVar6 != 0) {
                UnityEngine_GameObject__SetActive_3c1ce34(lVar6,uVar2 & 1,0);
                return;
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

