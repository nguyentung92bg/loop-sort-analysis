/* IL2CPP: Monitors$$ToggleAlphaVisibility
void Monitors__ToggleAlphaVisibility (Monitors_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$ToggleAlphaVisibility
   void Monitors__ToggleAlphaVisibility (Monitors_o* __this, const MethodInfo* method); */

void Monitors__ToggleAlphaVisibility_256efd4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  bVar1 = *(char *)(param_1 + 0x60) == '\0';
  lVar2 = *(long *)(param_1 + 0x48);
  *(bool *)(param_1 + 0x60) = bVar1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = 0x3f800000;
  if (!bVar1) {
    uVar4 = 0;
  }
  if ((bRam0000000004f5bc40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a38698,0);
    bRam0000000004f5bc40 = 1;
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
    }
    if (pcRam0000000004f5bc50 == (code *)0x0) {
      pcRam0000000004f5bc50 = (code *)FUN_021f03bc(&UNK_013e5856);
    }
                    /* WARNING: Could not recover jumptable at 0x03fc2c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f5bc50)(uVar4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

