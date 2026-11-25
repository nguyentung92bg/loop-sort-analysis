/* IL2CPP: BlockGroupShapeSystem$$OnColorBlindUpdate
void BlockGroupShapeSystem__OnColorBlindUpdate (BlockGroupShapeSystem_o* __this, ColorBlindUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockGroupShapeSystem$$OnColorBlindUpdate
   void BlockGroupShapeSystem__OnColorBlindUpdate (BlockGroupShapeSystem_o* __this,
   ColorBlindUpdateMessage_o m, const MethodInfo* method); */

void BlockGroupShapeSystem__OnColorBlindUpdate_23e1468(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5817b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a266d8,param_2 & 1,0);
    bRam0000000004f5817b = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58188 == (code *)0x0) {
      pcRam0000000004f58188 = (code *)FUN_021f03bc(&UNK_013d0ea3);
    }
                    /* WARNING: Could not recover jumptable at 0x03d17f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58188)(lVar2,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

