/* IL2CPP: HomeSceneFxRunner.Flash$$.cctor
void HomeSceneFxRunner_Flash___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Flash$$.cctor
   void HomeSceneFxRunner_Flash___cctor (const MethodInfo* method); */

void HomeSceneFxRunner_Flash___cctor_2422ef0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_049c3230;
  puVar2 = PTR_DAT_049c3010;
  puVar1 = PTR_DAT_049be640;
  if ((bRam0000000004f4b782 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3010);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c3230);
    bRam0000000004f4b782 = 1;
  }
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,4);
  if (lVar5 != 0) {
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      *(undefined4 *)(lVar5 + 0x24) = 0x3f800000;
                    /* try { // try from 02522fbc to 02623043 has its CatchHandler @ 02522fbc
                       catch() { ... } // from try @ 02522fbc with catch @ 02522fbc
                       catch() { ... } // from try @ 0252316c with catch @ 02522fbc
                       catch() { ... } // from try @ 025231cc with catch @ 02522fbc
                       catch() { ... } // from try @ 0252323c with catch @ 02522fbc */
      plVar7 = (long *)(lVar6 + 8);
      *plVar7 = lVar5;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar7 >> 0xc & 0x3f),
                     ((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

