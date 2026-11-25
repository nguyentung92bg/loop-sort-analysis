/* IL2CPP: Localization$$Set
void Localization__Set (int32_t language, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Localization$$Set
   void Localization__Set (int32_t language, const MethodInfo* method); */

void Localization__Set_252de14(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  
  if ((bRam0000000004f4bee2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c9cc8);
    FUN_021f03f8(PTR_DAT_049c2ea8);
                    /* try { // try from 0262de64 to 0272df2b has its CatchHandler @ 0262de64
                       catch() { ... } // from try @ 0262de64 with catch @ 0262de64
                       catch() { ... } // from try @ 0262df98 with catch @ 0262de64
                       catch() { ... } // from try @ 0262dfb8 with catch @ 0262de64
                       catch() { ... } // from try @ 0262e03c with catch @ 0262de64
                       catch() { ... } // from try @ 0262e064 with catch @ 0262de64
                       catch() { ... } // from try @ 0262e088 with catch @ 0262de64 */
    FUN_021f03f8(PTR_DAT_049c9cd0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c5158);
    FUN_021f03f8(PTR_DAT_049c9cd8);
    FUN_021f03f8(PTR_DAT_049b50f8);
    bRam0000000004f4bee2 = 1;
  }
  puVar4 = PTR_DAT_049c2ea8;
  if (param_1 == 6) {
    param_1 = 0x28;
  }
  else if (param_1 == 0x2b) {
    param_1 = 10;
  }
  lVar8 = *(long *)PTR_DAT_049c2ea8;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar4;
  }
  puVar7 = PTR_DAT_049c9cd8;
  puVar6 = PTR_DAT_049c9cd0;
  puVar5 = PTR_DAT_049c5158;
  puVar3 = PTR_DAT_049b5310;
  puVar2 = PTR_DAT_049b50f8;
  puVar1 = PTR_DAT_049b3c58;
  if (**(long **)(lVar8 + 0xb8) != 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,param_1);
                    /* try { // try from 0262df2c to 0272df33 has its CatchHandler @ 0262e048 */
    uVar9 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (**(long **)(lVar8 + 0xb8),&uStack_68,*(undefined8 *)PTR_DAT_049c9cc8);
    lVar8 = *(long *)puVar3;
    if ((uVar9 & 1) == 0) {
      param_1 = 10;
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0262df4c to 0272df97 has its CatchHandler @ 0262e04c */
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,param_1);
    PlayerPrefsEnum___Il2CppFullySharedGenericStructType___Set_2910300
              (*(long *)(lVar8 + 0xb8) + 0x28,&uStack_68,*(undefined8 *)puVar6);
    uStack_68 = *(undefined8 *)puVar5;
    uStack_60 = 0xffffffffffffffff;
    iStack_58 = param_1;
    uVar10 = System_Enum__ToString_3135e00(&uStack_68,0);
                    /* try { // try from 0262df98 to 0272dfb3 has its CatchHandler @ 0262de64 */
    uVar10 = System_String__Concat_2f7d424(*(undefined8 *)puVar7,uVar10,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0262dfb4 to 0272dfb7 has its CatchHandler @ 0262e04c */
      FUN_021f0574(*(long *)puVar1);
    }
                    /* try { // try from 0262dfb8 to 0272e037 has its CatchHandler @ 0262de64 */
    UnityEngine_Debug__Log_3bd0be4(uVar10,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Localization__UpdateFallbackFont_252dff8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

