/* IL2CPP: ConsoleMethods$$CreateNicknamesSample
void ConsoleMethods__CreateNicknamesSample (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$CreateNicknamesSample
   void ConsoleMethods__CreateNicknamesSample (const MethodInfo* method); */

void ConsoleMethods__CreateNicknamesSample_24f4070(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
                    /* try { // try from 025f4088 to 026f408b has its CatchHandler @ 025f41b8 */
  if ((bRam0000000004f4bd11 & 1) == 0) {
                    /* try { // try from 025f4090 to 026f4097 has its CatchHandler @ 025f41c8 */
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8368);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
                    /* try { // try from 025f40c0 to 026f40cb has its CatchHandler @ 025f41b4 */
    FUN_021f03f8(PTR_DAT_049b4b60);
    bRam0000000004f4bd11 = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025f40ec to 026f40f7 has its CatchHandler @ 025f41d8 */
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
                    /* try { // try from 025f40fc to 026f4103 has its CatchHandler @ 025f41c0 */
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8368);
    puVar1 = PTR_DAT_049b4b60;
    if (lStack_28 != 0) {
                    /* try { // try from 025f4124 to 026f413f has its CatchHandler @ 025f41bc */
      lVar3 = NicknameGenerator__Generate_25501b8(lStack_28,100,0,0);
      plVar4 = (long *)thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 025f4140 to 026f4187 has its CatchHandler @ 025f3dc8 */
      System_Text_StringBuilder___ctor_2f8ab2c(plVar4,0);
      if (lVar3 != 0) {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar7 = 0;
          uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            if (plVar4 == (long *)0x0) goto LAB_025f41e4;
            System_Text_StringBuilder__AppendLine_2f8c724
                      (plVar4,*(undefined8 *)(lVar3 + 0x20 + uVar7 * 8),0);
            uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
                    /* try { // try from 025f4188 to 026f418b has its CatchHandler @ 025f4204 */
            uVar7 = uVar7 + 1;
                    /* try { // try from 025f418c to 026f418f has its CatchHandler @ 025f41f4 */
                    /* try { // try from 025f4190 to 026f4193 has its CatchHandler @ 025f41d4 */
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        puVar1 = PTR_DAT_049b3c58;
                    /* try { // try from 025f4194 to 026f419b has its CatchHandler @ 025f3dc8 */
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 025f419c to 026f41a3 has its CatchHandler @ 025f41e0 */
                    /* try { // try from 025f41a4 to 026f41a7 has its CatchHandler @ 025f41cc */
                    /* try { // try from 025f41a8 to 026f41ab has its CatchHandler @ 025f41dc */
                    /* try { // try from 025f41ac to 026f41af has its CatchHandler @ 025f41c4 */
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                    /* try { // try from 025f41b0 to 026f41b3 has its CatchHandler @ 025f41d8 */
                    /* catch() { ... } // from try @ 025f40c0 with catch @ 025f41b4
                       try { // try from 025f41b4 to 026f421f has its CatchHandler @ 025f3dc8 */
                    /* catch() { ... } // from try @ 025f4088 with catch @ 025f41b8 */
                    /* catch() { ... } // from try @ 025f4124 with catch @ 025f41bc */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025f40fc with catch @ 025f41c0 */
                    /* catch() { ... } // from try @ 025f41ac with catch @ 025f41c4 */
            FUN_021f0574(*(long *)puVar1);
          }
                    /* catch() { ... } // from try @ 025f4090 with catch @ 025f41c8 */
                    /* catch() { ... } // from try @ 025f41a4 with catch @ 025f41cc */
                    /* catch() { ... } // from try @ 025f3efc with catch @ 025f41d0 */
          UnityEngine_Debug__Log_3bd0be4(uVar5,0);
                    /* catch() { ... } // from try @ 025f4190 with catch @ 025f41d4 */
                    /* catch() { ... } // from try @ 025f40ec with catch @ 025f41d8
                       catch() { ... } // from try @ 025f41b0 with catch @ 025f41d8 */
                    /* catch() { ... } // from try @ 025f4068 with catch @ 025f41dc
                       catch() { ... } // from try @ 025f41a8 with catch @ 025f41dc */
                    /* catch() { ... } // from try @ 025f404c with catch @ 025f41e0
                       catch() { ... } // from try @ 025f419c with catch @ 025f41e0 */
          return;
        }
      }
    }
  }
LAB_025f41e4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

