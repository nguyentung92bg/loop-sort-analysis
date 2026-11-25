/* IL2CPP: HighlightMonitor$$ShowMask
void HighlightMonitor__ShowMask (HighlightMonitor_o* __this, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightMonitor$$ShowMask
   void HighlightMonitor__ShowMask (HighlightMonitor_o* __this, float alpha, const MethodInfo*
   method); */

void HighlightMonitor__ShowMask_2443fe8(undefined4 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000004f4b85a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1678);
    bRam0000000004f4b85a = 1;
  }
  if ((*(long *)(param_2 + 0x98) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_2 + 0x98),0), lVar1 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar1,0);
    if ((uVar2 & 1) == 0) {
      auVar4 = LitMotion_LMotion__Create_2ea9f9c(0,param_1,0x3f000000,0);
      LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                (auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_2 + 0x98),
                 *(undefined8 *)PTR_DAT_049c1678);
    }
    if ((*(long *)(param_2 + 0x98) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_2 + 0x98),0),
       lVar1 != 0)) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,1,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar1 != 0) {
        lVar3 = *(long *)(lVar1 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar3,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

