/* IL2CPP: SwipeablePageLayout$$GetSlideOffset
float SwipeablePageLayout__GetSlideOffset (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$GetSlideOffset
   float SwipeablePageLayout__GetSlideOffset (SwipeablePageLayout_o* __this, const MethodInfo*
   method); */

float SwipeablePageLayout__GetSlideOffset_244ca38(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lStack_38;
  
  if ((bRam0000000004f4b8a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c45c8);
    bRam0000000004f4b8a2 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_1 + 0x18),0,&lStack_38,*(undefined8 *)PTR_DAT_049c45c8);
    puVar1 = PTR_DAT_049b5480;
    if (lStack_38 != 0) {
      uVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (lStack_38,0x8ac5d2f7,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar1);
      }
      lVar4 = Extensions__GetRectTransform_3f0c498(uVar3,0);
      fVar5 = (float)SwipeablePageLayout__GetPageTargetPosition_244c490(param_1,0);
      if (lVar4 != 0) {
        fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar4,0);
        fVar7 = (float)SwipeablePageLayout__GetPageWidth_244cebc(param_1,0);
        iVar2 = UnityEngine_Screen__get_width_3bd80bc(0);
        return (fVar6 - fVar5) / (fVar7 / (float)iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

