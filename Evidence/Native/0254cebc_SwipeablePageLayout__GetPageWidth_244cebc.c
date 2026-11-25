/* IL2CPP: SwipeablePageLayout$$GetPageWidth
float SwipeablePageLayout__GetPageWidth (SwipeablePageLayout_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$GetPageWidth
   float SwipeablePageLayout__GetPageWidth (SwipeablePageLayout_o* __this, int32_t idx, const
   MethodInfo* method); */

undefined4
SwipeablePageLayout__GetPageWidth_244cebc
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
          int param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lStack_28;
  
  if ((bRam0000000004f4b8a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c0);
    FUN_021f03f8(PTR_DAT_049c45c8);
    bRam0000000004f4b8a5 = 1;
  }
  lVar1 = *(long *)(param_4 + 0x18);
  if (lVar1 != 0) {
    uVar2 = 0;
    if (param_5 < *(int *)(lVar1 + 0x18)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (0,lVar1,param_5,&lStack_28,*(undefined8 *)PTR_DAT_049c45c8);
      if ((lStack_28 == 0) ||
         (lVar1 = MonitorBase__get_RectTransform_256c3fc(lStack_28,0), lVar1 == 0))
      goto LAB_0254cf5c;
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar1,0);
      uVar2 = param_3;
    }
    return uVar2;
  }
LAB_0254cf5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

