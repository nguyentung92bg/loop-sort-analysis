/* IL2CPP: LifeModule$$SpendLife
void LifeModule__SpendLife (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$SpendLife
   void LifeModule__SpendLife (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__SpendLife_25461f0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [208];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c008 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049ca780);
    FUN_021f03f8(PTR_DAT_049c8b70);
    FUN_021f03f8(PTR_DAT_049c8b78);
    bRam0000000004f4c008 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_118 = 0;
  uVar3 = LifeModule__IsUnlimited_2546110(param_1);
  if (((uVar3 & 1) == 0) && (uVar3 = LifeModule__IsLifeAvailable_25460dc(param_1), (uVar3 & 1) != 0)
     ) {
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    CloudPrefsInt__Set_24e9aa8(param_1 + 0x18,iVar2 + -1,0);
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    if (iVar2 == 0) {
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca780) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_026462ec;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca780,0);
LAB_026462ec:
      (*(code *)*puVar4)(plVar8,0,puVar4[1]);
    }
    if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_118 = System_DateTime__get_Now_30dd928(0);
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    uVar5 = System_DateTime__AddMinutes_30dc1f0((double)(5 - iVar2) * 30.0,&uStack_118,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_110,uVar5,0,0);
    puVar1 = PTR_DAT_049c8b78;
    lVar6 = *(long *)PTR_DAT_049c8b78;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    func_0x04608620(auStack_100,*(long *)(lVar6 + 0xb8) + 0x410,0xd0);
    uStack_28 = uStack_108;
    uStack_30 = uStack_110;
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_100,&uStack_30,*(undefined8 *)PTR_DAT_049c8b70);
  }
  return;
}

