/* IL2CPP: SceneRegistry$$Start
void SceneRegistry__Start (SceneRegistry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$Start
   void SceneRegistry__Start (SceneRegistry_o* __this, const MethodInfo* method); */

void SceneRegistry__Start_2553b14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_049caf48;
  puVar2 = PTR_DAT_049caf40;
  puVar1 = PTR_DAT_049caf38;
                    /* try { // try from 02653b4c to 02753bd3 has its CatchHandler @ 02653d10 */
  if ((bRam0000000004f4c094 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c70e0);
    FUN_021f03f8(PTR_DAT_049caf38);
    FUN_021f03f8(PTR_DAT_049c70f0);
    FUN_021f03f8(PTR_DAT_049caf48);
    FUN_021f03f8(PTR_DAT_049caf40);
    FUN_021f03f8(PTR_DAT_049caf50);
    FUN_021f03f8(PTR_DAT_049caf58);
    FUN_021f03f8(PTR_DAT_049c7148);
    bRam0000000004f4c094 = 1;
  }
  lVar5 = MessagePipe_DisposableBag__CreateBuilder_2f2c100(0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar2,0);
  lVar10 = *(long *)puVar3;
                    /* try { // try from 02653bec to 02753bef has its CatchHandler @ 02653cfc */
  lVar7 = *(long *)(lVar10 + 0x38);
                    /* try { // try from 02653bf0 to 02753c1b has its CatchHandler @ 02653a30 */
  if (lVar7 == 0) {
    FUN_02229774(lVar10);
    lVar7 = *(long *)(lVar10 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 02653c1c to 02753c97 has its CatchHandler @ 02653cf8 */
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049caf58;
  puVar3 = PTR_DAT_049caf50;
  puVar2 = PTR_DAT_049c70f0;
  puVar1 = PTR_DAT_049c70e0;
  lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  uVar6 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar9,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar4);
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar6,lVar5,0);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar3,0);
  lVar10 = *(long *)puVar2;
  lVar7 = *(long *)(lVar10 + 0x38);
  if (lVar7 == 0) {
                    /* try { // try from 02653ca8 to 02753cb3 has its CatchHandler @ 02653ce8 */
    FUN_02229774(lVar10);
    lVar7 = *(long *)(lVar10 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
                    /* try { // try from 02653cc0 to 02753ccf has its CatchHandler @ 02653ce4 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c7148;
                    /* try { // try from 02653cd4 to 02753cd7 has its CatchHandler @ 02653d0c */
                    /* try { // try from 02653cd8 to 02753cdb has its CatchHandler @ 02653d08 */
                    /* try { // try from 02653cdc to 02753cdf has its CatchHandler @ 02653d04 */
  lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 02653ce0 to 02753ce3 has its CatchHandler @ 02653d00 */
                    /* catch() { ... } // from try @ 02653cc0 with catch @ 02653ce4
                       try { // try from 02653ce4 to 02753d27 has its CatchHandler @ 02653a30 */
                    /* catch() { ... } // from try @ 02653ca8 with catch @ 02653ce8 */
                    /* catch() { ... } // from try @ 02653acc with catch @ 02653cec */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 02653ad4 with catch @ 02653cf0 */
    lVar7 = FUN_02229718();
  }
                    /* catch() { ... } // from try @ 02653aa8 with catch @ 02653cf4 */
                    /* catch() { ... } // from try @ 02653af4 with catch @ 02653cf8
                       catch() { ... } // from try @ 02653c1c with catch @ 02653cf8 */
                    /* catch() { ... } // from try @ 02653bec with catch @ 02653cfc */
                    /* catch() { ... } // from try @ 02653ce0 with catch @ 02653d00 */
                    /* catch() { ... } // from try @ 02653cdc with catch @ 02653d04 */
                    /* catch() { ... } // from try @ 02653cd8 with catch @ 02653d08 */
  uVar6 = MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
                    (uVar9,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02653cd4 with catch @ 02653d0c */
                    /* catch() { ... } // from try @ 02653b4c with catch @ 02653d10 */
  MessagePipe_DisposableBag__AddTo_2f2c318(uVar6,lVar5,0);
  if (lVar5 != 0) {
    uVar6 = MessagePipe_DisposableBagBuilder__Build_2f2dd30(lVar5,0);
                    /* try { // try from 02653d28 to 02753d3f has its CatchHandler @ 02653da0 */
    puVar8 = (undefined8 *)(param_1 + 0x28);
    *puVar8 = uVar6;
                    /* try { // try from 02653d40 to 02753d8f has its CatchHandler @ 02653a30 */
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                   ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

