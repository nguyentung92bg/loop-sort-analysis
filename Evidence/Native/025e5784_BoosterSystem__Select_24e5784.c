/* IL2CPP: BoosterSystem$$Select
void BoosterSystem__Select (BoosterSystem_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$Select
   void BoosterSystem__Select (BoosterSystem_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void BoosterSystem__Select_24e5784(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 025e578c to 026e57d7 has its CatchHandler @ 025e5990 */
  if ((bRam0000000004f4bc7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c7b20);
    FUN_021f03f8(PTR_DAT_049c7b28);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 025e57d8 to 026e57f7 has its CatchHandler @ 025e4fcc */
    bRam0000000004f4bc7f = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar1 = BoosterSystem__TryCancel_24e5938(param_1);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 025e592c to 026e592f has its CatchHandler @ 025e5a84 */
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = param_2;
                    /* try { // try from 025e57f8 to 026e5807 has its CatchHandler @ 025e597c */
  if (*(long *)(param_1 + 0x30) != 0) {
    Boosters__Get_24e5ab0(&uStack_70,*(long *)(param_1 + 0x30),param_2);
    uVar2 = uStack_70;
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025e5834 to 026e5837 has its CatchHandler @ 025e5974 */
    uVar2 = UnityEngine_Object__Instantiate_object__2695910(uVar2,*(undefined8 *)PTR_DAT_049c7b28);
                    /* try { // try from 025e5838 to 026e5847 has its CatchHandler @ 025e5980 */
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar2);
    if (*(long *)(param_1 + 0x48) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30) = *(undefined8 *)(param_1 + 0x88);
      thunk_FUN_021f190c();
                    /* try { // try from 025e5860 to 026e5877 has its CatchHandler @ 025e5978 */
      plVar6 = *(long **)(param_1 + 0x68);
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
                    /* try { // try from 025e5884 to 026e588f has its CatchHandler @ 025e5970 */
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c7b20) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_025e58bc;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
                    /* try { // try from 025e58a8 to 026e58ab has its CatchHandler @ 025e596c */
        puVar3 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c7b20,0);
LAB_025e58bc:
        (*(code *)*puVar3)(plVar6,0,puVar3[1]);
        if (*(long *)(param_1 + 0x58) != 0) {
          AudioModule__GetPlayer_2530858(&uStack_70,*(long *)(param_1 + 0x58),0);
          uStack_38 = uStack_68;
          uStack_40 = uStack_70;
          uStack_28 = uStack_58;
          uStack_30 = uStack_60;
                    /* try { // try from 025e58f0 to 026e58fb has its CatchHandler @ 025e5964 */
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar4 != 0)) {
                    /* try { // try from 025e58fc to 026e592b has its CatchHandler @ 025e4fcc */
            uVar2 = *(undefined8 *)(lVar4 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
              FUN_021f0574();
            }
            AudioPlayer__Play_2530c98(&uStack_40,uVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

