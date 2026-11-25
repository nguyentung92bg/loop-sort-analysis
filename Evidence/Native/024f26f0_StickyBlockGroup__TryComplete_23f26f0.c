/* IL2CPP: StickyBlockGroup$$TryComplete
void StickyBlockGroup__TryComplete (StickyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StickyBlockGroup$$TryComplete
   void StickyBlockGroup__TryComplete (StickyBlockGroup_o* __this, const MethodInfo* method); */

void StickyBlockGroup__TryComplete_23f26f0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f4b647 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c20f0);
    bRam0000000004f4b647 = 1;
  }
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
                    /* try { // try from 024f2744 to 025f2747 has its CatchHandler @ 024f2ac4 */
  uVar3 = FUN_024f7208(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),0);
                    /* try { // try from 024f2748 to 025f2757 has its CatchHandler @ 024f2af0 */
  if ((uVar3 & 1) != 0) {
    FUN_024f73c0(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),1,0);
  }
  lVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (lVar4 != 0) {
                    /* try { // try from 024f2770 to 025f278b has its CatchHandler @ 024f2ba8 */
    UnityEngine_Transform__set_localEulerAngles_3c2d9c0
              (*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
               *(undefined4 *)(param_1 + 0xcc),lVar4,0);
    puVar2 = PTR_DAT_049c20f0;
    lVar4 = *(long *)(param_1 + 0xa0);
    if (*(int *)(*(long *)PTR_DAT_049c20f0 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 024f279c to 025f27cf has its CatchHandler @ 024f2bc0 */
    if (lVar4 != 0) {
      uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
      if ((bRam0000000004f55a73 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251f8,uVar1,0);
        bRam0000000004f55a73 = 1;
      }
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
        }
        if (pcRam0000000004f55e50 == (code *)0x0) {
          pcRam0000000004f55e50 = (code *)FUN_021f03bc(&UNK_013cae0f);
        }
                    /* WARNING: Could not recover jumptable at 0x03cae3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f55e50)(lVar5,uVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

