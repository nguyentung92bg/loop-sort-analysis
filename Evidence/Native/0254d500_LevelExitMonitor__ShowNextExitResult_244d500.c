/* IL2CPP: LevelExitMonitor$$ShowNextExitResult
void LevelExitMonitor__ShowNextExitResult (LevelExitMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelExitMonitor$$ShowNextExitResult
   void LevelExitMonitor__ShowNextExitResult (LevelExitMonitor_o* __this, const MethodInfo* method);
    */

void LevelExitMonitor__ShowNextExitResult_244d500(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lStack_68;
  
  if ((bRam0000000004f4b8ac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049c4660);
    bRam0000000004f4b8ac = 1;
  }
  puVar3 = PTR_DAT_049c4660;
  puVar2 = PTR_DAT_049b8a18;
  puVar1 = PTR_DAT_049b5480;
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar7) {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar4,iVar7,&lStack_68,*(undefined8 *)puVar3);
      lVar4 = lStack_68;
      if (lStack_68 == 0) break;
      lVar5 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lStack_68,0);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(puVar2);
        cRam0000000004f49d57 = '\x01';
      }
      if (lVar5 == 0) break;
      puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      uVar9 = puVar6[1];
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(*puVar6,uVar9,lVar5,0);
      uVar8 = UnityEngine_RectTransform__get_offsetMin_3c2c4e0(lVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__WithX_3f0d00c(uVar8,uVar9,0,0);
      UnityEngine_RectTransform__set_offsetMin_3c2c534(lVar5,0);
      UnityEngine_RectTransform__get_offsetMax_3c2c628(lVar5,0);
      Extensions__WithX_3f0d00c(0);
      UnityEngine_RectTransform__set_offsetMax_3c2c6c8(lVar5,0);
      lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
      if (lVar4 == 0) break;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar4,iVar7 == *(int *)(param_1 + 0xa8),0);
      lVar4 = *(long *)(param_1 + 0xb0);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

