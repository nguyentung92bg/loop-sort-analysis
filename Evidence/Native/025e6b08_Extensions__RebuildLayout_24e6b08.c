/* IL2CPP: Extensions$$RebuildLayout
void Extensions__RebuildLayout (UnityEngine_UI_LayoutGroup_o* layoutGroup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$RebuildLayout
   void Extensions__RebuildLayout (UnityEngine_UI_LayoutGroup_o* layoutGroup, const MethodInfo*
   method); */

void Extensions__RebuildLayout_24e6b08(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 025e6b08 to 026e6b53 has its CatchHandler @ 025e6be0 */
  if ((bRam0000000004f4bc90 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049befe0);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4bc90 = 1;
  }
  puVar1 = PTR_DAT_049befe0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e6bc8 to 026e6bcb has its CatchHandler @ 025e6bd0 */
    FUN_021f06a0();
  }
                    /* try { // try from 025e6b54 to 026e6b73 has its CatchHandler @ 025e6970 */
  UnityEngine_Behaviour__set_enabled_3c17eec(param_1,1,0);
  plVar2 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
                    /* try { // try from 025e6b74 to 026e6b77 has its CatchHandler @ 025e6bcc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 025e6b88 to 026e6b8f has its CatchHandler @ 025e6bd8 */
                    /* try { // try from 025e6b90 to 026e6bc3 has its CatchHandler @ 025e6970 */
    if (*plVar2 != *(long *)PTR_DAT_049bc0c8) {
      plVar2 = (long *)0x0;
    }
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_3ed78b8(plVar2,0);
                    /* try { // try from 025e6bc4 to 026e6bc7 has its CatchHandler @ 025e6bd4 */
  if ((bRam0000000004f5817b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a266d8,0,0);
    bRam0000000004f5817b = 1;
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
    }
    if (pcRam0000000004f58188 == (code *)0x0) {
      pcRam0000000004f58188 = (code *)FUN_021f03bc(&UNK_013d0ea3);
    }
                    /* WARNING: Could not recover jumptable at 0x03d17f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f58188)(lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

