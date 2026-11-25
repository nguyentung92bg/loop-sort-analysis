/* IL2CPP: HighlightModule$$Remove
void HighlightModule__Remove (HighlightModule_o* __this, HighlightEntity_o highlightEntity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightModule$$Remove
   void HighlightModule__Remove (HighlightModule_o* __this, HighlightEntity_o highlightEntity, const
   MethodInfo* method); */

void HighlightModule__Remove_254e058(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4c05b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cab68);
    bRam0000000004f4c05b = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
              (*(long *)(param_1 + 0x38),&uStack_40,*(undefined8 *)PTR_DAT_049cab68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

