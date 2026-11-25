/* IL2CPP: HomeSceneMover$$get_IsActive
bool HomeSceneMover__get_IsActive (HomeSceneMover_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMover$$get_IsActive
   bool HomeSceneMover__get_IsActive (HomeSceneMover_o* __this, const MethodInfo* method); */

void HomeSceneMover__get_IsActive_24244a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x18),0), lVar1 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f581f9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a251b8,0);
    bRam0000000004f581f9 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f582d0 == (code *)0x0) {
      pcRam0000000004f582d0 = (code *)FUN_021f03bc(&UNK_013d8d2f);
    }
                    /* WARNING: Could not recover jumptable at 0x03d1cf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f582d0)(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

