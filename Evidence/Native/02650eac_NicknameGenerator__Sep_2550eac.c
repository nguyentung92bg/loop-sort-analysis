/* IL2CPP: NicknameGenerator$$Sep
System_String_o* NicknameGenerator__Sep (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NicknameGenerator$$Sep
   System_String_o* NicknameGenerator__Sep (const MethodInfo* method); */

undefined8 NicknameGenerator__Sep_2550eac(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)PTR_DAT_049be8e0;
  puVar2 = PTR_DAT_049b50f8;
  if ((bRam0000000004f4c077 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be8e0);
    FUN_021f03f8(PTR_DAT_049b50f8);
    bRam0000000004f4c077 = 1;
  }
  fVar3 = (float)UnityEngine_Random__get_value_3c11d1c(0);
  if (0.5 <= fVar3) {
    puVar1 = (undefined8 *)puVar2;
  }
  return *puVar1;
}

