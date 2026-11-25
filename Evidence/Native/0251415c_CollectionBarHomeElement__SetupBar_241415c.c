/* IL2CPP: CollectionBarHomeElement$$SetupBar
void CollectionBarHomeElement__SetupBar (CollectionBarHomeElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement$$SetupBar
   void CollectionBarHomeElement__SetupBar (CollectionBarHomeElement_o* __this, const MethodInfo*
   method); */

void CollectionBarHomeElement__SetupBar_241415c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_24;
  
  if ((bRam0000000004f4b73c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b73c = 1;
  }
  iStack_24 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar4 = CollectionBar__GetCurrentProgressData_2511d90(*(long *)(param_1 + 0x40),0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar4);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar3 = CollectionBar__GetCurrentTokenCount_251276c(*(long *)(param_1 + 0x40),0);
      *(int *)(param_1 + 0xb0) = iVar3;
      puVar1 = PTR_DAT_049bb3a0;
      if (*(long *)(param_1 + 0xa8) != 0) {
        iStack_24 = *(int *)(*(long *)(param_1 + 0xa8) + 0x20);
        if (iStack_24 <= iVar3) {
          iVar3 = iStack_24;
        }
        *(int *)(param_1 + 0xb0) = iVar3;
        uVar4 = System_Int32__ToString_30fbaa0((int *)(param_1 + 0xb0),0);
        uVar5 = System_Int32__ToString_30fbaa0(&iStack_24,0);
        uVar4 = System_String__Concat_2f7d424(uVar4,*(undefined8 *)puVar1,uVar5,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0x5f7a3f9f,uVar4,0);
        iVar2 = iStack_24;
        iVar3 = *(int *)(param_1 + 0xb0);
        lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (param_1,0x85f8a9cf,0);
        if ((lVar6 != 0) &&
           (lVar6 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar6,0), lVar6 != 0)) {
          fVar7 = (float)iVar3 / (float)iVar2;
          fVar9 = 1.0;
          if (fVar7 <= 1.0) {
            fVar9 = fVar7;
          }
          fVar8 = 0.0;
          if (0.0 <= fVar7) {
            fVar8 = fVar9;
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar8,0x3f800000,lVar6,0);
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

