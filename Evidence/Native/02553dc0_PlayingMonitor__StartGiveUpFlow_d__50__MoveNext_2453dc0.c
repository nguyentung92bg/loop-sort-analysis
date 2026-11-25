/* IL2CPP: PlayingMonitor.<StartGiveUpFlow>d__50$$MoveNext
void PlayingMonitor__StartGiveUpFlow_d__50__MoveNext (PlayingMonitor__StartGiveUpFlow_d__50_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor.<StartGiveUpFlow>d__50$$MoveNext
   void PlayingMonitor__StartGiveUpFlow_d__50__MoveNext (PlayingMonitor__StartGiveUpFlow_d__50_o
   __this, const MethodInfo* method); */

void PlayingMonitor__StartGiveUpFlow_d__50__MoveNext_2453dc0(int *param_1)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b8e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4918);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c4920);
    FUN_021f03f8(PTR_DAT_049c4928);
    FUN_021f03f8(PTR_DAT_049c4930);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c4938);
    FUN_021f03f8(PTR_DAT_049c4940);
    FUN_021f03f8(PTR_DAT_049c48a8);
    FUN_021f03f8(PTR_DAT_049c4948);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4b8e2 = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*param_1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_025540c0:
    FUN_0235b3fc(&uStack_60,&uStack_30,*(undefined8 *)PTR_DAT_049c4768);
    bVar2 = (char)uStack_30 != '\0';
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = FUN_024f7024(*(undefined8 *)(lVar7 + 0x100),&lStack_38,*(undefined8 *)PTR_DAT_049c4940);
    if ((uVar3 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (((*(int *)(lStack_38 + 0x118) == 0) &&
          (uVar3 = FUN_024f7024(*(undefined8 *)(lVar7 + 0x100),&lStack_40,
                                *(undefined8 *)PTR_DAT_049c4938), (uVar3 & 1) != 0)) &&
         (uVar3 = FUN_024f7024(*(undefined8 *)(lVar7 + 0x100),&lStack_48,
                               *(undefined8 *)PTR_DAT_049c48a8), (uVar3 & 1) != 0)) {
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar4 = ReviveSystem__GetRevive_24e0f1c(lStack_48,0);
        if (*(long *)(lVar7 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar5 = *(long *)(*(long *)(lVar7 + 0xa0) + 0x40);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_30 = *(undefined4 *)(lVar4 + 0x18);
        uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                          (lVar5,&uStack_30,*(undefined8 *)PTR_DAT_049c4948);
        if ((uVar3 & 1) != 0) {
          if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar3 = BoosterSystem__CanSelect_24e5e90(lStack_40,*(undefined4 *)(lVar4 + 0x18),0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(lVar7 + 0x1a8) != 0) {
              Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
                        (*(long *)(lVar7 + 0x1a8),0);
            }
            if (*(long *)(lVar7 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0x120),0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(lVar4,1,0);
            if (*(long *)(lVar7 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0x118),0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
            if (*(long *)(lVar7 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar7 + 0x150),0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
            PlayingMonitor__UpdateGiveUpBoosterView_2451054(lVar7,0);
            if (*(int *)(*(long *)PTR_DAT_049c4930 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar6 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___Create_27df7e4
                              (*(undefined8 *)PTR_DAT_049c4920);
            *(undefined8 *)(lVar7 + 0x1a0) = uVar6;
            thunk_FUN_021f190c(lVar7 + 0x1a0);
            if (*(long *)(lVar7 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___get_Task_27dfe9c
                      (*(long *)(lVar7 + 0x1a0),&uStack_30,*(undefined8 *)PTR_DAT_049c4928);
            uStack_70 = CONCAT44(uStack_2c,uStack_30);
            uStack_68 = uStack_28;
            FUN_0235b0c0(&uStack_70,&uStack_30,*(undefined8 *)PTR_DAT_049c4778);
            uStack_60 = CONCAT44(uStack_2c,uStack_30);
            uStack_58 = uStack_28;
            uVar3 = FUN_0201a71c(&uStack_60,*(undefined8 *)PTR_DAT_049c4770);
            if ((uVar3 & 1) == 0) {
              *param_1 = 0;
              *(undefined8 *)(param_1 + 0xc) = uStack_58;
              *(undefined8 *)(param_1 + 10) = uStack_60;
              thunk_FUN_021f190c(param_1 + 10,0);
              FUN_0235bb44(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c4918);
              return;
            }
            goto LAB_025540c0;
          }
        }
      }
    }
    bVar2 = true;
  }
  puVar1 = PTR_DAT_049b5570;
  *param_1 = -2;
  uStack_30 = CONCAT31(uStack_30._1_3_,bVar2);
  FUN_0235bed4(param_1 + 2,&uStack_30,*(undefined8 *)puVar1);
  return;
}

