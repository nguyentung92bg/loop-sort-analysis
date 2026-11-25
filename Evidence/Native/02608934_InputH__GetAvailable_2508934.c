/* IL2CPP: InputH$$GetAvailable
bool InputH__GetAvailable (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InputH$$GetAvailable
   bool InputH__GetAvailable (const MethodInfo* method); */

uint InputH__GetAvailable_2508934(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4bdab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    bRam0000000004f4bdab = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Application__get_isMobilePlatform_3bc80b4(0);
  if ((uVar3 & 1) == 0) {
    if (cRam0000000004f4be70 == '\0') {
      FUN_021f03f8(PTR_DAT_049c8f28);
      cRam0000000004f4be70 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_049c8f28 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(**(long **)(*(long *)PTR_DAT_049c8f28 + 0xb8) + 0x1c8) == '\0') {
      uVar2 = InputH__IsTypingInInputField_25089e4();
      uVar2 = uVar2 ^ 1;
      goto LAB_026089c4;
    }
  }
  uVar2 = 0;
LAB_026089c4:
  return uVar2 & 1;
}

