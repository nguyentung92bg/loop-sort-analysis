/* IL2CPP: ReviveSystem$$CanRevive
bool ReviveSystem__CanRevive (ReviveSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSystem$$CanRevive
   bool ReviveSystem__CanRevive (ReviveSystem_o* __this, const MethodInfo* method); */

uint ReviveSystem__CanRevive_24e0f48(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *aplStack_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 025e0f54 to 026e0f5b has its CatchHandler @ 025e0fc8 */
                    /* try { // try from 025e0f60 to 026e0f6f has its CatchHandler @ 025e0fbc */
  if ((bRam0000000004f4bc66 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6760);
                    /* try { // try from 025e0f74 to 026e0f83 has its CatchHandler @ 025e0fb8 */
    FUN_021f03f8(PTR_DAT_049c6768);
                    /* try { // try from 025e0f84 to 026e0fab has its CatchHandler @ 025e0e08 */
    FUN_021f03f8(PTR_DAT_049c6770);
    FUN_021f03f8(PTR_DAT_049c6778);
    bRam0000000004f4bc66 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  lVar2 = ReviveSystem__GetRevive_24e0f1c(param_1);
                    /* try { // try from 025e0fac to 026e0faf has its CatchHandler @ 025e0fc4 */
  if (lVar2 == 0) {
LAB_025e10dc:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025e0fb0 to 026e0fb3 has its CatchHandler @ 025e0fc0 */
                    /* try { // try from 025e0fb4 to 026e0fef has its CatchHandler @ 025e0e08 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0f74 with catch @ 025e0fb8
                        */
  if (*(int *)(lVar2 + 0x18) != 6) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0f60 with catch @ 025e0fbc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0fb0 with catch @ 025e0fc0
                        */
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_025e10dc;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0fac with catch @ 025e0fc4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0f54 with catch @ 025e0fc8
                        */
    uVar3 = CapacityBoosterSystem__HasCapacityCarrier_23f48e4(*(long *)(param_1 + 0x30),0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0f44 with catch @ 025e0fcc
                        */
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_025e10dc;
                    /* try { // try from 025e0ff0 to 026e0ff3 has its CatchHandler @ 025e100c */
      uVar3 = LoseSystem__IsConveyorFull_24df8b4();
                    /* try { // try from 025e0ff4 to 026e100f has its CatchHandler @ 025e0e08 */
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)(param_1 + 0x68);
        if (lVar2 == 0) goto LAB_025e10dc;
                    /* catch() { ... } // from try @ 025e0ff0 with catch @ 025e100c */
                    /* try { // try from 025e1010 to 026e1017 has its CatchHandler @ 025e1020 */
                    /* try { // try from 025e1018 to 026e1023 has its CatchHandler @ 025e0e08 */
        uStack_50 = 0;
        uStack_48 = 0;
        aplStack_40[0] = (long *)0x0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e1010 with catch @ 025e1020
                        */
        lVar5 = *(long *)PTR_DAT_049c6778;
        puVar4 = (undefined8 *)
                 thunk_FUN_0224e54c(lVar2,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                   0x80) + 0x60);
        uStack_30 = *puVar4;
        uStack_28 = 0;
        thunk_FUN_021f190c(&uStack_30);
        uStack_28 = 0;
        uStack_48 = 0;
        uStack_50 = uStack_30;
        thunk_FUN_021f190c(&uStack_50,0);
        puVar4 = (undefined8 *)
                 thunk_FUN_0224e54c(lVar2,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                   0x80) + 0x80);
        aplStack_40[0] = (long *)*puVar4;
        thunk_FUN_021f190c(aplStack_40);
        uStack_68 = uStack_48;
        uStack_70 = uStack_50;
        plStack_60 = aplStack_40[0];
        do {
          uVar1 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_70,0);
          if ((uVar1 & 1) == 0) break;
          lVar2 = *(long *)((long)plStack_60 +
                           (ulong)*(uint *)(*plStack_60 + 0x104) * (long)uStack_68._4_4_ + 0x20);
          if (lVar2 == 0) goto LAB_025e10dc;
        } while (*(char *)(lVar2 + 0xc0) != '\0');
      }
      else {
        uVar1 = 0;
      }
      goto LAB_025e0fd4;
    }
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0ec4 with catch @ 025e0fd0
                        */
  uVar1 = 1;
LAB_025e0fd4:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e0ee4 with catch @ 025e0fd4
                        */
  return uVar1 & 1;
}

