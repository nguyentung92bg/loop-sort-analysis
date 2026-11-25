/* IL2CPP: InputH$$GetKey
bool InputH__GetKey (int32_t keyCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InputH$$GetKey
   bool InputH__GetKey (int32_t keyCode, const MethodInfo* method); */

undefined8 InputH__GetKey_2508aec(undefined4 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = InputH__GetAvailable_2508934();
  if ((uVar1 & 1) != 0) {
    if (pcRam0000000004f59988 == (code *)0x0) {
      pcRam0000000004f59988 = (code *)FUN_021f03bc(&UNK_013c9b10);
    }
                    /* WARNING: Could not recover jumptable at 0x03d7b0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000004f59988)(param_1);
    return uVar2;
  }
  return 0;
}

