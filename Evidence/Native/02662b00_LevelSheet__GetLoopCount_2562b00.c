/* IL2CPP: LevelSheet$$GetLoopCount
int32_t LevelSheet__GetLoopCount (LevelSheet_o* __this, int32_t maxLevelOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelSheet$$GetLoopCount
   int32_t LevelSheet__GetLoopCount (LevelSheet_o* __this, int32_t maxLevelOffset, const MethodInfo*
   method); */

int LevelSheet__GetLoopCount_2562b00(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c137 & 1) == 0) {
                    /* try { // try from 02662b28 to 02762b33 has its CatchHandler @ 02662c60 */
    FUN_021f03f8(PTR_DAT_049cba70);
    FUN_021f03f8(PTR_DAT_049cba78);
    bRam0000000004f4c137 = 1;
  }
                    /* try { // try from 02662b44 to 02762b47 has its CatchHandler @ 02662c5c */
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
                    /* try { // try from 02662b58 to 02762b5b has its CatchHandler @ 02662c60 */
  iVar3 = CloudPrefsInt__get_Value_24e99c0(&uStack_50,0);
  puVar2 = PTR_DAT_049cba78;
                    /* try { // try from 02662b5c to 02762b63 has its CatchHandler @ 02662c48 */
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
                    /* try { // try from 02662b68 to 02762b73 has its CatchHandler @ 02662c4c */
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02662b78 to 02762b83 has its CatchHandler @ 02662c50 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049cba78) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02662bbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 02662ba0 to 02762baf has its CatchHandler @ 02662c44 */
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049cba78,0);
LAB_02662bbc:
                    /* try { // try from 02662bbc to 02762bc3 has its CatchHandler @ 02662c40 */
    iVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if (iVar3 < iVar4) {
      return 1;
    }
                    /* try { // try from 02662bdc to 02762bdf has its CatchHandler @ 02662c38 */
    if (param_2 < 1) {
                    /* try { // try from 02662c28 to 02762c2b has its CatchHandler @ 02662c54 */
      param_2 = 0;
                    /* try { // try from 02662c2c to 02762c2f has its CatchHandler @ 02662c3c */
    }
    else {
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 == (long *)0x0) goto LAB_02662d38;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
                    /* try { // try from 02662bf8 to 02762bfb has its CatchHandler @ 02662c34 */
                    /* try { // try from 02662bfc to 02762c23 has its CatchHandler @ 02662a8c */
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    /* try { // try from 02662c30 to 02762c33 has its CatchHandler @ 02662c34 */
                    /* catch() { ... } // from try @ 02662bf8 with catch @ 02662c34
                       catch() { ... } // from try @ 02662c30 with catch @ 02662c34
                       try { // try from 02662c34 to 02762c77 has its CatchHandler @ 02662a8c */
                    /* catch() { ... } // from try @ 02662bdc with catch @ 02662c38 */
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02662c3c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar2,0);
                    /* try { // try from 02662c24 to 02762c27 has its CatchHandler @ 02662c58 */
LAB_02662c3c:
                    /* catch() { ... } // from try @ 02662c2c with catch @ 02662c3c */
                    /* catch() { ... } // from try @ 02662bbc with catch @ 02662c40 */
                    /* catch() { ... } // from try @ 02662ba0 with catch @ 02662c44 */
      iVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                    /* catch() { ... } // from try @ 02662b5c with catch @ 02662c48 */
                    /* catch() { ... } // from try @ 02662b68 with catch @ 02662c4c */
      if (iVar4 <= param_2) {
        param_2 = 0;
      }
    }
                    /* catch() { ... } // from try @ 02662b78 with catch @ 02662c50 */
    plVar10 = *(long **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 02662c28 with catch @ 02662c54 */
    if (plVar10 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02662c24 with catch @ 02662c58 */
      lVar7 = *plVar10;
                    /* catch() { ... } // from try @ 02662b44 with catch @ 02662c5c */
                    /* catch() { ... } // from try @ 02662b28 with catch @ 02662c60
                       catch() { ... } // from try @ 02662b58 with catch @ 02662c60 */
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 02662c78 to 02762c8f has its CatchHandler @ 02662cf0 */
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02662ca4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
                    /* try { // try from 02662c90 to 02762cdf has its CatchHandler @ 02662a8c */
      puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar2,0);
LAB_02662ca4:
      iVar4 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    /* catch() { ... } // from try @ 02662cf4 with catch @ 02662d00 */
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02662d08;
            }
                    /* try { // try from 02662ce0 to 02762cef has its CatchHandler @ 02662cf0 */
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* catch() { ... } // from try @ 02662c78 with catch @ 02662cf0
                       catch() { ... } // from try @ 02662ce0 with catch @ 02662cf0 */
                    /* try { // try from 02662cf4 to 02762cf7 has its CatchHandler @ 02662d00 */
        puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar2,0);
                    /* try { // try from 02662cf8 to 02762d03 has its CatchHandler @ 02662a8c */
LAB_02662d08:
        iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        iVar1 = 0;
        if (iVar5 - param_2 != 0) {
          iVar1 = (iVar3 - iVar4) / (iVar5 - param_2);
        }
        return iVar1 + 2;
      }
    }
  }
LAB_02662d38:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

