/* IL2CPP: RocketSystem$$GetStrikePoint
UnityEngine_Vector3_o RocketSystem__GetStrikePoint (RocketSystem_o* __this, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RocketSystem$$GetStrikePoint
   UnityEngine_Vector3_o RocketSystem__GetStrikePoint (RocketSystem_o* __this, UnityEngine_Vector3_o
   to, const MethodInfo* method); */

undefined4
RocketSystem__GetStrikePoint_24b9a90
          (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_4 + 0x30) != 0) {
    uStack_2c = UnityEngine_Camera__WorldToViewportPoint_3bce924(*(long *)(param_4 + 0x30),0);
    lVar1 = *(long *)(param_4 + 0x30);
    if (lVar1 != 0) {
      fStack_28 = 0.5;
      if (0.5 <= param_2 + _UNK_013aa5f0) {
        fStack_28 = param_2 + _UNK_013aa5f0;
      }
      uStack_24 = param_3;
      if ((bRam0000000004f56886 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a25808,2);
        bRam0000000004f56886 = 1;
      }
      uStack_30 = 0;
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
        (*pcRam0000000004f56ae0)(lVar2,&uStack_2c,2,&uStack_38);
        return (undefined4)uStack_38;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

