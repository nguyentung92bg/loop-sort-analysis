/* IL2CPP: LavaQuest$$GetEventCompletedData
LiveOpsEventCompletedArgs_o LavaQuest__GetEventCompletedData (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$GetEventCompletedData
   LiveOpsEventCompletedArgs_o LavaQuest__GetEventCompletedData (LavaQuest_o* __this, const
   MethodInfo* method); */

void LavaQuest__GetEventCompletedData_251a484(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_48;
  int iStack_3c;
  int iStack_24;
  
  puVar3 = PTR_DAT_049c9520;
                    /* try { // try from 0261a48c to 0271a497 has its CatchHandler @ 0261a834 */
  if ((bRam0000000004f4be38 & 1) == 0) {
                    /* try { // try from 0261a4b4 to 0271a4b7 has its CatchHandler @ 0261a808 */
    FUN_021f03f8(PTR_DAT_049c9520);
    FUN_021f03f8(PTR_DAT_049b3c20);
    bRam0000000004f4be38 = 1;
  }
                    /* try { // try from 0261a4d0 to 0271a4d7 has its CatchHandler @ 0261a830 */
  lVar7 = *(long *)puVar3;
  lVar5 = *(long *)(lVar7 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0261a4e8 to 0271a4ff has its CatchHandler @ 0261a82c */
    lVar5 = FUN_02229718(lVar5);
    lVar6 = *(long *)(lVar7 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  puVar3 = PTR_DAT_049b3c20;
                    /* try { // try from 0261a510 to 0271a533 has its CatchHandler @ 0261a878 */
  uVar1 = *(undefined4 *)(**(long **)(lVar5 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
  }
  uVar4 = thunk_FUN_0224e54c(param_2 + 0x84,
                             *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x20);
                    /* try { // try from 0261a540 to 0271a54b has its CatchHandler @ 0261a828 */
  func_0x04608620(&uStack_48,uVar4,uVar1);
  iStack_24 = (int)uStack_48;
                    /* try { // try from 0261a560 to 0271a563 has its CatchHandler @ 0261a804 */
  uStack_48 = 0;
                    /* try { // try from 0261a564 to 0271a57f has its CatchHandler @ 0261a824 */
  iStack_24 = iStack_24 - (uint)(iStack_3c == 3);
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_48,&iStack_24,*(undefined8 *)puVar3);
                    /* try { // try from 0261a584 to 0271a58f has its CatchHandler @ 0261a820 */
  *param_1 = uStack_48;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

