/* IL2CPP: MonitorBase$$SetRenderMode
void MonitorBase__SetRenderMode (MonitorBase_o* __this, int32_t renderMode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase$$SetRenderMode
   void MonitorBase__SetRenderMode (MonitorBase_o* __this, int32_t renderMode, const MethodInfo*
   method); */

void MonitorBase__SetRenderMode_256c8fc(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5bde5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a386c8,param_2,0);
    bRam0000000004f5bde5 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f5be20 == (code *)0x0) {
      pcRam0000000004f5be20 = (code *)FUN_021f03bc(&UNK_013bba85);
    }
                    /* WARNING: Could not recover jumptable at 0x03fc6de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f5be20)(lVar2,param_2 & 0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

