/* IL2CPP: CollectionBar$$CanSkipHomeAction
bool CollectionBar__CanSkipHomeAction (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$CanSkipHomeAction
   bool CollectionBar__CanSkipHomeAction (CollectionBar_o* __this, const MethodInfo* method); */

bool CollectionBar__CanSkipHomeAction_2511eb0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000004f4bdf6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cd8);
    bRam0000000004f4bdf6 = 1;
  }
  uVar2 = CollectionBar__IsLocked_2511f18(param_1);
  if ((uVar2 & 1) == 0) {
    lVar3 = CollectionBar__GetClaimableProgresses_2511f44(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar1 = *(int *)(lVar3 + 0x18) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

