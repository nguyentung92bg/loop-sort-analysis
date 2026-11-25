/* IL2CPP: ConsoleListener$$OnInitialize
void ConsoleListener__OnInitialize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleListener$$OnInitialize
   void ConsoleListener__OnInitialize (const MethodInfo* method); */

void ConsoleListener__OnInitialize_24f2230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_049c81e0;
  puVar2 = PTR_DAT_049c0828;
                    /* catch() { ... } // from try @ 025f1e68 with catch @ 025f2230 */
  puVar1 = PTR_DAT_049b3bf8;
                    /* catch() { ... } // from try @ 025f1d0c with catch @ 025f2234
                       catch() { ... } // from try @ 025f219c with catch @ 025f2234 */
                    /* catch() { ... } // from try @ 025f1efc with catch @ 025f2238 */
                    /* catch() { ... } // from try @ 025f2098 with catch @ 025f223c
                       catch() { ... } // from try @ 025f2198 with catch @ 025f223c */
                    /* catch() { ... } // from try @ 025f2078 with catch @ 025f2240
                       catch() { ... } // from try @ 025f2194 with catch @ 025f2240 */
                    /* catch() { ... } // from try @ 025f1d50 with catch @ 025f2244
                       catch() { ... } // from try @ 025f21b0 with catch @ 025f2244 */
                    /* catch() { ... } // from try @ 025f1cd8 with catch @ 025f2248 */
  if ((bRam0000000004f4bcf7 & 1) == 0) {
                    /* try { // try from 025f2260 to 026f2277 has its CatchHandler @ 025f22e8 */
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c81e0);
                    /* try { // try from 025f2278 to 026f22d7 has its CatchHandler @ 025f1c28 */
    FUN_021f03f8(PTR_DAT_049c0828);
    bRam0000000004f4bcf7 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Application_LogCallback___ctor_3bc9c54(uVar4,0,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f5674c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8,0);
    FUN_021f03f8(PTR_DAT_049c0828);
    bRam0000000004f5674c = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  plVar6 = (long *)System_Delegate__Combine_3145640
                             (*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),uVar4,0);
  if (plVar6 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_049c0828;
    if (*plVar6 == lVar5) {
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = (long)plVar6;
      if (*plVar6 == lVar5) goto LAB_03cc85c8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(plVar6);
  }
  plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *plVar7 = 0;
LAB_03cc85c8:
  thunk_FUN_021f190c(plVar7,plVar6);
  if (pcRam0000000004f56708 == (code *)0x0) {
    pcRam0000000004f56708 = (code *)FUN_021f03bc(&UNK_013e44a7);
  }
                    /* WARNING: Could not recover jumptable at 0x03cc85fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f56708)(1);
  return;
}

