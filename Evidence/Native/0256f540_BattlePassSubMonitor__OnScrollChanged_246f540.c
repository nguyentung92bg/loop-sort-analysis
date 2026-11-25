/* IL2CPP: BattlePassSubMonitor$$OnScrollChanged
void BattlePassSubMonitor__OnScrollChanged (BattlePassSubMonitor_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$OnScrollChanged
   void BattlePassSubMonitor__OnScrollChanged (BattlePassSubMonitor_o* __this, UnityEngine_Vector2_o
   value, const MethodInfo* method); */

void BattlePassSubMonitor__OnScrollChanged_246f540(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lStack_38;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),0);
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x803eb6ff,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51051 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27f0,0);
    FUN_021f03f8(PTR_DAT_049c27f8);
    FUN_021f03f8(PTR_DAT_049c2800);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f51051 = 1;
  }
  puVar3 = PTR_DAT_049c2800;
  puVar2 = PTR_DAT_049c27f0;
  puVar1 = PTR_DAT_049b3b98;
  if (*(long *)(lVar5 + 0x30) == 0) {
LAB_03447658:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar7 = *(int *)(*(long *)(lVar5 + 0x30) + 0x18);
  if (-1 < iVar7 + -1) {
    do {
      if (*(long *)(lVar5 + 0x30) == 0) goto LAB_03447658;
      iVar7 = iVar7 + -1;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(lVar5 + 0x30),iVar7,&lStack_38,*(undefined8 *)puVar3);
      lVar4 = lStack_38;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar4 == 0) goto LAB_03447658;
        UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
      }
      else {
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_03447658;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (*(long *)(lVar5 + 0x30),iVar7,*(undefined8 *)puVar2);
      }
    } while (0 < iVar7);
  }
  return;
}

