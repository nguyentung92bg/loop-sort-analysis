/* IL2CPP: BattlePassSubMonitor$$GetObject
UnityEngine_GameObject_o* BattlePassSubMonitor__GetObject (BattlePassSubMonitor_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$GetObject
   UnityEngine_GameObject_o* BattlePassSubMonitor__GetObject (BattlePassSubMonitor_o* __this,
   int32_t index, const MethodInfo* method); */

long BattlePassSubMonitor__GetObject_246de30(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  
  if ((bRam0000000004f4b98f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c54c8);
    bRam0000000004f4b98f = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar4 != 0)) {
    iVar2 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar4,*(undefined8 *)PTR_DAT_049c54c8);
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar3 = BattlePass__GetCurrentLevel_250beac(*(long *)(param_1 + 0x50),0);
      if (param_2 == 0) {
        uVar8 = 0xdedfd100;
      }
      else if (iVar2 + -1 == param_2) {
        uVar8 = 0x2f5fc6a;
      }
      else {
        uVar8 = 0x39740faf;
        if (iVar3 != param_2) {
          uVar8 = 0x64c2902f;
        }
      }
      lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                        (param_1,uVar8,0);
      if ((lVar4 != 0) &&
         (lVar4 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar4,0),
         lVar4 != 0)) {
        if ((bRam0000000004f5819f & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26710,0);
          FUN_021f03f8(PTR_DAT_04a26718);
          bRam0000000004f5819f = 1;
        }
        puVar1 = PTR_DAT_04a26718;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = *(long *)(lVar4 + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
        }
        if (pcRam0000000004f581b0 == (code *)0x0) {
          pcRam0000000004f581b0 = (code *)FUN_021f03bc(&UNK_013e2aaa);
        }
        uVar7 = (*pcRam0000000004f581b0)(lVar9);
        lVar4 = *(long *)puVar1;
        if (*(long *)(lVar4 + 0x38) == 0) {
          FUN_02229774(lVar4);
        }
        if (uVar7 != 0) {
          if (cRam0000000004f4c36d == '\0') {
            FUN_021f03f8(&DAT_04bdea20);
            cRam0000000004f4c36d = '\x01';
          }
          if ((uVar7 & 1) == 0) {
            plVar5 = (long *)System_IntPtr__op_Explicit_314af64();
            lVar9 = *plVar5;
          }
          else {
            lVar9 = System_Runtime_InteropServices_GCHandle__GetTarget_301d554(uVar7,0);
          }
          lVar4 = **(long **)(lVar4 + 0x38);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02229718(lVar4);
          }
          if (lVar9 != 0) {
            lVar6 = thunk_FUN_0222c938(lVar9,lVar4);
            if (lVar6 != 0) {
              return lVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f0a20(lVar9,lVar4);
          }
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

