/* IL2CPP: ConsoleListener$$OnLogReceived
void ConsoleListener__OnLogReceived (System_String_o* message, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleListener$$OnLogReceived
   void ConsoleListener__OnLogReceived (System_String_o* message, System_String_o* stackTrace,
   int32_t type, const MethodInfo* method); */

void ConsoleListener__OnLogReceived_24f22d0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uStack_34;
  
                    /* try { // try from 025f22d8 to 026f22e7 has its CatchHandler @ 025f22e8 */
                    /* catch() { ... } // from try @ 025f2260 with catch @ 025f22e8
                       catch() { ... } // from try @ 025f22d8 with catch @ 025f22e8 */
                    /* try { // try from 025f22ec to 026f22ef has its CatchHandler @ 025f22f8 */
                    /* try { // try from 025f22f0 to 026f22fb has its CatchHandler @ 025f1c28 */
  if ((bRam0000000004f4bcf8 & 1) == 0) {
                    /* catch() { ... } // from try @ 025f22ec with catch @ 025f22f8 */
    FUN_021f03f8(PTR_DAT_049c52a0);
    FUN_021f03f8(PTR_DAT_049c81e8);
    FUN_021f03f8(PTR_DAT_049c81f0);
    FUN_021f03f8(PTR_DAT_049c81f8);
    FUN_021f03f8(PTR_DAT_049c1230);
    FUN_021f03f8(PTR_DAT_049c8200);
    bRam0000000004f4bcf8 = 1;
  }
  puVar2 = PTR_DAT_049c52a0;
  if ((param_3 | 4) != 4) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_049c52a0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  lVar6 = **(long **)(lVar4 + 0xb8);
  if (lVar6 != 0) {
    if (2 < *(int *)(lVar6 + 0x18)) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar6 == 0) goto LAB_025f2440;
      }
      System_Collections_Generic_LinkedList___Il2CppFullySharedGenericType___RemoveFirst_28c8e04
                (lVar6,*(undefined8 *)PTR_DAT_049c81f0);
      lVar4 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_049c8200;
    puVar1 = PTR_DAT_049c1230;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    uStack_34 = param_3;
    uVar5 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_34);
    uVar5 = System_String__Format_2f7dff0(*(undefined8 *)puVar3,uVar5,param_1,param_2,0);
    if (lVar4 != 0) {
      System_Collections_Generic_LinkedList___Il2CppFullySharedGenericType___AddLast_28c82e8
                (lVar4,uVar5,*(undefined8 *)PTR_DAT_049c81e8);
      return;
    }
  }
LAB_025f2440:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

