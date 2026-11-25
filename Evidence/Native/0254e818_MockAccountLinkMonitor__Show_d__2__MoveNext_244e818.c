/* IL2CPP: MockAccountLinkMonitor.<Show>d__2$$MoveNext
void MockAccountLinkMonitor__Show_d__2__MoveNext (MockAccountLinkMonitor__Show_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockAccountLinkMonitor.<Show>d__2$$MoveNext
   void MockAccountLinkMonitor__Show_d__2__MoveNext (MockAccountLinkMonitor__Show_d__2_o __this,
   const MethodInfo* method); */

void MockAccountLinkMonitor__Show_d__2__MoveNext_244e818(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b8bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4708);
    FUN_021f03f8(PTR_DAT_049b55b8);
    FUN_021f03f8(PTR_DAT_049c4710);
    FUN_021f03f8(PTR_DAT_049c4718);
    FUN_021f03f8(PTR_DAT_049c4720);
    FUN_021f03f8(PTR_DAT_049c4728);
    FUN_021f03f8(PTR_DAT_049c4730);
    FUN_021f03f8(PTR_DAT_049c4738);
    bRam0000000004f4b8bb = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xc);
    uStack_50 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049c4720 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___Create_27df7e4
                      (*(undefined8 *)PTR_DAT_049c4710);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar6 = (long *)(lVar5 + 0x98);
    *plVar6 = lVar3;
    thunk_FUN_021f190c(plVar6);
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar3,1,0);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___get_Task_27dfe9c
              (*plVar6,&uStack_40,*(undefined8 *)PTR_DAT_049c4718);
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    uStack_58 = uStack_38;
    FUN_0235b0c0(&uStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4738);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    lVar7 = *(long *)PTR_DAT_049c4730;
    uStack_48 = uStack_38;
    lVar3 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_48;
      *(undefined8 *)(param_1 + 10) = uStack_50;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c4708);
      return;
    }
  }
  FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c4728);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar5,0);
  if (lVar5 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar5,0,0);
    puVar1 = PTR_DAT_049b55b8;
    *param_1 = -2;
    FUN_0235bed4(param_1 + 2,&uStack_40,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

