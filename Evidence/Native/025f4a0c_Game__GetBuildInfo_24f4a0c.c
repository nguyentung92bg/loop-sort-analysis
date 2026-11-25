/* IL2CPP: Game$$GetBuildInfo
System_String_o* Game__GetBuildInfo (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Game$$GetBuildInfo
   System_String_o* Game__GetBuildInfo (const MethodInfo* method); */

undefined8 Game__GetBuildInfo_24f4a0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_049c8398;
  if ((bRam0000000004f4bd17 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8398);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c60e8);
    FUN_021f03f8(PTR_DAT_049b61a0);
    FUN_021f03f8(PTR_DAT_049c83a0);
    bRam0000000004f4bd17 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty_2f7c924(**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
  puVar1 = PTR_DAT_049b3b98;
  if ((uVar3 & 1) != 0) {
    lVar4 = UnityEngine_Resources__Load_object__26a73fc
                      (*(undefined8 *)PTR_DAT_049c83a0,*(undefined8 *)PTR_DAT_049c60e8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
    puVar6 = (undefined8 *)PTR_DAT_049b61a0;
    if ((uVar3 & 1) != 0) goto LAB_025f4b14;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_TextAsset__get_text_3c222c8(lVar4,0);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar5;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar5);
  }
  puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
LAB_025f4b14:
  return *puVar6;
}

