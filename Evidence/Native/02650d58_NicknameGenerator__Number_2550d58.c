/* IL2CPP: NicknameGenerator$$Number
System_String_o* NicknameGenerator__Number (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: NicknameGenerator$$Number
   System_String_o* NicknameGenerator__Number (const MethodInfo* method); */

undefined8 NicknameGenerator__Number_2550d58(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  int iStack_1c;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4c076 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cad38);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049cad20);
    FUN_021f03f8(PTR_DAT_049cad40);
    bRam0000000004f4c076 = 1;
  }
  iStack_1c = 0;
  fVar4 = (float)UnityEngine_Random__get_value_3c11d1c(0);
  puVar1 = PTR_DAT_049cad20;
  if (_UNK_013aa8dc <= fVar4) {
    if (_UNK_013aa3fc <= fVar4) {
      lVar2 = *(long *)PTR_DAT_049cad20;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5480);
      }
      Extensions__GetRandom___Il2CppFullySharedGenericType__25efe34
                (uVar3,&uStack_18,*(undefined8 *)PTR_DAT_049cad38);
    }
    else {
      iStack_1c = UnityEngine_Random__Range_3c11c94(0x58,0x6e,0);
      iStack_1c = iStack_1c % 100;
      uStack_18 = System_Int32__ToString_30fbb34(&iStack_1c,*(undefined8 *)PTR_DAT_049cad40,0);
    }
  }
  else {
    iStack_1c = UnityEngine_Random__Range_3c11c94(1,0x1e,0);
    uStack_18 = System_Int32__ToString_30fbaa0(&iStack_1c,0);
  }
  return uStack_18;
}

