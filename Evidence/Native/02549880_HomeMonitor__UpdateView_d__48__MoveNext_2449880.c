/* IL2CPP: HomeMonitor.<UpdateView>d__48$$MoveNext
void HomeMonitor__UpdateView_d__48__MoveNext (HomeMonitor__UpdateView_d__48_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<UpdateView>d__48$$MoveNext
   void HomeMonitor__UpdateView_d__48__MoveNext (HomeMonitor__UpdateView_d__48_o __this, const
   MethodInfo* method); */

void HomeMonitor__UpdateView_d__48__MoveNext_2449880(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b886 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44c8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b886 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  puVar2 = PTR_DAT_049b5138;
  iStack_34 = 0;
  lVar8 = *(long *)(param_1 + 4);
  iStack_38 = 0;
  uStack_40 = 0;
  iStack_3c = 0;
  if (*param_1 == 0) {
    iStack_3c = param_1[6];
    param_1[6] = 0;
    *param_1 = -1;
    uStack_40 = 0;
    goto LAB_02549a7c;
  }
  lVar5 = *(long *)PTR_DAT_049b5310;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  iStack_34 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x60,0);
  puVar1 = PTR_DAT_049b4540;
  iStack_34 = iStack_34 + 1;
  lVar5 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,1);
  uVar6 = System_Int32__ToString_30fbaa0(&iStack_34,0);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    thunk_FUN_021f190c();
    if (lVar8 != 0) {
      StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                (lVar8,0x61f37587,lVar5,0);
      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,1);
      iStack_38 = iStack_34 + 1;
      uVar6 = System_Int32__ToString_30fbaa0(&iStack_38,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        thunk_FUN_021f190c();
        StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                  (lVar8,0xb5c65869,lVar5,0);
        while( true ) {
          if (*(long *)(lVar8 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar7 = EconomyModule__IsUpdateIntercepted_2534488(*(long *)(lVar8 + 0xc0),1,0);
          if ((uVar7 & 1) == 0) break;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar3 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
          _uStack_40 = CONCAT44(iStack_3c,uVar3);
          iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_40,0);
          iStack_3c = iVar4;
          uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                            (&iStack_3c,0);
          puVar1 = PTR_DAT_049c44c8;
          if ((uVar7 & 1) == 0) {
            *param_1 = 0;
            uVar6 = *(undefined8 *)puVar1;
            param_1[6] = iStack_3c;
            FUN_0235c420(param_1 + 2,&iStack_3c,param_1,uVar6);
            return;
          }
LAB_02549a7c:
          Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_3c,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
        if (*(long *)(lVar8 + 0xc0) != 0) {
          iStack_38 = EconomyModule__GetAmount_2523ed0(*(long *)(lVar8 + 0xc0),1,0);
          uVar6 = System_Int32__ToString_30fbaa0(&iStack_38,0);
          StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                    (lVar8,0xf6f322b4,uVar6,0);
          *param_1 = -2;
          FUN_0235afc8(param_1 + 2,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

