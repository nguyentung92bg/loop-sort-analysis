/* IL2CPP: SheetInstaller$$LoadLocalSheetConverters
Cysharp_Threading_Tasks_UniTask_ISheetImporter____o SheetInstaller__LoadLocalSheetConverters (SheetInstaller_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller$$LoadLocalSheetConverters
   Cysharp_Threading_Tasks_UniTask_ISheetImporter____o SheetInstaller__LoadLocalSheetConverters
   (SheetInstaller_o* __this, const MethodInfo* method); */

void SheetInstaller__LoadLocalSheetConverters_2566244(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_049cbc28;
  puVar2 = PTR_DAT_049cb808;
  puVar1 = PTR_DAT_049cb800;
                    /* try { // try from 02666254 to 02766277 has its CatchHandler @ 02666790 */
                    /* try { // try from 02666278 to 0276629b has its CatchHandler @ 0266678c */
  if ((bRam0000000004f4c15e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb800);
    FUN_021f03f8(PTR_DAT_049cb808);
    FUN_021f03f8(PTR_DAT_049cbc30);
                    /* try { // try from 026662b0 to 027662cb has its CatchHandler @ 02666738 */
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049cbc28);
    bRam0000000004f4c15e = 1;
  }
                    /* try { // try from 026662cc to 027662df has its CatchHandler @ 02666708 */
  plVar4 = (long *)FUN_021f04e4(*(undefined8 *)puVar1,1);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 026662f4 to 0276630f has its CatchHandler @ 02666734 */
  Cathei_BakingSheet_JsonSheetConverter___ctor_22edc58(lVar5,*(undefined8 *)puVar3,uVar7,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0222c938(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_0223a53c();
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar7,0);
    }
    puVar2 = PTR_DAT_049cbc30;
    puVar1 = PTR_DAT_049b5138;
    if ((int)plVar4[3] != 0) {
                    /* try { // try from 02666334 to 0276633b has its CatchHandler @ 026666e4 */
      plVar4[4] = lVar5;
                    /* try { // try from 0266633c to 02766343 has its CatchHandler @ 026666e0 */
      thunk_FUN_021f190c(plVar4 + 4,lVar5);
                    /* try { // try from 02666348 to 02766353 has its CatchHandler @ 026666dc */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Cysharp_Threading_Tasks_UniTask__FromResult___Il2CppFullySharedGenericType__26e8f34
                (plVar4,&uStack_58,*(undefined8 *)puVar2);
                    /* try { // try from 0266636c to 02766377 has its CatchHandler @ 026666cc */
      param_1[1] = uStack_50;
      *param_1 = uStack_58;
      param_1[2] = uStack_48;
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02666388 to 02766393 has its CatchHandler @ 026666c8 */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

