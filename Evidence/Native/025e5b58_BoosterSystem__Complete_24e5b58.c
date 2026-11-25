/* IL2CPP: BoosterSystem$$Complete
void BoosterSystem__Complete (BoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$Complete
   void BoosterSystem__Complete (BoosterSystem_o* __this, const MethodInfo* method); */

void BoosterSystem__Complete_24e5b58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bc81 & 1) == 0) {
                    /* try { // try from 025e5b78 to 026e5b7b has its CatchHandler @ 025e5bc4 */
                    /* catch() { ... } // from try @ 025e5b0c with catch @ 025e5b7c */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 025e5b84 to 026e5b8b has its CatchHandler @ 025e5bc0 */
                    /* try { // try from 025e5b8c to 026e5ba3 has its CatchHandler @ 025e4fcc */
    FUN_021f03f8(PTR_DAT_049c7b40);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 025e5ba4 to 026e5ba7 has its CatchHandler @ 025e5bac */
    FUN_021f03f8(PTR_DAT_049c7b48);
                    /* catch() { ... } // from try @ 025e5ba4 with catch @ 025e5bac */
    bRam0000000004f4bc81 = 1;
  }
                    /* try { // try from 025e5bb0 to 026e5bb7 has its CatchHandler @ 025e5bc0 */
  puVar2 = PTR_DAT_049c7b48;
  puVar1 = PTR_DAT_049b6110;
                    /* try { // try from 025e5bb8 to 026e5bc7 has its CatchHandler @ 025e4fcc */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* catch() { ... } // from try @ 025e5a48 with catch @ 025e5bc0
                       catch() { ... } // from try @ 025e5b84 with catch @ 025e5bc0
                       catch() { ... } // from try @ 025e5bb0 with catch @ 025e5bc0 */
  uStack_78 = 0;
  uStack_80 = 0;
                    /* catch() { ... } // from try @ 025e5b20 with catch @ 025e5bc4
                       catch() { ... } // from try @ 025e5b78 with catch @ 025e5bc4 */
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    AnalyticsModule__UseBooster_253f4fc(*(long *)(param_1 + 0x50),*(int *)(param_1 + 0x90),0);
    lVar9 = *(long *)(param_1 + 0x60);
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_60 = 0x100000000;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = Extensions__ToEconomyItem_24e5d5c(uVar3);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
    uVar4 = Extensions__ToAnalyticsName_24e5df4(*(undefined4 *)(param_1 + 0x90));
    uStack_80 = System_String__Concat_2f72b28(uVar4,*(undefined8 *)puVar2,0);
    thunk_FUN_021f190c(&uStack_80,uStack_80);
    if (lVar9 != 0) {
      func_0x04608620(auStack_d0,&uStack_80,0x50);
      EconomyModule__TryConsume_2533778(lVar9,auStack_d0,0);
      lVar9 = *(long *)(param_1 + 0x88);
      uVar3 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x90) = 0;
      puVar1 = PTR_DAT_049b3b98;
      if (lVar9 != 0) {
        uVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        UnityEngine_Object__Destroy_3c24380(uVar4,0);
        *(undefined8 *)(param_1 + 0x88) = 0;
        thunk_FUN_021f190c((long *)(param_1 + 0x88),0);
        if (*(long *)(param_1 + 0x48) != 0) {
          InteractionModule__ClearTouchInterceptor_2535e84(*(long *)(param_1 + 0x48),0);
          plVar8 = *(long **)(param_1 + 0x78);
          if (plVar8 != (long *)0x0) {
            lVar9 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7b40) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_025e5d34;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c7b40,0);
LAB_025e5d34:
            (*(code *)*puVar5)(plVar8,uVar3,puVar5[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

