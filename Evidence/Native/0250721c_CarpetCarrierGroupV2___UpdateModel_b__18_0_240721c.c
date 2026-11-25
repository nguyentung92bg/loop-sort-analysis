/* IL2CPP: CarpetCarrierGroupV2$$<UpdateModel>b__18_0
void CarpetCarrierGroupV2___UpdateModel_b__18_0 (CarpetCarrierGroupV2_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2$$<UpdateModel>b__18_0
   void CarpetCarrierGroupV2___UpdateModel_b__18_0 (CarpetCarrierGroupV2_o* __this, float x, const
   MethodInfo* method); */

void CarpetCarrierGroupV2___UpdateModel_b__18_0_240721c(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f4b6bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27d8);
    bRam0000000004f4b6bd = 1;
  }
  puVar1 = PTR_DAT_049c27d8;
  if (*(long *)(param_2 + 0x48) != 0) {
    UnityEngine_MaterialPropertyBlock__Clear_3bdb93c(*(long *)(param_2 + 0x48),0);
    lVar4 = *(long *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar4 != 0) {
      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                (param_1,0x3f800000,0,0,lVar4,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      lVar4 = *(long *)(param_2 + 0xc0);
      if (lVar4 != 0) {
        lVar2 = *(long *)(param_2 + 0x48);
        if ((bRam0000000004f56ee0 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a25b08,lVar2,0);
          bRam0000000004f56ee0 = 1;
        }
        if (lVar4 != 0) {
          lVar3 = *(long *)(lVar4 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
          }
          uVar5 = 0;
          if (lVar2 != 0) {
            uVar5 = *(undefined8 *)(lVar2 + 0x10);
          }
          if (pcRam0000000004f56f40 == (code *)0x0) {
            pcRam0000000004f56f40 = (code *)FUN_021f03bc(&UNK_013b715c);
          }
                    /* WARNING: Could not recover jumptable at 0x03cdc5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f56f40)(lVar3,uVar5);
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

