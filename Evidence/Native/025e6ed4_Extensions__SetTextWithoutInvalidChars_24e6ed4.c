/* IL2CPP: Extensions$$SetTextWithoutInvalidChars
void Extensions__SetTextWithoutInvalidChars (TMPro_TMP_Text_o* text, System_String_o* sourceText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetTextWithoutInvalidChars
   void Extensions__SetTextWithoutInvalidChars (TMPro_TMP_Text_o* text, System_String_o* sourceText,
   const MethodInfo* method); */

void Extensions__SetTextWithoutInvalidChars_24e6ed4(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uStack_34;
  
                    /* try { // try from 025e6ed4 to 026e6edf has its CatchHandler @ 025e6c38 */
  puVar1 = PTR_DAT_049b3b98;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e6ecc with catch @ 025e6edc
                        */
  if ((bRam0000000004f4bc94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c78);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc94 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar3 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (((param_1 != (long *)0x0) && (param_1[0x1f] != 0)) &&
       (lVar4 = TMPro_TMP_FontAsset__get_characterLookupTable_3af057c(param_1[0x1f],0),
       puVar1 = PTR_DAT_049c7c78, param_2 != 0)) {
      iVar6 = *(int *)(param_2 + 0x10);
      if (-1 < iVar6 + -1) {
        do {
          if (param_2 == 0) goto LAB_025e7034;
          iVar6 = iVar6 + -1;
          uVar2 = System_String__get_Chars_2f7736c(param_2,iVar6,0);
          if (lVar4 == 0) goto LAB_025e7034;
          uStack_34 = uVar2 & 0xffff;
          uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                            (lVar4,&uStack_34,*(undefined8 *)puVar1);
          if ((uVar3 & 1) == 0) {
            param_2 = System_String__Remove_2f7f334(param_2,iVar6,1,0);
          }
        } while (0 < iVar6);
      }
      TMPro_TMP_Text__SetText_3b0f78c(param_1,param_2,0);
      return;
    }
  }
  else if (param_1 != (long *)0x0) {
    lVar4 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar4 + 0x10);
    }
    TMPro_TMP_Text__PopulateTextBackingArray_3b0eb4c(param_1,lVar4,0,uVar5);
    param_1[0x1b] = lVar4;
    thunk_FUN_021f190c(param_1 + 0x1b,lVar4);
    *(undefined4 *)(param_1 + 0x88) = 3;
    TMPro_TMP_Text__PopulateTextProcessingArray_3b0e114(param_1);
    *(undefined1 *)(param_1 + 0x76) = 1;
    (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03c0f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
    return;
  }
LAB_025e7034:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

