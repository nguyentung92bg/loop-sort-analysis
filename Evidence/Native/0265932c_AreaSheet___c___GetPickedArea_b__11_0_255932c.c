/* IL2CPP: AreaSheet.<>c$$<GetPickedArea>b__11_0
bool AreaSheet___c___GetPickedArea_b__11_0 (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.<>c$$<GetPickedArea>b__11_0
   bool AreaSheet___c___GetPickedArea_b__11_0 (AreaSheet___c_o* __this, AreaSheet_Row_o* x, const
   MethodInfo* method); */

bool AreaSheet___c___GetPickedArea_b__11_0_255932c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 0265932c to 0275932f has its CatchHandler @ 02659414 */
  if ((bRam0000000004f4c0cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 02659354 to 02759357 has its CatchHandler @ 02659410 */
    bRam0000000004f4c0cd = 1;
  }
  puVar2 = PTR_DAT_049b5310;
                    /* try { // try from 02659358 to 027593a7 has its CatchHandler @ 02658d20 */
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0xa0,0);
    return iVar1 == iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

