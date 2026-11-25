/* IL2CPP: HandMonitor$$Awake
void HandMonitor__Awake (HandMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HandMonitor$$Awake
   void HandMonitor__Awake (HandMonitor_o* __this, const MethodInfo* method); */

void HandMonitor__Awake_244386c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0xcc7bdb6e,0)
  ;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f581f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a251b8,0,0);
    bRam0000000004f581f8 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f582c8 == (code *)0x0) {
      pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
    }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f582c8)(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

