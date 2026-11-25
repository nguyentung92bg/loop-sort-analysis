/* IL2CPP: SheetInstaller$$LoadGoogleSheetConverters
Cysharp_Threading_Tasks_UniTask_ISheetImporter____o SheetInstaller__LoadGoogleSheetConverters (SheetInstaller_o* __this, System_String_o* sheetGroupName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller$$LoadGoogleSheetConverters
   Cysharp_Threading_Tasks_UniTask_ISheetImporter____o SheetInstaller__LoadGoogleSheetConverters
   (SheetInstaller_o* __this, System_String_o* sheetGroupName, const MethodInfo* method); */

void SheetInstaller__LoadGoogleSheetConverters_2566150(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cbc10;
                    /* try { // try from 02666154 to 02766157 has its CatchHandler @ 026666d8 */
                    /* try { // try from 02666160 to 0276616b has its CatchHandler @ 02666710 */
  if ((bRam0000000004f4c15d & 1) == 0) {
                    /* try { // try from 02666180 to 0276618b has its CatchHandler @ 0266670c */
    FUN_021f03f8(PTR_DAT_049cbc10);
    FUN_021f03f8(PTR_DAT_049cbc18);
                    /* try { // try from 02666198 to 027661bb has its CatchHandler @ 026667a4 */
    FUN_021f03f8(PTR_DAT_049cbc20);
    bRam0000000004f4c15d = 1;
  }
  puVar3 = PTR_DAT_049cbc20;
  puVar2 = PTR_DAT_049cbc18;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
                    /* try { // try from 026661bc to 027661df has its CatchHandler @ 026667a0 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* try { // try from 026661e0 to 02766207 has its CatchHandler @ 0266679c */
  func_0x04608670((ulong)&uStack_50 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
                    /* try { // try from 02666208 to 0276622f has its CatchHandler @ 02666798 */
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_50 | 8,&uStack_68,*(undefined8 *)puVar3);
                    /* try { // try from 02666230 to 02766253 has its CatchHandler @ 02666794 */
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  param_1[2] = uStack_58;
  return;
}

