/* IL2CPP: SandJellyRenderer$$Grid
System_Single_array* SandJellyRenderer__Grid (bool fine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$Grid
   System_Single_array* SandJellyRenderer__Grid (bool fine, const MethodInfo* method); */

void SandJellyRenderer__Grid_24d32d0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  float fStack_54;
  
  puVar2 = PTR_DAT_049bea48;
  puVar1 = PTR_DAT_049bea40;
  if ((bRam0000000004f4bc25 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7600);
    FUN_021f03f8(PTR_DAT_049bea50);
    FUN_021f03f8(PTR_DAT_049bea60);
    FUN_021f03f8(PTR_DAT_049bea48);
    FUN_021f03f8(PTR_DAT_049bea40);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c7608);
    bRam0000000004f4bc25 = 1;
  }
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar2);
  puVar5 = PTR_DAT_049c7608;
  puVar4 = PTR_DAT_049c7600;
  puVar3 = PTR_DAT_049bea60;
  puVar2 = PTR_DAT_049bea50;
  puVar1 = PTR_DAT_049be640;
  if (lVar6 != 0) {
    fStack_54 = -1.0;
    FUN_02333498(lVar6,&fStack_54,*(undefined8 *)PTR_DAT_049bea50);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d32a8 with catch @ 025d33c4
                        */
    fStack_54 = -0.875;
    FUN_02333498(lVar6,&fStack_54,*(undefined8 *)puVar2);
                    /* try { // try from 025d33e0 to 026d33e3 has its CatchHandler @ 025d33ec */
    fStack_54 = -0.75;
    FUN_02333498(lVar6,&fStack_54,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 025d33e0 with catch @ 025d33ec */
                    /* try { // try from 025d33f0 to 026d33f7 has its CatchHandler @ 025d3400 */
                    /* try { // try from 025d33f8 to 026d3403 has its CatchHandler @ 025d31f8 */
    fStack_54 = -0.625;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d33f0 with catch @ 025d3400
                        */
    FUN_02333498(lVar6,&fStack_54,*(undefined8 *)puVar2);
    fStack_54 = -0.5;
    FUN_02333498(lVar6,&fStack_54,*(undefined8 *)puVar2);
    if ((param_1 & 1) != 0) {
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        fStack_54 = (float)(int)uVar8 / 12.0 + -0.5;
        FUN_02333498(lVar6,&fStack_54,*(undefined8 *)puVar2);
      } while (uVar8 < 0xb);
    }
    uVar7 = FUN_021f04e4(*(undefined8 *)puVar1,5);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
              (uVar7,*(undefined8 *)puVar5,0);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (lVar6,uVar7,*(undefined8 *)puVar4);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___ToArray_28d0b00
              (lVar6,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

