/* IL2CPP: ConveyorSpeedSystem$$IsLastCarrier
bool ConveyorSpeedSystem__IsLastCarrier (ConveyorSpeedSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSpeedSystem$$IsLastCarrier
   bool ConveyorSpeedSystem__IsLastCarrier (ConveyorSpeedSystem_o* __this, const MethodInfo*
   method); */

uint ConveyorSpeedSystem__IsLastCarrier_24b5b40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
                    /* try { // try from 025b5b58 to 026b5b5f has its CatchHandler @ 025b5db0 */
  if ((bRam0000000004f4bb8e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 025b5b80 to 026b5b83 has its CatchHandler @ 025b5b94 */
                    /* try { // try from 025b5b84 to 026b5baf has its CatchHandler @ 025b534c */
    FUN_021f03f8(PTR_DAT_049c22d8);
                    /* catch() { ... } // from try @ 025b5a94 with catch @ 025b5b88 */
                    /* catch() { ... } // from try @ 025b5aa8 with catch @ 025b5b8c */
    bRam0000000004f4bb8e = 1;
  }
  puVar2 = PTR_DAT_049c22d8;
  puVar1 = PTR_DAT_049b3b98;
                    /* catch() { ... } // from try @ 025b5aa0 with catch @ 025b5b90 */
  lVar7 = *(long *)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 025b5b80 with catch @ 025b5b94 */
  uStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  if (lVar7 == 0) {
LAB_025b5cf4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025b5cf4 to 026b5cff has its CatchHandler @ 025b5d90 */
    FUN_021f06a0();
  }
                    /* try { // try from 025b5bb0 to 026b5bc7 has its CatchHandler @ 025b5d60 */
  lStack_50 = 0;
  lStack_48 = 0;
  lStack_58 = (ulong)*(uint *)(lVar7 + 0x30) << 0x20;
  thunk_FUN_021f190c(&lStack_50,0);
  lStack_48 = *(long *)(lVar7 + 0x28);
  thunk_FUN_021f190c(&lStack_48);
                    /* try { // try from 025b5be4 to 026b5be7 has its CatchHandler @ 025b5d5c */
  lStack_68 = lStack_50;
  uStack_70 = lStack_58;
  lStack_60 = lStack_48;
  lVar7 = 0;
  do {
    do {
      iVar6 = (int)uStack_70 + -1;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar6);
      if (iVar6 < 0) {
                    /* try { // try from 025b5c0c to 026b5c0f has its CatchHandler @ 025b5d70 */
                    /* try { // try from 025b5c10 to 026b5c63 has its CatchHandler @ 025b534c */
        uVar3 = uStack_70._4_4_ - 1;
        uStack_70 = CONCAT44(uVar3,iVar6);
        if ((int)uVar3 < 0) goto LAB_025b5cb8;
        lVar8 = *(long *)(lStack_60 + (ulong)uVar3 * 8 + 0x20);
        lStack_68 = *(long *)(lVar8 + 0x18);
        thunk_FUN_021f190c((ulong)&uStack_70 | 8);
        iVar6 = *(int *)(lVar8 + 0x30) + -1;
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar6);
      }
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_025b5cf4;
      plVar4 = (long *)FUN_024f6008(*(long *)(param_1 + 0x58),
                                    *(undefined8 *)(lStack_68 + (long)iVar6 * 8 + 0x20),
                                    *(undefined8 *)puVar2);
      lVar8 = *plVar4;
                    /* try { // try from 025b5c64 to 026b5c67 has its CatchHandler @ 025b5db4 */
      if (lVar8 == 0) goto LAB_025b5cf4;
                    /* try { // try from 025b5c68 to 026b5c6b has its CatchHandler @ 025b534c */
                    /* try { // try from 025b5c6c to 026b5c73 has its CatchHandler @ 025b5dac */
    } while ((*(char *)(lVar8 + 0x1b1) != '\0') ||
            ((uVar5 = Carrier__IsEmpty_23faccc(lVar8,0), (uVar5 & 1) != 0
                    /* try { // try from 025b5c74 to 026b5c77 has its CatchHandler @ 025b5da8 */
                    /* try { // try from 025b5c78 to 026b5c7b has its CatchHandler @ 025b5da4 */
                    /* try { // try from 025b5c7c to 026b5c7f has its CatchHandler @ 025b5da0 */ &&
             (uVar5 = Carrier__IsTransferringOrAddingBlocks_23fad2c(lVar8,0), (uVar5 & 1) == 0
                    /* try { // try from 025b5c80 to 026b5c83 has its CatchHandler @ 025b5d9c */
                    /* try { // try from 025b5c84 to 026b5c87 has its CatchHandler @ 025b5d98 */
                    /* try { // try from 025b5c88 to 026b5c8b has its CatchHandler @ 025b5d94 */
                    /* try { // try from 025b5c8c to 026b5c8f has its CatchHandler @ 025b5d90 */))))
    ;
                    /* try { // try from 025b5c90 to 026b5c93 has its CatchHandler @ 025b5d8c */
                    /* try { // try from 025b5c94 to 026b5c97 has its CatchHandler @ 025b5d88 */
                    /* try { // try from 025b5c98 to 026b5c9b has its CatchHandler @ 025b5d84 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025b5c9c to 026b5c9f has its CatchHandler @ 025b5d80 */
      FUN_021f0574();
    }
                    /* try { // try from 025b5ca0 to 026b5cab has its CatchHandler @ 025b5dac */
                    /* try { // try from 025b5cac to 026b5cb7 has its CatchHandler @ 025b5da8 */
    uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar7,0,0);
    lVar7 = lVar8;
  } while ((uVar5 & 1) != 0);
  lVar7 = 0;
LAB_025b5cb8:
                    /* try { // try from 025b5cb8 to 026b5cc3 has its CatchHandler @ 025b5da4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025b5cc4 to 026b5ccf has its CatchHandler @ 025b5da0 */
    FUN_021f0574();
  }
                    /* try { // try from 025b5cd0 to 026b5cdb has its CatchHandler @ 025b5d9c */
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lVar7,0,0);
                    /* try { // try from 025b5cdc to 026b5ce7 has its CatchHandler @ 025b5d98 */
                    /* try { // try from 025b5ce8 to 026b5cf3 has its CatchHandler @ 025b5d94 */
  return uVar3 & 1;
}

