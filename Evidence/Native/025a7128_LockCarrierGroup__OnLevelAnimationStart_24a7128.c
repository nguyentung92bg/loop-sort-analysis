/* IL2CPP: LockCarrierGroup$$OnLevelAnimationStart
void LockCarrierGroup__OnLevelAnimationStart (LockCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroup$$OnLevelAnimationStart
   void LockCarrierGroup__OnLevelAnimationStart (LockCarrierGroup_o* __this, const MethodInfo*
   method); */

void LockCarrierGroup__OnLevelAnimationStart_24a7128(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa0);
                    /* try { // try from 025a713c to 026a7163 has its CatchHandler @ 025a72c0 */
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  if (lVar4 != 0) {
    puVar1 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc(*puVar1,puVar1[1],puVar1[2],lVar4,0);
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_025a7224;
                    /* try { // try from 025a71a0 to 026a71cb has its CatchHandler @ 025a72bc */
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                (0x42c80000,*(long *)(param_1 + 0xb8),iVar3,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 7);
    if (*(long *)(param_1 + 0xc0) != 0) {
      UnityEngine_SkinnedMeshRenderer__SetBlendShapeWeight_3befd5c
                (0x42c80000,*(long *)(param_1 + 0xc0),0,0);
                    /* try { // try from 025a71cc to 026a71d3 has its CatchHandler @ 025a72b0 */
                    /* try { // try from 025a71d4 to 026a7257 has its CatchHandler @ 025a7014 */
      lVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a233 = '\x01';
      }
      if (lVar4 != 0) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar4 != 0) {
          lVar2 = *(long *)(lVar4 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_025a7224:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

