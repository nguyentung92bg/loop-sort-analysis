/* IL2CPP: Carrier$$GetContainerSize
UnityEngine_Vector3_o Carrier__GetContainerSize (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetContainerSize
   UnityEngine_Vector3_o Carrier__GetContainerSize (Carrier_o* __this, const MethodInfo* method); */

undefined4 Carrier__GetContainerSize_2408db8(long param_1)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x138) + 0x1c);
    if (0 < *(int *)(param_1 + 0x1bc)) {
      if (*(long *)(param_1 + 0x168) == 0) goto LAB_02508e24;
      Carrier__get_BlockSize_240813c();
    }
    return uVar1;
  }
LAB_02508e24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

