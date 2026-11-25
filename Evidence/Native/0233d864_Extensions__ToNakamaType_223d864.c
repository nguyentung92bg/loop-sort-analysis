/* IL2CPP: Extensions$$ToNakamaType
int32_t Extensions__ToNakamaType (int32_t authType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToNakamaType
   int32_t Extensions__ToNakamaType (int32_t authType, const MethodInfo* method); */

undefined4 Extensions__ToNakamaType_223d864(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uStack_14;
  
  if ((param_1 < 7) && ((0x7dU >> (ulong)(param_1 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&UNK_013aa9a4 + (ulong)param_1 * 4);
  }
  uStack_14 = param_1;
  uVar1 = thunk_FUN_02256840(PTR_DAT_049b4ff8);
  uVar1 = thunk_FUN_0222c66c(uVar1,&uStack_14);
  thunk_FUN_02256840(PTR_DAT_049b5000);
  uVar2 = thunk_FUN_0222ca34();
  uVar3 = thunk_FUN_02256840(PTR_DAT_049b5008);
                    /* try { // try from 0233d8e0 to 0243d8eb has its CatchHandler @ 0233d91c */
  System_ArgumentOutOfRangeException___ctor_306a2d0(uVar2,uVar3,uVar1,0,0);
                    /* try { // try from 0233d8ec to 0243d937 has its CatchHandler @ 0233d7e4 */
  uVar1 = thunk_FUN_02256840(PTR_DAT_049b5010);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar2,uVar1);
}

