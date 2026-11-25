/* IL2CPP: SelectBooster$$Start
void SelectBooster__Start (SelectBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBooster$$Start
   void SelectBooster__Start (SelectBooster_o* __this, const MethodInfo* method); */

void SelectBooster__Start_23f92d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  GameBehaviourBase__Start_24f68b4(param_1,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    SelectBoosterSystem__OnActivated_23f9328();
    lVar2 = *(long *)(param_1 + 0xb8);
    if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0xb0), lVar1 != 0)) {
      uVar4 = *(undefined8 *)(lVar2 + 0xa8);
      uVar3 = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(lVar2 + 0xb0);
      *(undefined8 *)(lVar1 + 0xa8) = uVar4;
      *(undefined8 *)(lVar1 + 0xa0) = uVar3;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << (lVar1 + 0xa0U >> 0xc & 0x3f),
                     (lVar1 + 0xa0U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

