/* IL2CPP: ConveyorSlotCreateSystem$$.ctor
void ConveyorSlotCreateSystem___ctor (ConveyorSlotCreateSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem$$.ctor
   void ConveyorSlotCreateSystem___ctor (ConveyorSlotCreateSystem_o* __this, const MethodInfo*
   method); */

undefined1  [16] ConveyorSlotCreateSystem___ctor_24b4e8c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c6c80;
  puVar1 = PTR_DAT_049c6c78;
                    /* try { // try from 025b4ea4 to 026b4ea7 has its CatchHandler @ 025b4eb0 */
                    /* catch() { ... } // from try @ 025b4ea4 with catch @ 025b4eb0 */
  if ((bRam0000000004f4bb8a & 1) == 0) {
                    /* try { // try from 025b4eb8 to 026b4ebf has its CatchHandler @ 025b4efc */
                    /* try { // try from 025b4ec0 to 026b4edb has its CatchHandler @ 025b49e8 */
    FUN_021f03f8(PTR_DAT_049c6c80);
    FUN_021f03f8(PTR_DAT_049c6c78);
    bRam0000000004f4bb8a = 1;
  }
                    /* try { // try from 025b4edc to 026b4edf has its CatchHandler @ 025b4ee8 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025b4edc with catch @ 025b4ee8 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
                    /* try { // try from 025b4eec to 026b4ef3 has its CatchHandler @ 025b4efc */
                    /* try { // try from 025b4ef4 to 026b4eff has its CatchHandler @ 025b49e8 */
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x70),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* catch() { ... } // from try @ 025b4e78 with catch @ 025b4efc
                       catch() { ... } // from try @ 025b4eb8 with catch @ 025b4efc
                       catch() { ... } // from try @ 025b4eec with catch @ 025b4efc */
                    /* try { // try from 025b4f00 to 026b4f8f has its CatchHandler @ 025b4f00
                       catch() { ... } // from try @ 025b4f00 with catch @ 025b4f00
                       catch() { ... } // from try @ 025b5018 with catch @ 025b4f00
                       catch() { ... } // from try @ 025b505c with catch @ 025b4f00
                       catch() { ... } // from try @ 025b5098 with catch @ 025b4f00 */
  return auVar4;
}

