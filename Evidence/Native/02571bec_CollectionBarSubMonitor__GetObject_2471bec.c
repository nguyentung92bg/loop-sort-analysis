/* IL2CPP: CollectionBarSubMonitor$$GetObject
UnityEngine_GameObject_o* CollectionBarSubMonitor__GetObject (CollectionBarSubMonitor_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSubMonitor$$GetObject
   UnityEngine_GameObject_o* CollectionBarSubMonitor__GetObject (CollectionBarSubMonitor_o* __this,
   int32_t index, const MethodInfo* method); */

long CollectionBarSubMonitor__GetObject_2471bec(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam0000000004f4b9aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55e0);
    bRam0000000004f4b9aa = 1;
  }
  puVar2 = PTR_DAT_049c55e0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0xd8), lVar5 != 0)) {
    iVar3 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar5,*(undefined8 *)PTR_DAT_049c55e0);
    if (iVar3 - param_2 == 1) {
      uVar1 = 0xdedfd100;
    }
    else {
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0xd8), lVar5 == 0)) goto LAB_02571cb0;
      iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (lVar5,*(undefined8 *)puVar2);
      uVar1 = 0x2f5fc6a;
      if (iVar3 - param_2 != iVar4) {
        uVar1 = 0x64c2902f;
      }
    }
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c(param_1,uVar1,0)
    ;
    if ((lVar5 != 0) &&
       (lVar5 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0),
       lVar5 != 0)) {
      if ((bRam0000000004f5819f & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26710,0);
        FUN_021f03f8(PTR_DAT_04a26718);
        bRam0000000004f5819f = 1;
      }
      puVar2 = PTR_DAT_04a26718;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
      }
      if (pcRam0000000004f581b0 == (code *)0x0) {
        pcRam0000000004f581b0 = (code *)FUN_021f03bc(&UNK_013e2aaa);
      }
      uVar8 = (*pcRam0000000004f581b0)(lVar9);
      lVar5 = *(long *)puVar2;
      if (*(long *)(lVar5 + 0x38) == 0) {
        FUN_02229774(lVar5);
      }
      if (uVar8 != 0) {
        if (cRam0000000004f4c36d == '\0') {
          FUN_021f03f8(&DAT_04bdea20);
          cRam0000000004f4c36d = '\x01';
        }
        if ((uVar8 & 1) == 0) {
          plVar6 = (long *)System_IntPtr__op_Explicit_314af64();
          lVar9 = *plVar6;
        }
        else {
          lVar9 = System_Runtime_InteropServices_GCHandle__GetTarget_301d554(uVar8,0);
        }
        lVar5 = **(long **)(lVar5 + 0x38);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718(lVar5);
        }
        if (lVar9 != 0) {
          lVar7 = thunk_FUN_0222c938(lVar9,lVar5);
          if (lVar7 != 0) {
            return lVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar9,lVar5);
        }
      }
      return 0;
    }
  }
LAB_02571cb0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

