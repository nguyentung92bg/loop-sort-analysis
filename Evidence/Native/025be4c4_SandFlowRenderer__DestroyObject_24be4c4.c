/* IL2CPP: SandFlowRenderer$$DestroyObject
void SandFlowRenderer__DestroyObject (UnityEngine_Object_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$DestroyObject
   void SandFlowRenderer__DestroyObject (UnityEngine_Object_o* target, const MethodInfo* method); */

void SandFlowRenderer__DestroyObject_24be4c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  puVar2 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4bbc0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbc0 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Application__get_isPlaying_3bc708c(0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049b3b98;
    uVar4 = 0;
    if ((bRam0000000004f584c3 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,0);
      bRam0000000004f584c3 = 1;
      uVar4 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
      uVar4 = extraout_x1_00;
    }
    puVar2 = PTR_DAT_04a258d0;
    if ((bRam0000000004f584c2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a258d0,uVar4);
      FUN_021f03f8(PTR_DAT_049b3b98);
      bRam0000000004f584c2 = 1;
    }
    if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
      FUN_02229774();
    }
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (pcRam0000000004f58540 == (code *)0x0) {
      pcRam0000000004f58540 = (code *)FUN_021f03bc(&UNK_013bf2e5);
    }
                    /* WARNING: Could not recover jumptable at 0x03d24330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58540)(0,uVar4);
    return;
  }
                    /* try { // try from 025be550 to 026be7ab has its CatchHandler @ 025be550
                       catch() { ... } // from try @ 025be550 with catch @ 025be550
                       catch() { ... } // from try @ 025be850 with catch @ 025be550
                       catch() { ... } // from try @ 025be9dc with catch @ 025be550
                       catch() { ... } // from try @ 025beaa8 with catch @ 025be550
                       catch() { ... } // from try @ 025beb8c with catch @ 025be550
                       catch() { ... } // from try @ 025beba4 with catch @ 025be550
                       catch() { ... } // from try @ 025bebd4 with catch @ 025be550
                       catch() { ... } // from try @ 025bec04 with catch @ 025be550 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f584c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f584c5 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_04a258d0;
  if ((bRam0000000004f584c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a258d0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f584c4 = 1;
  }
  if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
    FUN_02229774();
  }
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (pcRam0000000004f58548 == (code *)0x0) {
    pcRam0000000004f58548 = (code *)FUN_021f03bc(&UNK_013b7993);
  }
                    /* WARNING: Could not recover jumptable at 0x03d24484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004f58548)(uVar4,0);
  return;
}

