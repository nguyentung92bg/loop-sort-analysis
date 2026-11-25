/* IL2CPP: PointerHoldElement$$AddStartListener
void PointerHoldElement__AddStartListener (PointerHoldElement_o* __this, System_Action_o* listener, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PointerHoldElement$$AddStartListener
   void PointerHoldElement__AddStartListener (PointerHoldElement_o* __this, System_Action_o*
   listener, const MethodInfo* method); */

void PointerHoldElement__AddStartListener_241d320(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 0251d324 to 0261d32f has its CatchHandler @ 0251d618 */
  if ((bRam0000000004f4b75f & 1) == 0) {
                    /* try { // try from 0251d340 to 0261d34b has its CatchHandler @ 0251d610 */
    FUN_021f03f8(PTR_DAT_049b4308);
    bRam0000000004f4b75f = 1;
  }
  plVar3 = (long *)(param_1 + 0x28);
  plVar1 = (long *)System_Delegate__Combine_3145640(*plVar3,param_2,0);
                    /* try { // try from 0251d360 to 0261d367 has its CatchHandler @ 0251d5dc */
  if (plVar1 == (long *)0x0) {
    *plVar3 = 0;
  }
  else {
    lVar2 = *(long *)PTR_DAT_049b4308;
                    /* try { // try from 0251d380 to 0261d38b has its CatchHandler @ 0251d5c4 */
                    /* try { // try from 0251d38c to 0261d393 has its CatchHandler @ 0251d5bc */
    if ((*plVar1 != lVar2) || (*plVar3 = (long)plVar1, *plVar1 != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar1);
    }
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)plVar3 >> 0xc & 0x3f),
                 ((ulong)plVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

