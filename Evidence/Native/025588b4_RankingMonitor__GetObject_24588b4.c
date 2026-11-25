/* IL2CPP: RankingMonitor$$GetObject
UnityEngine_GameObject_o* RankingMonitor__GetObject (RankingMonitor_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$GetObject
   UnityEngine_GameObject_o* RankingMonitor__GetObject (RankingMonitor_o* __this, int32_t index,
   const MethodInfo* method); */

long RankingMonitor__GetObject_24588b4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x6fcf623b,0);
  if ((lVar2 == 0) ||
     (lVar2 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar2,0),
     lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5819f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26710,0);
    FUN_021f03f8(PTR_DAT_04a26718);
    bRam0000000004f5819f = 1;
  }
  puVar1 = PTR_DAT_04a26718;
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
    }
    if (pcRam0000000004f581b0 == (code *)0x0) {
      pcRam0000000004f581b0 = (code *)FUN_021f03bc(&UNK_013e2aaa);
    }
    uVar5 = (*pcRam0000000004f581b0)(lVar6);
    lVar2 = *(long *)puVar1;
    if (*(long *)(lVar2 + 0x38) == 0) {
      FUN_02229774(lVar2);
    }
    if (uVar5 != 0) {
      if (cRam0000000004f4c36d == '\0') {
        FUN_021f03f8(&DAT_04bdea20);
        cRam0000000004f4c36d = '\x01';
      }
      if ((uVar5 & 1) == 0) {
        plVar3 = (long *)System_IntPtr__op_Explicit_314af64();
        lVar6 = *plVar3;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_301d554(uVar5,0);
      }
      lVar2 = **(long **)(lVar2 + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02229718(lVar2);
      }
      if (lVar6 != 0) {
        lVar4 = thunk_FUN_0222c938(lVar6,lVar2);
        if (lVar4 != 0) {
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(lVar6,lVar2);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

