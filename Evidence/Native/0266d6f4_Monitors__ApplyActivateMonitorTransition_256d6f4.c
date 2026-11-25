/* IL2CPP: Monitors$$ApplyActivateMonitorTransition
void Monitors__ApplyActivateMonitorTransition (Monitors_o* __this, IMonitor_o* _monitor, ITransition_o* transition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$ApplyActivateMonitorTransition
   void Monitors__ApplyActivateMonitorTransition (Monitors_o* __this, IMonitor_o* _monitor,
   ITransition_o* transition, const MethodInfo* method); */

void Monitors__ApplyActivateMonitorTransition_256d6f4(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000004f4c1b7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049cbf40);
    FUN_021f03f8(PTR_DAT_049cbf48);
    FUN_021f03f8(PTR_DAT_049cbf50);
    FUN_021f03f8(PTR_DAT_049cbf58);
    FUN_021f03f8(PTR_DAT_049cbf60);
    bRam0000000004f4c1b7 = 1;
  }
  lStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0266d960;
  uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                    (*(long *)(param_1 + 0x28),param_2,&lStack_38,*(undefined8 *)PTR_DAT_049cbf48);
  if ((uVar3 & 1) != 0) {
    if (lStack_38 == 0) goto LAB_0266d960;
    System_Threading_CancellationTokenSource__Cancel_31658dc(lStack_38,0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0266d960;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_049cbf40);
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
  System_Threading_CancellationTokenSource___ctor_3165668(lVar4,0);
  puVar2 = PTR_DAT_049cbf58;
  if (param_3 == (long *)0x0) {
    if (*(char *)(param_1 + 0x60) != '\0') {
      uStack_60 = *(undefined8 *)(param_1 + 0x48);
      uStack_58 = 0;
      thunk_FUN_021f190c(&uStack_60);
      uStack_58 = CONCAT44(uStack_58._4_4_,0x3e4ccccd);
      uStack_48 = uStack_58;
      uStack_50 = uStack_60;
      if (lVar4 == 0) goto LAB_0266d960;
      auVar9 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar4,0);
      FadeTransition__Apply_256ec94(&uStack_50,auVar9._8_8_,auVar9._0_8_);
    }
  }
  else {
    if (lVar4 == 0) goto LAB_0266d960;
    uVar5 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar4,0);
    lVar7 = *param_3;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0266d8a0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(param_3,*(long *)puVar2,0);
LAB_0266d8a0:
    (*(code *)*puVar6)(param_3,param_2,uVar5,puVar6[1]);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0x28),param_2,lVar4,*(undefined8 *)PTR_DAT_049cbf50);
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_049cbf60 + 0x130);
      if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_049cbf60
          )) && (uVar3 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                                   (param_2,0x35030410,0), (uVar3 & 1) != 0)) {
        uStack_64 = 0x3e800000;
        if (lVar4 == 0) goto LAB_0266d960;
        uVar5 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar4,0);
        PopupTransition__Apply_256ed8c(&uStack_64,param_2,uVar5);
      }
    }
    return;
  }
LAB_0266d960:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

