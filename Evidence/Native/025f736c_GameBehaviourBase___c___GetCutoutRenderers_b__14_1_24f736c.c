/* IL2CPP: GameBehaviourBase.<>c$$<GetCutoutRenderers>b__14_1
UnityEngine_GameObject_o* GameBehaviourBase___c___GetCutoutRenderers_b__14_1 (GameBehaviourBase___c_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase.<>c$$<GetCutoutRenderers>b__14_1
   UnityEngine_GameObject_o* GameBehaviourBase___c___GetCutoutRenderers_b__14_1
   (GameBehaviourBase___c_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method); */

long GameBehaviourBase___c___GetCutoutRenderers_b__14_1_24f736c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5819f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26710,0);
    FUN_021f03f8(PTR_DAT_04a26718);
    bRam0000000004f5819f = 1;
  }
  puVar1 = PTR_DAT_04a26718;
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_2,0);
    }
    if (pcRam0000000004f581b0 == (code *)0x0) {
      pcRam0000000004f581b0 = (code *)FUN_021f03bc(&UNK_013e2aaa);
    }
    uVar4 = (*pcRam0000000004f581b0)(lVar5);
    lVar5 = *(long *)puVar1;
    if (*(long *)(lVar5 + 0x38) == 0) {
      FUN_02229774(lVar5);
    }
    if (uVar4 != 0) {
      if (cRam0000000004f4c36d == '\0') {
        FUN_021f03f8(&DAT_04bdea20);
        cRam0000000004f4c36d = '\x01';
      }
      if ((uVar4 & 1) == 0) {
        plVar2 = (long *)System_IntPtr__op_Explicit_314af64();
        lVar6 = *plVar2;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_301d554(uVar4,0);
      }
      lVar5 = **(long **)(lVar5 + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      if (lVar6 != 0) {
        lVar3 = thunk_FUN_0222c938(lVar6,lVar5);
        if (lVar3 != 0) {
          return lVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(lVar6,lVar5);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

