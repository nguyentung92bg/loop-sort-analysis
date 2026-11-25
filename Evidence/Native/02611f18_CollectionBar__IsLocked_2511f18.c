/* IL2CPP: CollectionBar$$IsLocked
bool CollectionBar__IsLocked (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$IsLocked
   bool CollectionBar__IsLocked (CollectionBar_o* __this, const MethodInfo* method); */

uint CollectionBar__IsLocked_2511f18(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0xb,0);
    return (uVar1 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

