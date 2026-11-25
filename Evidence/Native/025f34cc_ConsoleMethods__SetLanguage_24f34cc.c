/* IL2CPP: ConsoleMethods$$SetLanguage
void ConsoleMethods__SetLanguage (System_String_o* languageName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetLanguage
   void ConsoleMethods__SetLanguage (System_String_o* languageName, const MethodInfo* method); */

void ConsoleMethods__SetLanguage_24f34cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd08 & 1) == 0) {
                    /* try { // try from 025f34ec to 026f35cf has its CatchHandler @ 025f34ec
                       catch() { ... } // from try @ 025f34ec with catch @ 025f34ec
                       catch() { ... } // from try @ 025f36a0 with catch @ 025f34ec
                       catch() { ... } // from try @ 025f36e8 with catch @ 025f34ec
                       catch() { ... } // from try @ 025f372c with catch @ 025f34ec
                       catch() { ... } // from try @ 025f3740 with catch @ 025f34ec
                       catch() { ... } // from try @ 025f37a0 with catch @ 025f34ec
                       catch() { ... } // from try @ 025f37d8 with catch @ 025f34ec */
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c82b8);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c82c0);
    FUN_021f03f8(PTR_DAT_049c82c8);
    FUN_021f03f8(PTR_DAT_049c82d0);
    bRam0000000004f4bd08 = 1;
  }
  puVar2 = PTR_DAT_049c82b8;
  uStack_24 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c58;
  uVar4 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                    (param_1,1,&uStack_24,*(undefined8 *)puVar2);
  uVar3 = uStack_24;
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 025f35d0 to 026f35db has its CatchHandler @ 025f374c */
    uVar5 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c82d0,param_1,*(undefined8 *)PTR_DAT_049c82c0,0);
                    /* try { // try from 025f35f0 to 026f35f7 has its CatchHandler @ 025f3740 */
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574(lVar6);
    }
    UnityEngine_Debug__LogWarning_3bcf90c(uVar5,0);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049c82c8;
    Localization__Set_252de14(uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar2,0);
  }
  return;
}

