/* IL2CPP: CapacityBooster$$Start
void CapacityBooster__Start (CapacityBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CapacityBooster$$Start
   void CapacityBooster__Start (CapacityBooster_o* __this, const MethodInfo* method); */

void CapacityBooster__Start_23f4814(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  GameBehaviourBase__Start_24f68b4(param_1,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    CapacityBoosterSystem__IncreaseCapacity_23f4904();
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 != 0) {
      if ((bRam0000000004f4bc81 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6110,0);
        FUN_021f03f8(PTR_DAT_049c7b40);
        FUN_021f03f8(PTR_DAT_049b3b98);
        FUN_021f03f8(PTR_DAT_049c7b48);
        bRam0000000004f4bc81 = 1;
      }
      puVar2 = PTR_DAT_049c7b48;
      puVar1 = PTR_DAT_049b6110;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      if (*(int *)(lVar4 + 0x90) == 0) {
        return;
      }
      if (*(long *)(lVar4 + 0x50) != 0) {
        AnalyticsModule__UseBooster_253f4fc(*(long *)(lVar4 + 0x50),*(int *)(lVar4 + 0x90),0);
        lVar10 = *(long *)(lVar4 + 0x60);
        uVar3 = *(undefined4 *)(lVar4 + 0x90);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_60 = 0x100000000;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = Extensions__ToEconomyItem_24e5d5c(uVar3);
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        uVar5 = Extensions__ToAnalyticsName_24e5df4(*(undefined4 *)(lVar4 + 0x90));
        uStack_80 = System_String__Concat_2f72b28(uVar5,*(undefined8 *)puVar2,0);
        thunk_FUN_021f190c(&uStack_80,uStack_80);
        if (lVar10 != 0) {
          func_0x04608620(auStack_d0,&uStack_80,0x50);
          EconomyModule__TryConsume_2533778(lVar10,auStack_d0,0);
          lVar10 = *(long *)(lVar4 + 0x88);
          uVar3 = *(undefined4 *)(lVar4 + 0x90);
          *(undefined4 *)(lVar4 + 0x90) = 0;
          puVar1 = PTR_DAT_049b3b98;
          if (lVar10 != 0) {
            uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              FUN_021f0574(*(long *)puVar1);
            }
            UnityEngine_Object__Destroy_3c24380(uVar5,0);
            *(undefined8 *)(lVar4 + 0x88) = 0;
            thunk_FUN_021f190c((long *)(lVar4 + 0x88),0);
            if (*(long *)(lVar4 + 0x48) != 0) {
              InteractionModule__ClearTouchInterceptor_2535e84(*(long *)(lVar4 + 0x48),0);
              plVar9 = *(long **)(lVar4 + 0x78);
              if (plVar9 != (long *)0x0) {
                lVar4 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c7b40) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_025e5d34;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c7b40,0);
LAB_025e5d34:
                (*(code *)*puVar6)(plVar9,uVar3,puVar6[1]);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

