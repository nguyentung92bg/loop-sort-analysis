/* IL2CPP: Extensions$$ToLocalizedDesc
System_String_o* Extensions__ToLocalizedDesc (int32_t booster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToLocalizedDesc
   System_String_o* Extensions__ToLocalizedDesc (int32_t booster, const MethodInfo* method); */

void Extensions__ToLocalizedDesc_24e60d4(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_049c7bb0;
  if ((bRam0000000004f4bc89 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7bb0);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c5ed0);
    FUN_021f03f8(PTR_DAT_049c7bb8);
    bRam0000000004f4bc89 = 1;
  }
  uStack_38 = *(undefined8 *)puVar1;
  uStack_30 = 0xffffffffffffffff;
  uStack_28 = param_1;
  lVar4 = System_Enum__ToString_3135e00(&uStack_38,0);
  puVar3 = PTR_DAT_049c7bb8;
  puVar2 = PTR_DAT_049c5ed0;
  puVar1 = PTR_DAT_049c2ea8;
  if (lVar4 != 0) {
    uVar5 = System_String__ToLowerInvariant_2f81e54(lVar4,0);
    uVar5 = System_String__Concat_2f7d424(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,0);
                    /* try { // try from 025e618c to 026e62f3 has its CatchHandler @ 025e618c
                       catch() { ... } // from try @ 025e618c with catch @ 025e618c
                       catch() { ... } // from try @ 025e63c0 with catch @ 025e618c
                       catch() { ... } // from try @ 025e64f8 with catch @ 025e618c
                       catch() { ... } // from try @ 025e653c with catch @ 025e618c
                       catch() { ... } // from try @ 025e6588 with catch @ 025e618c
                       catch() { ... } // from try @ 025e65a4 with catch @ 025e618c
                       catch() { ... } // from try @ 025e6624 with catch @ 025e618c
                       catch() { ... } // from try @ 025e6664 with catch @ 025e618c
                       catch() { ... } // from try @ 025e6690 with catch @ 025e618c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Localization__Get_252dbe0(uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

