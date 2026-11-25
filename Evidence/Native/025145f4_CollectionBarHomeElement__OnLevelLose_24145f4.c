/* IL2CPP: CollectionBarHomeElement$$OnLevelLose
void CollectionBarHomeElement__OnLevelLose (CollectionBarHomeElement_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$OnLevelLose
   void CollectionBarHomeElement__OnLevelLose (CollectionBarHomeElement_o* __this,
   LevelLoseMessage_o m, const MethodInfo* method); */

void CollectionBarHomeElement__OnLevelLose_24145f4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int aiStack_24 [3];
  
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar7 = CollectionBar__IsLocked_2511f18(*(long *)(param_1 + 0x40),0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if ((bRam0000000004f4b73c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b73c = 1;
  }
  aiStack_24[0] = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = CollectionBar__GetCurrentProgressData_2511d90(*(long *)(param_1 + 0x40),0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar4);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar3 = CollectionBar__GetCurrentTokenCount_251276c(*(long *)(param_1 + 0x40),0);
      *(int *)(param_1 + 0xb0) = iVar3;
      puVar1 = PTR_DAT_049bb3a0;
      if (*(long *)(param_1 + 0xa8) != 0) {
        aiStack_24[0] = *(int *)(*(long *)(param_1 + 0xa8) + 0x20);
        if (aiStack_24[0] <= iVar3) {
          iVar3 = aiStack_24[0];
        }
        *(int *)(param_1 + 0xb0) = iVar3;
        uVar4 = System_Int32__ToString_30fbaa0((int *)(param_1 + 0xb0),0);
        uVar5 = System_Int32__ToString_30fbaa0(aiStack_24,0);
        uVar4 = System_String__Concat_2f7d424(uVar4,*(undefined8 *)puVar1,uVar5,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0x5f7a3f9f,uVar4,0);
        iVar2 = aiStack_24[0];
        iVar3 = *(int *)(param_1 + 0xb0);
        lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (param_1,0x85f8a9cf,0);
        if ((lVar6 != 0) &&
           (lVar6 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar6,0), lVar6 != 0)) {
          fVar8 = (float)iVar3 / (float)iVar2;
          fVar10 = 1.0;
          if (fVar8 <= 1.0) {
            fVar10 = fVar8;
          }
          fVar9 = 0.0;
          if (0.0 <= fVar8) {
            fVar9 = fVar10;
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar9,0x3f800000,lVar6,0);
          CollectionBarHomeElement__UpdateBarReward_2414c58(param_1,*(undefined8 *)(param_1 + 0xa8))
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

