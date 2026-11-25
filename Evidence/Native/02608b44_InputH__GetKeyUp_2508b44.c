/* IL2CPP: InputH$$GetKeyUp
bool InputH__GetKeyUp (int32_t keyCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InputH$$GetKeyUp
   bool InputH__GetKeyUp (int32_t keyCode, const MethodInfo* method); */

undefined8 InputH__GetKeyUp_2508b44(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = InputH__GetAvailable_2508934();
  if ((uVar1 & 1) != 0) {
    if (pcRam0000000004f59990 == (code *)0x0) {
      pcRam0000000004f59990 = (code *)FUN_021f03bc(&UNK_013b3d1d);
    }
                    /* WARNING: Could not recover jumptable at 0x03d7b11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000004f59990)(param_1);
    return uVar2;
  }
  return 0;
}

