/* IL2CPP: SheetInstaller$$ValidateSheetGroupName
Cysharp_Threading_Tasks_UniTask_string__o SheetInstaller__ValidateSheetGroupName (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller$$ValidateSheetGroupName
   Cysharp_Threading_Tasks_UniTask_string__o SheetInstaller__ValidateSheetGroupName
   (System_String_o* name, const MethodInfo* method); */

void SheetInstaller__ValidateSheetGroupName_2566398(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  puVar1 = PTR_DAT_049c3f78;
  if ((bRam0000000004f4c15f & 1) == 0) {
                    /* try { // try from 026663cc to 027663d7 has its CatchHandler @ 02666744 */
    FUN_021f03f8(PTR_DAT_049c3f78);
    FUN_021f03f8(PTR_DAT_049cbc38);
                    /* try { // try from 026663e4 to 027663eb has its CatchHandler @ 0266673c */
    FUN_021f03f8(PTR_DAT_049c3f88);
    bRam0000000004f4c15f = 1;
  }
  puVar3 = PTR_DAT_049cbc38;
  puVar2 = PTR_DAT_049c3f88;
  auStack_40[0] = 0;
                    /* try { // try from 02666400 to 0276641b has its CatchHandler @ 026666fc */
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 0266641c to 02766423 has its CatchHandler @ 026666f4 */
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_60 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 02666440 to 0276647f has its CatchHandler @ 02666730 */
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  auStack_40[0] = param_2;
  thunk_FUN_021f190c(auStack_40,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_60 | 8,&uStack_78,*(undefined8 *)puVar2);
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = uStack_68;
                    /* try { // try from 02666498 to 027664c7 has its CatchHandler @ 02666748 */
  return;
}

