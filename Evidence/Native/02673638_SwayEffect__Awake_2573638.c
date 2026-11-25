/* IL2CPP: SwayEffect$$Awake
void SwayEffect__Awake (SwayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwayEffect$$Awake
   void SwayEffect__Awake (SwayEffect_o* __this, const MethodInfo* method); */

void SwayEffect__Awake_2573638
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
                    /* try { // try from 02673640 to 0277369b has its CatchHandler @ 02673bbc */
  if ((bRam0000000004f4c1ee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4c1ee = 1;
  }
  plVar2 = (long *)UnityEngine_Component__get_transform_3c18724(param_5,0);
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 026736a8 to 027736af has its CatchHandler @ 02673ba0 */
    plVar2 = (long *)0x0;
    *(undefined8 *)(param_5 + 0x30) = 0;
  }
  else {
    lVar3 = *(long *)PTR_DAT_049bc0c8;
    plVar1 = plVar2;
    if (*plVar2 != lVar3) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_5 + 0x30) = plVar1;
    if (*plVar2 != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_021f190c((long *)(param_5 + 0x30),plVar2);
  lVar3 = *(long *)(param_5 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026736dc to 027736df has its CatchHandler @ 02673b54 */
    FUN_021f06a0();
  }
                    /* try { // try from 026736c0 to 027736cb has its CatchHandler @ 02673b68 */
  uVar4 = UnityEngine_Transform__get_localRotation_3c2d92c(lVar3,0);
  *(undefined4 *)(param_5 + 0x38) = uVar4;
  *(undefined4 *)(param_5 + 0x3c) = param_2;
  *(undefined4 *)(param_5 + 0x40) = param_3;
  *(undefined4 *)(param_5 + 0x44) = param_4;
  return;
}

