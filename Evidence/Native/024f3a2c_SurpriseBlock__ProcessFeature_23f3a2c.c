/* IL2CPP: SurpriseBlock$$ProcessFeature
void SurpriseBlock__ProcessFeature (SurpriseBlock_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SurpriseBlock$$ProcessFeature
   void SurpriseBlock__ProcessFeature (SurpriseBlock_o* __this, int32_t featureType,
   System_String_o* data, const MethodInfo* method); */

void SurpriseBlock__ProcessFeature_23f3a2c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0x20) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0xa8);
    if ((bRam0000000004f56edd & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a25b08,lVar1,0);
      FUN_021f03f8(PTR_DAT_04a25a20);
      bRam0000000004f56edd = 1;
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
      }
      if (*(long *)(*(long *)PTR_DAT_04a25a20 + 0x38) == 0) {
        FUN_02229774();
      }
      uVar4 = 0;
      if (lVar1 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + 0x10);
      }
      if (pcRam0000000004f56f28 == (code *)0x0) {
        pcRam0000000004f56f28 = (code *)FUN_021f03bc(&UNK_013c6f84);
      }
                    /* WARNING: Could not recover jumptable at 0x03cdc2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f56f28)(lVar3,uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

