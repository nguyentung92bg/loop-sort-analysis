/* IL2CPP: SweepEffect$$Awake
void SweepEffect__Awake (SweepEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SweepEffect$$Awake
   void SweepEffect__Awake (SweepEffect_o* __this, const MethodInfo* method); */

void SweepEffect__Awake_257381c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 02673820 to 0277383b has its CatchHandler @ 02673b88 */
  if ((bRam0000000004f4c1ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c1ef = 1;
  }
                    /* try { // try from 0267384c to 02773857 has its CatchHandler @ 02673b84 */
  plVar2 = (long *)UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
                    /* try { // try from 02673864 to 0277386b has its CatchHandler @ 02673b80 */
    lVar3 = *(long *)PTR_DAT_049bc0c8;
                    /* try { // try from 0267386c to 0277387f has its CatchHandler @ 02673b7c */
    plVar1 = plVar2;
    if (*plVar2 != lVar3) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x40) = plVar1;
                    /* try { // try from 02673880 to 02773893 has its CatchHandler @ 02673b78 */
    if (*plVar2 != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c(param_1 + 0x40,plVar2);
                    /* try { // try from 026738a8 to 027738ab has its CatchHandler @ 02673b6c */
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0), lVar3 != 0
     )) {
    if ((bRam0000000004f581f8 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a251b8,0,0);
      bRam0000000004f581f8 = 1;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    if (lVar4 != 0) {
      if (pcRam0000000004f582c8 == (code *)0x0) {
        pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
      }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f582c8)(lVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

