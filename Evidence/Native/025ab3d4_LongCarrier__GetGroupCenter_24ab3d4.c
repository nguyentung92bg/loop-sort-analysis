/* IL2CPP: LongCarrier$$GetGroupCenter
UnityEngine_Vector3_o LongCarrier__GetGroupCenter (LongCarrier_o* __this, int32_t group, int32_t capacityGroups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$GetGroupCenter
   UnityEngine_Vector3_o LongCarrier__GetGroupCenter (LongCarrier_o* __this, int32_t group, int32_t
   capacityGroups, const MethodInfo* method); */

undefined4 LongCarrier__GetGroupCenter_24ab3d4(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  if (*(long *)(param_1 + 0x100) != 0) {
    auVar4 = Carrier__get_BlockSize_240813c(*(long *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0x100) != 0) {
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = auVar4._8_4_ / param_3;
      }
      Carrier__CoordinateToLocalPosition_2408cbc(*(long *)(param_1 + 0x100),0,iVar1 * param_2,0);
      if (*(long *)(param_1 + 0x100) != 0) {
        Carrier__CoordinateToLocalPosition_2408cbc
                  (*(long *)(param_1 + 0x100),
                   (auVar4._0_8_ & 0xffffffff00000000 | (ulong)(auVar4._0_4_ - 1)) - 0x100000000,
                   iVar1 + iVar1 * param_2 + -1,0);
        if ((*(long *)(param_1 + 0x100) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x100) + 0xc0), lVar2 != 0)) {
          if ((bRam0000000004f58a1e & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a1e = 1;
          }
          if (lVar2 != 0) {
            lVar3 = *(long *)(lVar2 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
            }
            if (pcRam0000000004f58ad8 == (code *)0x0) {
              pcRam0000000004f58ad8 = (code *)FUN_021f03bc(&UNK_013dca65);
            }
            (*pcRam0000000004f58ad8)(lVar3,&stack0xffffffffffffffd4,&stack0xffffffffffffffc8);
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

