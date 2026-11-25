/* IL2CPP: SandPileField$$SetSlice
void SandPileField__SetSlice (SandPileField_o* __this, int32_t slice, Unity_Collections_NativeArray_float__o mass, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$SetSlice
   void SandPileField__SetSlice (SandPileField_o* __this, int32_t slice,
   Unity_Collections_NativeArray_float__o mass, const MethodInfo* method); */

void SandPileField__SetSlice_24d4290
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 025d4290 to 026d42a7 has its CatchHandler @ 025d4308 */
                    /* try { // try from 025d42b8 to 026d42bf has its CatchHandler @ 025d4304 */
  uStack_40 = param_3;
  uStack_38 = param_4;
  if ((bRam0000000004f4bc2f & 1) == 0) {
                    /* try { // try from 025d42c0 to 026d4327 has its CatchHandler @ 025d41ac */
    FUN_021f03f8(PTR_DAT_049c76b8);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bc2f = 1;
  }
  puVar4 = PTR_DAT_049c76b8;
  if ((*(long *)(param_1 + 0x30) == 0) || (*(int *)(param_1 + 0x38) != (int)param_4)) {
                    /* try { // try from 025d43d4 to 026d43df has its CatchHandler @ 025d4474 */
    return;
  }
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18) - 1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4278 with catch @ 025d4300
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4280 with catch @ 025d4304
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025d42b8 with catch @ 025d4304
                        */
    uVar1 = param_2;
    if ((int)uVar3 <= (int)param_2) {
      uVar1 = uVar3;
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4290 with catch @ 025d4308
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4238 with catch @ 025d430c
                        */
    uVar3 = 0;
    if (-1 < (int)param_2) {
      uVar3 = uVar1;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_025d43d8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
                    /* try { // try from 025d4328 to 026d432b has its CatchHandler @ 025d4334 */
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___CopyTo_28f4a74
              (&uStack_40,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
               *(undefined8 *)PTR_DAT_049c76b8);
                    /* catch() { ... } // from try @ 025d4328 with catch @ 025d4334 */
    lVar5 = *(long *)(param_1 + 0x40);
                    /* try { // try from 025d4338 to 026d433f has its CatchHandler @ 025d4348 */
    if (lVar5 != 0) {
                    /* try { // try from 025d4340 to 026d434b has its CatchHandler @ 025d41ac */
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_025d43d8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d4338 with catch @ 025d4348
                        */
                    /* try { // try from 025d434c to 026d43d3 has its CatchHandler @ 025d434c
                       catch() { ... } // from try @ 025d434c with catch @ 025d434c
                       catch() { ... } // from try @ 025d4428 with catch @ 025d434c
                       catch() { ... } // from try @ 025d44b0 with catch @ 025d434c */
      Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___CopyTo_28f4a74
                (lVar5 + 0x20,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)puVar4);
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        uVar3 = *(uint *)(lVar5 + 0x18);
        uVar1 = uVar3;
        if ((int)uVar3 < 2) {
          uVar1 = 1;
        }
        uVar2 = uVar3;
        if (uVar3 < 2) {
          uVar2 = 1;
        }
        if (1 < (int)uVar3) {
          uVar6 = 1;
          do {
            if (uVar6 == uVar2) goto LAB_025d43d8;
            uVar7 = (ulong)*(uint *)(param_1 + 0x38);
            if (0 < (int)*(uint *)(param_1 + 0x38)) {
              pfVar8 = *(float **)(lVar5 + uVar6 * 0x10 + 0x20);
              pfVar9 = *(float **)(param_1 + 0x30);
              do {
                uVar7 = uVar7 - 1;
                *pfVar9 = *pfVar9 + *pfVar8;
                pfVar8 = pfVar8 + 1;
                pfVar9 = pfVar9 + 1;
              } while (uVar7 != 0);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar1);
        }
        *(undefined1 *)(param_1 + 200) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

