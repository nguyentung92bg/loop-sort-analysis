/* IL2CPP: HomeSceneMover$$SetPath
void HomeSceneMover__SetPath (HomeSceneMover_o* __this, HomeScenePathKey_array* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMover$$SetPath
   void HomeSceneMover__SetPath (HomeSceneMover_o* __this, HomeScenePathKey_array* path, const
   MethodInfo* method); */

void HomeSceneMover__SetPath_242599c(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float fVar9;
  
  if ((bRam0000000004f4b795 & 1) == 0) {
                    /* try { // try from 025259b8 to 026259bb has its CatchHandler @ 02525ab4 */
                    /* try { // try from 025259bc to 026259bf has its CatchHandler @ 025256ec */
                    /* try { // try from 025259c0 to 026259c3 has its CatchHandler @ 02525a64 */
    FUN_021f03f8(PTR_DAT_049be640);
                    /* try { // try from 025259c4 to 026259c7 has its CatchHandler @ 02525a68 */
                    /* try { // try from 025259c8 to 026259cb has its CatchHandler @ 02525a70 */
    bRam0000000004f4b795 = 1;
  }
                    /* try { // try from 025259cc to 026259cf has its CatchHandler @ 02525a6c */
                    /* try { // try from 025259d0 to 026259d3 has its CatchHandler @ 02525a5c */
                    /* try { // try from 025259d4 to 026259d7 has its CatchHandler @ 02525a54 */
  *(long *)(param_1 + 0x90) = param_2;
                    /* try { // try from 025259d8 to 026259df has its CatchHandler @ 02525ab4 */
  thunk_FUN_021f190c((long *)(param_1 + 0x90),param_2);
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 025259ec to 026259ef has its CatchHandler @ 02525a3c */
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x18) != 0) {
      if (param_2 == 0) goto LAB_02525ac8;
                    /* try { // try from 025259f8 to 02625a2f has its CatchHandler @ 02525a38 */
      if (1 < *(int *)(param_2 + 0x18)) {
        uVar2 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049be640);
        *(undefined8 *)(param_1 + 0x98) = uVar2;
        thunk_FUN_021f190c();
        uVar5 = *(ulong *)(param_2 + 0x18);
        if (1 < (int)uVar5) {
          lVar4 = *(long *)(param_1 + 0x98);
                    /* try { // try from 02525a30 to 02625a33 has its CatchHandler @ 02525a40 */
                    /* try { // try from 02525a34 to 02625a37 has its CatchHandler @ 02525a3c */
          cVar1 = *(char *)(param_1 + 0x68);
                    /* catch() { ... } // from try @ 025259f8 with catch @ 02525a38
                       try { // try from 02525a38 to 02625a8f has its CatchHandler @ 025256ec */
          uVar3 = 0;
                    /* catch() { ... } // from try @ 025258dc with catch @ 02525a3c
                       catch() { ... } // from try @ 025259ec with catch @ 02525a3c
                       catch() { ... } // from try @ 02525a34 with catch @ 02525a3c */
                    /* catch() { ... } // from try @ 025258e8 with catch @ 02525a40
                       catch() { ... } // from try @ 02525a30 with catch @ 02525a40 */
          pfVar7 = (float *)(param_2 + 0x40);
                    /* catch() { ... } // from try @ 025258b0 with catch @ 02525a44 */
          pfVar6 = (float *)(lVar4 + 0x24);
          do {
                    /* catch() { ... } // from try @ 025258a8 with catch @ 02525a48 */
                    /* catch() { ... } // from try @ 02525898 with catch @ 02525a4c */
                    /* catch() { ... } // from try @ 02525874 with catch @ 02525a50 */
                    /* catch() { ... } // from try @ 025259d4 with catch @ 02525a54 */
                    /* catch() { ... } // from try @ 02525858 with catch @ 02525a58 */
                    /* catch() { ... } // from try @ 025259d0 with catch @ 02525a5c */
                    /* catch() { ... } // from try @ 0252578c with catch @ 02525a60 */
            fVar9 = (*pfVar7 - pfVar7[-7]) * pfVar7[-3];
                    /* catch() { ... } // from try @ 025257b8 with catch @ 02525a64
                       catch() { ... } // from try @ 025259c0 with catch @ 02525a64 */
            if (cVar1 != '\0') {
              fVar9 = -((*pfVar7 - pfVar7[-7]) * pfVar7[-3]);
            }
                    /* catch() { ... } // from try @ 025257c8 with catch @ 02525a68
                       catch() { ... } // from try @ 025259c4 with catch @ 02525a68 */
            if (lVar4 == 0) goto LAB_02525ac8;
                    /* catch() { ... } // from try @ 0252583c with catch @ 02525a6c
                       catch() { ... } // from try @ 025259cc with catch @ 02525a6c */
                    /* catch() { ... } // from try @ 02525824 with catch @ 02525a70
                       catch() { ... } // from try @ 025259c8 with catch @ 02525a70 */
            if ((*(uint *)(lVar4 + 0x18) <= uVar3) || ((ulong)*(uint *)(lVar4 + 0x18) <= uVar3 + 1))
            {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar3 = uVar3 + 1;
            pfVar7 = pfVar7 + 7;
                    /* try { // try from 02525a90 to 02625a93 has its CatchHandler @ 02525aa0 */
            *pfVar6 = fVar9 + pfVar6[-1];
            pfVar6 = pfVar6 + 1;
          } while ((uVar5 & 0xffffffff) - 1 != uVar3);
        }
                    /* catch() { ... } // from try @ 02525a90 with catch @ 02525aa0 */
                    /* try { // try from 02525aa8 to 02625aaf has its CatchHandler @ 02525af4 */
        return;
      }
    }
    puVar8 = (undefined8 *)(param_1 + 0x98);
    *puVar8 = 0;
                    /* try { // try from 02525ab0 to 02625ad3 has its CatchHandler @ 025256ec */
                    /* catch() { ... } // from try @ 0252594c with catch @ 02525ab4
                       catch() { ... } // from try @ 025259b8 with catch @ 02525ab4
                       catch() { ... } // from try @ 025259d8 with catch @ 02525ab4 */
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                   ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
LAB_02525ac8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

