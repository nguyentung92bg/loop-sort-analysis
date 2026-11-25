/* IL2CPP: Monitors$$SetAlphaVisibility
void Monitors__SetAlphaVisibility (Monitors_o* __this, bool visibility, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$SetAlphaVisibility
   void Monitors__SetAlphaVisibility (Monitors_o* __this, bool visibility, const MethodInfo*
   method); */

void Monitors__SetAlphaVisibility_256efa4(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
                    /* try { // try from 0266efa4 to 0276efef has its CatchHandler @ 0266f06c */
  lVar1 = *(long *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x60) = param_2;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = 0x3f800000;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  if ((bRam0000000004f5bc40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a38698,0);
    bRam0000000004f5bc40 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f5bc50 == (code *)0x0) {
      pcRam0000000004f5bc50 = (code *)FUN_021f03bc(&UNK_013e5856);
    }
                    /* WARNING: Could not recover jumptable at 0x03fc2c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f5bc50)(uVar3,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

