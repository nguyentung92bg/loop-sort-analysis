/* IL2CPP: Extensions$$ToTextRole
int32_t Extensions__ToTextRole (int32_t authType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToTextRole
   int32_t Extensions__ToTextRole (int32_t authType, const MethodInfo* method); */

undefined4 Extensions__ToTextRole_24e842c(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uStack_14;
  
                    /* try { // try from 025e842c to 026e8463 has its CatchHandler @ 025e8ffc */
  if (param_1 < 7) {
    return *(undefined4 *)(&UNK_013e9f74 + (ulong)param_1 * 4);
  }
  uStack_14 = param_1;
  uVar1 = thunk_FUN_02256840(PTR_DAT_049b4ff8);
  uVar1 = thunk_FUN_0222c66c(uVar1,&uStack_14);
  thunk_FUN_02256840(PTR_DAT_049b5000);
  uVar2 = thunk_FUN_0222ca34();
                    /* try { // try from 025e8478 to 026e849f has its CatchHandler @ 025e9000 */
  uVar3 = thunk_FUN_02256840(PTR_DAT_049b5008);
  System_ArgumentOutOfRangeException___ctor_306a2d0(uVar2,uVar3,uVar1,0,0);
  uVar1 = thunk_FUN_02256840(PTR_DAT_049c7ec8);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar2,uVar1);
}

