/* IL2CPP: RocketSystem$$GetSpawnPosition
UnityEngine_Vector3_o RocketSystem__GetSpawnPosition (RocketSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$GetSpawnPosition
   UnityEngine_Vector3_o RocketSystem__GetSpawnPosition (RocketSystem_o* __this, const MethodInfo*
   method); */

undefined4 RocketSystem__GetSpawnPosition_24b9954(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
                    /* try { // try from 025b9960 to 026b998f has its CatchHandler @ 025b9a44 */
  if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_Random__get_value_3c11d1c(0);
    UnityEngine_Random__get_value_3c11d1c(0);
                    /* try { // try from 025b9990 to 026b9a1b has its CatchHandler @ 025b97d8 */
    if (((*(long *)(param_1 + 0x30) != 0) &&
        (UnityEngine_Camera__get_nearClipPlane_3bcb204(*(long *)(param_1 + 0x30),0),
        *(long *)(param_1 + 0x40) != 0)) && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) {
      if ((bRam0000000004f56886 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a25808,2);
        bRam0000000004f56886 = 1;
      }
      uStack_38 = 0;
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f56ae0 == (code *)0x0) {
          pcRam0000000004f56ae0 = (code *)FUN_021f03bc(&UNK_013e010d);
        }
        (*pcRam0000000004f56ae0)(lVar2,&stack0xffffffffffffffd4,2,&uStack_38);
        return (undefined4)uStack_38;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

