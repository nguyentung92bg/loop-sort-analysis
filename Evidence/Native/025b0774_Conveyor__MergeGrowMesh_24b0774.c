/* IL2CPP: Conveyor$$MergeGrowMesh
void Conveyor__MergeGrowMesh (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$MergeGrowMesh
   void Conveyor__MergeGrowMesh (Conveyor_o* __this, const MethodInfo* method); */

void Conveyor__MergeGrowMesh_24b0774(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bb5c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb5c = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  Conveyor__ClipMesh_24b0468(*(undefined8 *)(param_1 + 0x170),param_1);
  lVar3 = Conveyor__get_AutoCount_24b03e4(param_1);
  if (lVar3 != 0) {
    SplineMeshAutoCount__Refresh_249f608(lVar3,0);
    plVar4 = *(long **)(param_1 + 0xc0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
      lVar3 = *(long *)(param_1 + 0xe0);
      if (lVar3 != 0) {
        if ((bRam0000000004f56ee6 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a25b08,0,0);
          bRam0000000004f56ee6 = 1;
        }
        if (lVar3 != 0) {
          lVar6 = *(long *)(lVar3 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
          }
          if (pcRam0000000004f56f70 == (code *)0x0) {
            pcRam0000000004f56f70 = (code *)FUN_021f03bc(&UNK_013d66ae);
          }
                    /* WARNING: Could not recover jumptable at 0x03cdcb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f56f70)(lVar6,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

