/* IL2CPP: SandFlowSystem$$JellyHome
UnityEngine_Vector3_o SandFlowSystem__JellyHome (Carrier_o* carrier, SandFlowSystem_JellyShape_o* shape, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$JellyHome
   UnityEngine_Vector3_o SandFlowSystem__JellyHome (Carrier_o* carrier, SandFlowSystem_JellyShape_o*
   shape, UnityEngine_Vector3Int_o coordinate, const MethodInfo* method); */

undefined4
SandFlowSystem__JellyHome_24ce9dc(long param_1,float *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0xc0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fStack_2c = *param_2 + param_2[3] * (float)(int)param_3;
  fStack_24 = param_2[2] + param_2[5] * (float)param_4;
  fStack_28 = param_2[1] + param_2[4] * (float)(int)((ulong)param_3 >> 0x20);
  if ((bRam0000000004f58a1e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a1e = 1;
  }
  uStack_30 = 0;
  uStack_38 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58ad8 == (code *)0x0) {
      pcRam0000000004f58ad8 = (code *)FUN_021f03bc(&UNK_013dca65);
    }
    (*pcRam0000000004f58ad8)(lVar2,&fStack_2c,&uStack_38);
    return (undefined4)uStack_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

