/* IL2CPP: DailyRewardsSubMonitor$$ResetItemView
void DailyRewardsSubMonitor__ResetItemView (StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$ResetItemView
   void DailyRewardsSubMonitor__ResetItemView (StatefulUI_Runtime_Core_StatefulComponent_o* view,
   const MethodInfo* method); */

void DailyRewardsSubMonitor__ResetItemView_2474de4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                             (param_1,0xbcdc2f95,0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    plVar1 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                               (param_1,0xb2388b6d,0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0)
                );
      plVar1 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                 (param_1,0xd4f509e7,0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                   *(undefined8 *)(*plVar1 + 0x2b0));
        lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                          (param_1,0x9927ed9b,0);
        if ((lVar2 != 0) && (plVar1 = *(long **)(lVar2 + 0x38), plVar1 != (long *)0x0)) {
          (**(code **)(*plVar1 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                     *(undefined8 *)(*plVar1 + 0x2b0));
          lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                            (param_1,0xd4f509e7,0);
          if (lVar2 != 0) {
            lVar2 = UnityEngine_Component__get_transform_3c18724(lVar2,0);
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a190 = '\x01';
            }
            if (lVar2 != 0) {
              lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
              UnityEngine_Transform__set_localScale_3c2ddfc
                        (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                         *(undefined4 *)(lVar3 + 0x14),lVar2,0);
              lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0);
              if (lVar2 != 0) {
                UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
                lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                  (param_1,0xb2388b6d,0);
                if ((lVar2 != 0) &&
                   (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0)) {
                  if ((bRam0000000004f581f8 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_04a251b8,0,0);
                    bRam0000000004f581f8 = 1;
                  }
                  if (lVar2 != 0) {
                    lVar3 = *(long *)(lVar2 + 0x10);
                    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0)
                      ;
                    }
                    if (pcRam0000000004f582c8 == (code *)0x0) {
                      pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
                    }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000004f582c8)(lVar3,0);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

