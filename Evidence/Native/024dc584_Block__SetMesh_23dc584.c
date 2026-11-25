/* IL2CPP: Block$$SetMesh
void Block__SetMesh (Block_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$SetMesh
   void Block__SetMesh (Block_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method); */

void Block__SetMesh_23dc584(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b5bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b5bb = 1;
  }
  lVar1 = *(long *)(param_1 + 0x108);
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    param_2 = *(long *)(param_1 + 0x110);
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f576e1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a25dc8,param_2,0);
    FUN_021f03f8(PTR_DAT_04a25a10);
    bRam0000000004f576e1 = 1;
  }
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (*(long *)(*(long *)PTR_DAT_04a25a10 + 0x38) == 0) {
      FUN_02229774();
    }
    uVar5 = 0;
    if (param_2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
    }
    if (pcRam0000000004f576f0 == (code *)0x0) {
      pcRam0000000004f576f0 = (code *)FUN_021f03bc(&UNK_013b1409);
    }
                    /* WARNING: Could not recover jumptable at 0x03cefc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f576f0)(lVar4,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

