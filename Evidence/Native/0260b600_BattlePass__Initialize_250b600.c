/* IL2CPP: BattlePass$$Initialize
void BattlePass__Initialize (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$Initialize
   void BattlePass__Initialize (BattlePass_o* __this, const MethodInfo* method); */

void BattlePass__Initialize_250b600(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x23;
  
  puVar3 = PTR_DAT_049c90c8;
  puVar2 = PTR_DAT_049c2c18;
  puVar1 = PTR_DAT_049c2c08;
  if ((bRam0000000004f4bdca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c90d0);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c90d8);
    FUN_021f03f8(PTR_DAT_049c90e0);
    FUN_021f03f8(PTR_DAT_049c90c8);
    FUN_021f03f8(PTR_DAT_049c90e8);
    FUN_021f03f8(PTR_DAT_049c2c60);
                    /* try { // try from 0260b6ac to 0270b733 has its CatchHandler @ 0260bc0c */
    FUN_021f03f8(PTR_DAT_049c90f0);
    FUN_021f03f8(PTR_DAT_049c54d0);
    bRam0000000004f4bdca = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar3,0);
  lVar10 = *(long *)puVar2;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c90e8;
  puVar3 = PTR_DAT_049c90d8;
  puVar2 = PTR_DAT_049c90d0;
  puVar1 = PTR_DAT_049c2c60;
                    /* try { // try from 0260b734 to 0270b74f has its CatchHandler @ 0260bbf8 */
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
                    /* try { // try from 0260b76c to 0270b76f has its CatchHandler @ 0260bb98 */
                    /* try { // try from 0260b774 to 0270b787 has its CatchHandler @ 0260bbf0 */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar9,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 0260b788 to 0270b797 has its CatchHandler @ 0260bbec */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar10 = *(long *)puVar3;
                    /* try { // try from 0260b79c to 0270b7a7 has its CatchHandler @ 0260bbe8 */
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
                    /* try { // try from 0260b7a8 to 0270b7bb has its CatchHandler @ 0260bbe4 */
    FUN_02229774(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 0260b7bc to 0270b7cf has its CatchHandler @ 0260bbe0 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c90f0;
  puVar2 = PTR_DAT_049c90e0;
  puVar1 = PTR_DAT_049c2f50;
                    /* try { // try from 0260b7d0 to 0270b7eb has its CatchHandler @ 0260bbdc */
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    /* try { // try from 0260b7f4 to 0270b7fb has its CatchHandler @ 0260bbd8 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 0260b7fc to 0270b80b has its CatchHandler @ 0260bbd4 */
    lVar8 = FUN_02229718();
  }
                    /* try { // try from 0260b810 to 0270b81b has its CatchHandler @ 0260bbd0 */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar9,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
                    /* try { // try from 0260b81c to 0270b82f has its CatchHandler @ 0260bbcc */
  lVar8 = *(long *)(param_1 + 0x48);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 0260b830 to 0270b843 has its CatchHandler @ 0260bbc8 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar2,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0260b844 to 0270b87f has its CatchHandler @ 0260b274 */
  uVar9 = *(undefined8 *)PTR_DAT_049c54d0;
  if ((bRam0000000004f4c02b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50,uVar9,uVar5,0);
    FUN_021f03f8(PTR_DAT_049ca918);
    FUN_021f03f8(PTR_DAT_049ca908);
    FUN_021f03f8(PTR_DAT_049ca920);
    FUN_021f03f8(PTR_DAT_049ca928);
    bRam0000000004f4c02b = 1;
  }
  if (*(long *)(lVar8 + 0x50) != 0) {
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(lVar8 + 0x50),uVar9,&stack0xffffffffffffffc8,
                       *(undefined8 *)PTR_DAT_049ca908);
    lVar8 = *(long *)(lVar8 + 0x50);
    if ((uVar6 & 1) == 0) {
      if (lVar8 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar8,uVar9,uVar5,*(undefined8 *)PTR_DAT_049ca918);
    }
    else {
      if (lVar8 == 0) goto LAB_0264a4ac;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (lVar8,uVar9,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049ca920);
      lVar10 = System_Delegate__Combine_3145640(unaff_x23,uVar5,0);
      if (lVar10 == 0) {
        lVar7 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_049c2f50;
        lVar7 = thunk_FUN_0222c938(lVar10,uVar5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(lVar10,uVar5);
        }
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar8,uVar9,lVar7,*(undefined8 *)PTR_DAT_049ca928);
    }
    return;
  }
LAB_0264a4ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

