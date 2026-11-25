/* IL2CPP: Block$$OnReturn
void Block__OnReturn (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$OnReturn
   void Block__OnReturn (Block_o* __this, const MethodInfo* method); */

void Block__OnReturn_23dc32c(long param_1)

{
  undefined *puVar1;
  
  if ((bRam0000000004f4b5b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1398);
    bRam0000000004f4b5b8 = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
  *(undefined8 *)(param_1 + 0x150) = 0;
  thunk_FUN_021f190c(param_1 + 0x150,0);
  *(undefined8 *)(param_1 + 0x110) = 0;
  thunk_FUN_021f190c(param_1 + 0x110,0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  thunk_FUN_021f190c(param_1 + 0x118,0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  puVar1 = PTR_DAT_049c1398;
  if (*(long *)(param_1 + 0x160) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
              (*(long *)(param_1 + 0x160),*(undefined8 *)PTR_DAT_049c1398);
    if (*(long *)(param_1 + 0x168) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                (*(long *)(param_1 + 0x168),*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0x100) = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << (param_1 + 0x100U >> 0xc & 0x3f),
                     (param_1 + 0x100U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

